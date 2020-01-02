int check(char **map, char *arr[], int *cur_coor);

int place(char **arr, char **map, char ***new , int variant);

int ft_write(char **map, char **arr, int *cur_coor, char ***new);

void addchr(char **arr, int n)                  // create line for cr_map
{
    int i;

    i = 0;
    while (i < n)
        (*arr)[i++] = '.';
    (*arr)[i] = '\0';
}

char **cr_free_map(int n)                //  create free map n-size
{
    char **res;
    int i;

    i = 0;
    res = malloc((n + 1) * sizeof(char *));
    while (i < n)
        res[i++] = malloc(n + 1);
    res[i] = malloc(1);
    *(res[i--]) = '\0';
    while (i >= 0)
    {
        addchr(&(res[i]), n);
        i--;
    }
    return (res);
}


int calculate(tt_list *tetr, char ***map)               // actual version
{
    char **new;
    int variant = 0;
    int res_place;

    prnt_rr(tetr->arr);
    while ((res_place = place(tetr->arr, *map, &new, variant)) == 1)                   // useless
    {
        variant++;
        if (tetr->next)
        {
            int res = calculate(tetr->next, &new);
            if (res == 1)
            {
                *map = new;
                return (1);
            }
        }
        else {
            *map = new;
            return (1);
        }
    }
    return (0);
}

int *ft_finder(char **map, int n)
{
    static int cur_coor[3];
    int len;

    len = ft_strlen(*map);                                               //   count number of
    cur_coor[0] = n / len;                                      //  calculate row
    cur_coor[1] = n % len;                                      // calculate column
    cur_coor[2] = len;
    return (cur_coor);
}


int place(char **arr, char **map, char ***new , int variant)           //(tetramino, old map, map to copy and write, position to place)
{
   int *cur_coor;

   cur_coor = ft_finder(map, variant);
//   printf("#%d$\n", cur_coor[0]);
   while (variant < (cur_coor[2] * cur_coor[2]))               // !!!!!!!!!!!! TOOOO MUCH, REALLY??? LOL!!!!!!!!!!
   {
       cur_coor = ft_finder(map, variant);
       if (check(map, arr, cur_coor))
       {
//           printf("#%d$\n", cur_coor[0]);
           ft_write(map, arr, cur_coor, new);
           (variant)++;
           return (1);
       }
       else
       {
           (variant)++;
 //          cur_coor = ft_finder(map, *variant);
       }
   }
   return (0);
}

void cp_arr_full(char **map, char ***new, int len)
{
    int i;

    i = 0;
//    printf("*%d*\n", cur_coor[2]);
    *new = malloc(sizeof(char *) * (len + 1));
    while(i < len)
    {
        (*new)[i] = ft_strdup(map[i]);
        i++;
    }
    (*new)[i] = malloc(1);
    *((*new)[i]) = '\0';
}

int ft_write(char **map, char **arr, int *cur_coor, char ***new)
{
    int count;
    int offset;
    int len;
    char **dies;

    count = 0;
    offset = 0;
    len = ft_strlen(arr[count]);
    cp_arr_full(arr, &dies, 4);
    cp_arr_full(map, new, cur_coor[2]);
    while (((*dies[count]) != '.') && ((*dies[count]) != '\0'))
    {
        while (((*dies[count]) != '.') && ((*dies[count]) != '\0'))
        {
            (*new)[cur_coor[1] + count][cur_coor[0] + offset] = arr[0][0];
            offset++;
            (dies[count])++;
        }
//        printf("*%s*\n", (*new)[cur_coor[1] + count]);
        count++;
        if (count != 4)
            offset = (len == ft_strlen(arr[count])) ? 0 : len - ft_strlen(arr[count]);
    }
 //   prnt_rr(*new);
    return (1);
}

int check(char **map, char **arr, int *cur_coor) {
    int count;
    int offset;
    int len;
    char **dies;

    count = 0;
    offset = 0;
    cp_arr_full(arr, &dies, 4);
//    printf("#%d$\n", cur_coor[2]);
//   printf("lol\n");
//    printf("%c\n", (*arr[count]));
//    printf("lol\n");
    while (((*dies[count]) != '.') && ((*dies[count]) != '\0')) {
        //      printf("here, OK\n");                                       // !!!!!!!!!!
        if (cur_coor[1] + count > cur_coor[2])
            return (0);
        while (((*dies[count]) != '.') && ((*dies[count]) != '\0')) {
            if (cur_coor[0] + offset > cur_coor[2]) {
                //               printf("no!\n");
                return (0);
            }
            if ((map[cur_coor[1] + count][cur_coor[0] + offset] != '.')) {
                //               printf("%d\t%d\t%d\t%d\t\n", cur_coor[1], count, cur_coor[0], offset);
                return (0);
            }
            offset++;
            (dies[count])++;                                                                             // TYT COSYAKKKKKKKK!!!!!!!!!!
        }
        len = ft_strlen(arr[count++]);
        //       printf("*%d*\n", ft_strlen(arr[count]));
        if (count != 4)
            offset = (len == ft_strlen(arr[count])) ? 0 : len - ft_strlen(arr[count]);
    }
//    printf("here, unOK\n");
    return (1);
}