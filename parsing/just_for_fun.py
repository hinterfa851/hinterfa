import aiohttp
import asyncio
import csv                      #add to .csv
from test import addto_csv
from lxml import html           #parsing lib
from lxml import etree

async def fetch(url, session):
    async with session.get(url) as response:
        return await response.read()

n = 0;

async def run(r):
    url = 'https://npiregistry.cms.hhs.gov/registry/search-results-table?entity_type=NPI-1&amp;taxonomy_description=REGISTERED+NURSE&amp;addressType=ANY&amp;skip={}'
    tasks = []
    global n
    timeout = aiohttp.ClientTimeout(total=60 * 40)
    async with aiohttp.ClientSession(timeout = timeout) as session:
        for i in range(r):                                      #creating tasks
            task = asyncio.ensure_future(fetch(url.format(i * 100 + (n * 1000)), session))
            tasks.append(task)
        responses = await asyncio.gather(*tasks)                #running tasks
        n += 1;
        for k in responses:
            addto_csv(k)                                         #adding to .csv
        session.close()

while(n <= 171):                                                   #creating a lot of sessions with 10 parallel tasks
    loop = asyncio.get_event_loop()
    future = asyncio.ensure_future(run(10))
    loop.run_until_complete(future)
    print (n)
