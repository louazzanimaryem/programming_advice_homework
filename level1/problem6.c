#include <stdio.h>

struct problem6
{
    /* data */
    char  first_name[10];
    char last_name[10];
};
struct problem6 read(void)
{
    struct problem6 info;
    
    printf("entre your first name :");
    scanf("%10s", info.first_name);
    printf("entre your last name :");
    scanf("%10s", info.last_name);
    return info;
}
void  print_full_name(struct problem6 info)
{
    printf("%s %s\n", info.first_name , info.last_name);
}
int main()
{
    struct problem6 user = read();
    print_full_name(user);
    return 0;

}


