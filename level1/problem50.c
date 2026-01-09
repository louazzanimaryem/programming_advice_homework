#include <stdio.h>
#include <stdlib.h>

int   read_input()
{
    int pin;
    printf("Please enter PIN code \n");
    scanf("%d", &pin);
    return pin;
}
int     check_pin(void)
{
    int count = 3;
    int pin_code ;
    do{
        count--;
        pin_code = read_input();
        if(pin_code == 1234)
        {
            return (1);
        }else{
            printf("Wrong PIN, you have %d more tries\n",count);
        }
    }while(count >= 1 && pin_code != 1234);
    return (0);
}
int main()
{
    if(check_pin())
    {
           system("color 2F");
        printf("Your account balance is 7500\n");
    }
    else{
        system("color 4F");
        printf("Your Card is blocked. call the bank for help\n");
    }
    return 0;
}
