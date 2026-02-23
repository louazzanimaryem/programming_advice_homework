 #include <stdio.h>

 void   print_first_letter(char *str)
 {
    int i = 0;
    while(str[i] != '\0')
    {
       if (i == 0)
       {
         printf("%c\n", str[i]);
       }
        if(str[i] == ' ')
        {
            printf("%c\n", str[i+1]);
        }
    i++;
    }
 }
 int main()
 {
    char str[] = "maryem loli giga noni ahmde";
    print_first_letter(str);
 }