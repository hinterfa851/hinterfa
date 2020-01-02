#ifndef LIBRARY_H
#define LIBRARY_H


#include "/Users/hinterfa/Documents/hinterfa/fillit/getNextLine/libft/ft_strchr.c"
#include "/Users/hinterfa/Documents/hinterfa/fillit/getNextLine/libft/ft_strlen.c"
#include "/Users/hinterfa/Documents/hinterfa/fillit/getNextLine/get_next_line.c"
#include "/Users/hinterfa/Documents/hinterfa/fillit/getNextLine/libft/ft_strsub.c"
#include "/Users/hinterfa/Documents/hinterfa/fillit/getNextLine/libft/ft_strdel.c"
#include "/Users/hinterfa/Documents/hinterfa/fillit/getNextLine/libft/ft_strdup.c"
#include "/Users/hinterfa/Documents/hinterfa/fillit/getNextLine/libft/ft_strjoin.c"
#include "/Users/hinterfa/Documents/hinterfa/fillit/getNextLine/libft/ft_strcpy.c"
#include "/Users/hinterfa/Documents/hinterfa/fillit/getNextLine/libft/ft_strnew.c"
#include "/Users/hinterfa/Documents/hinterfa/fillit/getNextLine/libft/ft_memdel.c"
#include "/Users/hinterfa/Documents/hinterfa/fillit/getNextLine/libft/ft_strcat.c"
#include "/Users/hinterfa/Documents/hinterfa/fillit/getNextLine/libft/ft_strncpy.c"
#include "/Users/hinterfa/Documents/hinterfa/fillit/getNextLine/libft/ft_bzero.c"

typedef struct      te_list
{
    char            **arr;
    struct te_list  *next;
}                   tt_list;

#endif //FILLIT_LIBRARY_H