import csv
from lxml import html
from urllib.request import urlopen
from lxml import etree

def addto_csv(html_doc):                        #adding to .csv
    tree = html.fromstring(html_doc)
    xml_tr = tree.xpath('//tr')         #xml lines
    names = []
    phones = []
    npi = []
    primary = []
    adressfp = []
    adresssp = []
    adress = []
    for i in range(len(xml_tr)):
        str_tr = etree.tostring(xml_tr[i])
        tree2 = html.fromstring(str_tr)
        xml_td = tree2.xpath('//td')
        if len(xml_td) == 6:
            names.append(xml_td[1].text)
            phones.append(xml_td[4].text)
            adressfp.append(xml_td[3].text)
            tree3 = html.fromstring(etree.tostring(xml_td[0]))
            xml_a = tree3.xpath('//a')
            npi.append(xml_a[0].text)
            tree4 = html.fromstring(etree.tostring(xml_td[5]))
            xml_div = tree4.xpath('//div')
            try:
                primary.append(xml_div[0].text)
            except  IndexError:
                xml_div = tree4.xpath('//td')
                primary.append(xml_div[0].text)
            str_adds = etree.tostring(xml_td[3])
            str_adds = str_adds.decode('utf-8').replace("\t", "")
            n = str_adds.find("<br/>")
            str_adds = str_adds.replace("\n", "")
            str_adds = str_adds[n + 5:]
            str_adds = str_adds[:str_adds.find('<')]
            adress.append(xml_td[3].text)
            adress[-1] += str_adds


    with open("data.csv", 'a') as file:
        fieldnames = ['NPI', 'names', 'adress', 'phones', 'primary']
        writer = csv.DictWriter(file, fieldnames=fieldnames)

        writer.writeheader()
        for i in range(len(npi)):
            writer.writerow({'NPI':npi[i],'names':names[i],'adress': adress[i],'phones': phones[i],'primary': primary[i]})
