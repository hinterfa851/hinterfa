void addchr(char **arr, int n)                  // create line for cr_map
{
    int i;

    i = 0;
    while (i < n)
        (*arr)[i++] = '.';
    (*arr)[i] = '\0';
}

char **cr_free_map( int n)                //  create free map n-size
{
    char **res;
    int i;

    i = 0;
    res = malloc((n + 1) * sizeof(char *));
    while (i <= n)
        res[i++] = malloc(n + 1);
    res[i] = malloc(1);
    *(res[i--]) = '\0';
    while (i-- > 0) {
        addchr(&(res[i]), n + 1);
    }
    return (res);
}

int chck(char **map, char **tetr, int n)
{
    int i;

    i = 0;
    while (1)
    {
        if (ft_strchr(map[i], '.'))
            ;
        else
            i++;
        return (0);
    }
    return (1);
}


char **calculate(tt_list *tetr, char **map)
{
    char **new;

    new = cp_arr(map);                   \\ откат к предидущему!!!
    while (new[0][0] != '\0') {
        if (get_link(new)) {
            if (tetr->next) {
                new = calculate(tetr->next, new);
                if (new[0][0] == '\0')
                    get_link(new);
            }
            return (new);
        } else
            new[0][0] = '\0';
    }
    return (new);
}



isequal



char **calculate(tt_list *tetr, char **map)
{
    char **new;

    new = place(tetr->arr, map);
    if (!(ch_isequal(map, new))){
        if (tetr->next) {
            new = calculate(tetr->next, new);
            if (ch_isequal(map, new))
                new = place(tetr->arr, map);
        }
        else
            map = new;
        return (map);
    }
    return (map);
}

























