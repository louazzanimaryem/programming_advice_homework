#include <stdio.h>
#include <string.h>
#include <stdbool.h>
struct problem5
{
    /* data */
    int age;
    int readHasDrivingLicense;
   int readHasRecommendation;
};
struct problem5 readinfo(void)
{
   struct  problem5 info;
   printf("entre your age ?");
   scanf("%d", &info.age);
   printf("do u have Recommendation (1 for yes, 0 for no) ");
   scanf("%d", &info.readHasRecommendation);
     printf("do u have drive license (1 for yes, 0 for no) ");
   scanf("%d", &info.readHasDrivingLicense);
   return info;
}
 bool  isacpted (struct problem5 info )
{
    if(info.readHasRecommendation ==  1)
    {
        return true;
    }
    else{
        return (info.age > 21 && info.readHasDrivingLicense);
    }
}
void   printresult( struct problem5 info)
{
    if(isacpted(info))
    {
        printf("hired\n");
    }
    else 
    {
     printf("\nrejected");
    }

}
int main ()
{
   printresult(readinfo());
   return 0;
}


