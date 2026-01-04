#include <stdio.h>
#include <string.h>
int main()
{
   int age;
   char  driver_license[10];
   printf("your age :");
   scanf("%d", &age);
   printf("are u have driver lic yes pr no:");
   scanf("%s", driver_license);
   if(age >= 21 && strcmp(driver_license, "yes" ) == 0)
   {
       printf("Hired");
   }
   else
   {
      printf("rejected");
   }
   return 0;
}