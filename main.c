#include "libft.h"
#include <stdio.h>

int main(int c, char **v)
{
    (void)c;
    char **re;
    
    re = ft_split(v[1], v[2][0]);
    if (!re)
    {
        printf("NULL\n");
        return (0);
    }
    for(int i = 0; re[i]; i++)
        printf("%s\n", re[i]);

}