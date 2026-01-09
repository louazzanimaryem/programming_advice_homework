#include <stdio.h>

int    read_input()
{
      int  PIN;
    printf("Please enter PIN code \n");
    scanf("%d", &PIN);
    return PIN;
}
int         check_pin()
{
       int pin_code ;
    do {
          pin_code = read_input();
        if (pin_code == 1234)
        {
            return (1); //true
        }
        else {
            printf("wrong PIN\n");
            //return (0);
        }
      }while (pin_code != 1234);
        return (0); //false
}
int main()
{

    if(check_pin())
    {
        printf("your account blance is 7500\n");
    }
    return 0;
}