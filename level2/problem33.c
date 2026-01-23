#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void    read_input(int *n)
{
    do {
        printf("entre a positive number :\n");
        scanf("%d", n);
    } while(*n > 100 || *n <= 0);
}
char    rand_key()
{
    return 'A' + rand() % 26;
}

void   fill_single_key(char key[])
{
    int position = 0;
    int i = 1;
    while(i <= 16)
    {
        key[position++] = rand_key();
          if(i % 4 == 0 && i != 16)
        {
            key[position++] = '-';
        }
        i++;
    }
    key[position] = '\0';
}

int main ()
{
    srand((unsigned) time (NULL));
    int size;
    read_input(&size);
    char key_array[100][20];
     int i = 0;
     while(i < size)
     {
        fill_single_key(key_array[i]);
        i++;
     }
    printf("array elements\n");
    for(i = 0 ; i < size; i++)
    {
        printf("array [%d] : %s\n", i, key_array[i]);
    }

}