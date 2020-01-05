#include "library.c"
#include "alg.c"

int main(int argc, char **argv) {
    tt_list *tetr;
    char **map;
    int n;
    int d;

    n = 2;
    reader_to_lst(&tetr);
    map = cr_free_map(n);
    while ((d = calculate(tetr, &map)) == 0) {
        map = cr_free_map(++n);
    }
    if (d == 10)
        printf("error\n");
    else
        prnt_rr(map);
//    printf("%s\n", map[0]);
//    printf("%s\n", map[1]);
//    printf("%s\n", map[2]);
//    printf("%s\n", map[3]);
//    printf("%s\n", map[4]);
//    printf("%s\n", map[5]);
    return (0);
}