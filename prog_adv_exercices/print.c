#include <stdio.h>
int main()
{
    char name[10];
    int age;
    char city[10];
    char country[10];
    printf("*************************************\n");
    printf("your name:");
    scanf("%s", name);
    printf("your age :");
    scanf("%d", &age);
    printf("your city :");
    scanf("%s", city);
    printf("your country :");
    scanf("%s", country);
    printf("**************************************\n");
    return 0;
}