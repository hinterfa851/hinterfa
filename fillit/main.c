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
 //   count_lst(tetr);
    while ((d = calculate(tetr, &map)) == 0) {
        map = cr_free_map(++n);
    }
    if (d == 10)
        printf("error\n");
    else
        prnt_rr(map);
  //  printf("lol");
    return (0);
}