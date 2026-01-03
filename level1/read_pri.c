#include <stdio.h>
//read and print 
int main()
{
    char first_name[10];
    char last_name[10];
    printf("your first name :\n");
    scanf("%s", first_name);
    printf("your last name :\n");
    scanf("%s", last_name);
    printf("full name : %s %s\n", first_name , last_name);
}