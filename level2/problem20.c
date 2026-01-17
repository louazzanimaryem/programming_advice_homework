#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int     rand_int(int from, int to)
{
    int randn = rand() % (to - from +1) + from;
      return randn;
}
char    rand_capi(char from, char to)
{
    char randc = rand() % (to - from + 1) + from;
    return randc;
}
char    rand_small_letter(char from, char to)
{
    char rancl = rand() % (to - from + 1) + from;
    return rancl;
}
int     rand_special(int from, int to)
{
    int rand_spec = rand() % (to - from + 1)+from;
    return rand_spec;
}
int main()
{
      srand((unsigned)time(NULL));
          printf("%d \n", rand_int(1, 4));
          printf("%c \n", rand_capi('A', 'Q'));
          printf("%c \n", rand_small_letter('a', 'h'));
          printf("%c \n", rand_special(33, 47));
}
