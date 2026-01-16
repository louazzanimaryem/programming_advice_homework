#include <unistd.h>
#include <stdio.h>
void    read_input(char  str[10])
{
    printf("entre your name \n");
    scanf("%10s", str);
}
void    encrypt(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
     if((str[i] >= 'A' && str[i] <= 'Z'))
    {
           str[i] = ((str[i] - 'A' + 2) % 26) + 'A';
    }else if(( str[i] >= 'a' && str[i] <= 'z'))
    {
        str[i] = ((str[i] - 'a'+ 2) % 26) + 'a';
    }
      write(1, &str[i], 1);
    i++;
   } 
    write(1, "\n", 1);
}
void    decrypt(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if((str[i] >= 'A' && str[i] <= 'Z'))
        {
            str[i] = ((str[i] - 'A' - 2 + 26) % 26) +'A';
        }
        else if((str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] = ((str[i] - 'a' - 2 +26) % 26) + 'a';
        }
          write(1, &str[i], 1);
        i++;
    }
      write(1, "\n", 1);
}
int main()
{
    char name[10];
    read_input(name);
      printf("aftre encryption\n");
       encrypt(name);
    printf("aftre decryption \n");
    decrypt(name);
}

