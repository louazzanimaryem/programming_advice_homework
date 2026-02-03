#include <unistd.h>

int  ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }
    return (s1[i] - s2[i]);
}
void    ft_pustr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
         i++;
    } 
}
void    putnb(int nb)
{
    if(nb >= 10)
    {
        putnb(nb / 10);
    }
    char c = nb % 10 + '0';
    write(1, &c, 1);
}
void    guess_letter(char *password)
{
  
    int count = 0;
    char c = 'A';
    while (c <= 'Z')
    {
        char k = 'A';
        while (k <= 'Z')
        {
            char j = 'A';
            while (j <= 'Z')
            {
                char str[4] = {c, k, j, '\0'};
               
                count++;
                ft_pustr("try");
                 putnb(count);
                 ft_pustr(" ");
                 ft_pustr(str);
                 ft_pustr("\n");
                if(ft_strcmp(str, password) == 0)
                {
                     ft_pustr("the passwod\n");
                     ft_pustr(password);
                     ft_pustr("\n");
                     ft_pustr("found after\n");
                     putnb(count);
                     ft_pustr(" ");
                     ft_pustr("tries\n");
                      return;
                }
             j++;
            }
            k++;
        }
        c++;
    } 
}
int main(int argc, char **argv)
{
    if(argc > 1)
    {
         guess_letter(argv[1]);  
    }
}

