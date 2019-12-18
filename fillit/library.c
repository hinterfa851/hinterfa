#include "library.h"
#include <stdio.h>
#include <fcntl.h>
/*
#include "getNextLine/libft/ft_strchr.c"
#include "getNextLine/libft/ft_strlen.c"
#include "getNextLine/get_next_line.c"
*/
void count_lst(tt_list *tetr)
{
    int i;

    i = 0;
    while (tetr->next)
    {
        tetr = tetr->next;
        i++;
    }
}

void frree(char ***arr)
{
    int i;

    i = 0;
    while (i < 4)
    {
        if ((*arr)[i])
            ft_memdel((void **)&((*arr)[i]));
        i++;
    }
    free(*arr);
    *arr = NULL;
}

void read_to_arr(char ***arr, char *line, int flag){
    static int n;
    char *p;

    if (flag == 0)
        n = 0;
    p = ft_strchr(line, '#');
    if (p) {
        (*arr)[n] = ft_strdup(p);
        n++;
    }
    if (flag == 3 && n < 4)
    {
        while(n < 4) {
            (*arr)[n] = ft_strdup("");
            n++;
        }
    }
}

void arr_cpy(tt_list **tetr, char **arr)
{
    char **new;
    int i;

    i = 0;
    new = malloc(sizeof(char *) * 4);
    while ((i < 4)) {
        if (arr[i])
            new[i] = ft_strdup(arr[i]);
        else
            new[i] = NULL;
        i++;
    }
    (*tetr)->arr = new;
}

void addlst(tt_list **tetr, char **arr){
    tt_list *p;
    tt_list *new;

    p = *tetr;
    if (!(*tetr)) {
        *tetr = malloc(sizeof(tt_list *));
        (*tetr)->next = NULL;
        arr_cpy(tetr, arr);
    }
    else {
        new = malloc(sizeof(tt_list *));
        while (p->next) {
            p = p->next;
        }
        p->next = new;
        new->next = NULL;
        arr_cpy(&new, arr);
    }
}

void reader_to_lst(char *arg, tt_list *tetr) {
    char **arr;
    int fd;
    int flag;
    char *line;

    flag = 0;
    arr = malloc(sizeof(char *) * 4);
    fd = open("/home/tie-run/school21/fillit/sample2",O_RDONLY);
    while(get_next_line(fd, &line) > 0)
    {
        if (flag != 3) {
            read_to_arr(&arr, line, flag);
            flag++;
        }
        else {
            read_to_arr(&arr, line, flag);
            addlst(&tetr, arr);
            flag = 0;
            frree(&arr);
            arr = malloc(sizeof(char *) * 4);
            get_next_line(fd, &line);
        }
    }
}