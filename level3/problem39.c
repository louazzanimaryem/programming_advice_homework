#include <stdio.h>
#include <stdlib.h>

int str_len(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}
char *ft_strjoin(int size, char **strs, char *sep)

{
     int i = 0;
    if(size == 0)
    {
        char *empty = malloc(1);
        empty[0] = '\0';
        return empty;
    }
    int sum_length = 0;
    while(i < size)
    {
      sum_length+=str_len(strs[i]);
      i++;
    }
      int total_s1 = str_len(sep) * (size - 1) + sum_length + 1; 
      char *dest = malloc(total_s1 * sizeof(char)); 
     if(!dest)
     {
        return NULL;
     }
    int j = 0;
     int k = 0;
    i = 0;
     while(i < size)
     {
         k = 0;
          while(strs[i][k] != '\0')
        {
           dest[j++] = strs[i][k++]; 
        } 
        if(i < size - 1)
        {
            k = 0;
            while(sep[k] != '\0')
            dest[j++] = sep[k++];
        }
         i++; 
     }
  dest[j] = '\0';
  return (dest);
}

int main ()
{
		char *str[] = {"fatiha", "aji", "hna"};
		char se[] = " g ";
		char **f = str;
		char *res = ft_strjoin(3, f, se);
		printf("%s",res);
         printf("\n");
}