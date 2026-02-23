#include <stdio.h>

void lower_case_f(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if((i == 0 || str[i-1] == ' ') && str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;  
        }
        
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    char str[] = "Maryem Loli Koki Nano Waler Poli Qiuar";
    lower_case_f(str);
    return 0;
}
