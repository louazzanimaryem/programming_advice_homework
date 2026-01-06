#include <stdio.h>
void    read_age(int *age)
{
    printf("please entre your age :\n");
    scanf("%d", age);
}
const char*   Validate_Number_In_Range(int age)
{
    if(age >= 18 && age <= 45)
    {
        return "Valid";
    }
    else{
        return "Invalid";
    }
}

int main()
{
    int age;
    read_age(&age);
    printf("the message : %10s\n", Validate_Number_In_Range(age));
    return 0;
}