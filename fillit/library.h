#ifndef LIBRARY_H
#define LIBRARY_H


#include "/home/tie-run/school21/fillit/getNextLine/libft/ft_strchr.c"
#include "/home/tie-run/school21/fillit/getNextLine/libft/ft_strlen.c"
#include "/home/tie-run/school21/fillit/getNextLine/get_next_line.c"
#include "/home/tie-run/school21/fillit/getNextLine/libft/ft_strsub.c"
#include "/home/tie-run/school21/fillit/getNextLine/libft/ft_strdel.c"
#include "/home/tie-run/school21/fillit/getNextLine/libft/ft_strdup.c"
#include "/home/tie-run/school21/fillit/getNextLine/libft/ft_strjoin.c"
#include "/home/tie-run/school21/fillit/getNextLine/libft/ft_strcpy.c"
#include "/home/tie-run/school21/fillit/getNextLine/libft/ft_strnew.c"
#include "/home/tie-run/school21/fillit/getNextLine/libft/ft_memdel.c"
#include "/home/tie-run/school21/fillit/getNextLine/libft/ft_strcat.c"
#include "/home/tie-run/school21/fillit/getNextLine/libft/ft_strncpy.c"
#include "/home/tie-run/school21/fillit/getNextLine/libft/ft_bzero.c"

typedef struct      te_list
{
    char            **arr;
    struct te_list  *next;
}                   tt_list;

#endif //FILLIT_LIBRARY_H