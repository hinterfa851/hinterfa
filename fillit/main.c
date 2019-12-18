#include "library.c"
#include "alg.c"

int main(int argc, char **argv)
{
    tt_list *tetr;
    char **map;
    int n;

    n = 2;
    map = cr_free_map(n);
//    if(argc != 2)
//      return (0);
//reader_to_lst(argv[1], tetr);
    while (((map = calculate(tetr, map))[0][0]) == '\0')
        map = cr_free_map(++n);
    printf("%s\n", (map)[0]);
    printf("%s\n", (map)[2]);
    return(0);
}