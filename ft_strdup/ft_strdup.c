#include<stdlib.h>
int ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
      {
          i++;
      }
      return i;
}
char    *ft_strdup(char *src)
{
    int i = 0;
    char *ptr = malloc((ft_strlen(src) + 1) * sizeof(char));
    if(ptr == NULL)
    {
        return NULL;
    }
    while(src[i] != '\0')
    {
        ptr[i] = src[i];
        i++;
    }
    ptr[i] = '\0';
    return ptr;
    
}
