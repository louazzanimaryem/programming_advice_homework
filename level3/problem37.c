#include <stdio.h>
#include <stdlib.h>

int count_word(char *str)
{
    int i = 0;
    int count = 0;

    while(str[i] != '\0')
    {
        if(i == 0 && str[i] != ' ')
            count++;
        else if(str[i] != ' ' && str[i - 1] == ' ')
            count++;
        i++;
    }
    return count;
}

char  **ft_split(char *str)
{
    int i = 0;
    int start;
    int word_index = 0;
    int j;
    char **arr;

    arr = malloc((count_word(str) + 1) * sizeof(char *));
    if (!arr)
        return NULL;

    while (str[i] != '\0')
    {
        
        while (str[i] == ' ')
            i++;
        if (str[i] == '\0')
            break;

        start = i;

        while (str[i] != ' ' && str[i] != '\0')
            i++;

        int length = i - start;

        char *word = malloc(length + 1);
        if (!word)
            return NULL; 

        j = 0;
        while (j < length)
        {
            word[j] = str[start + j];
            j++;
        }
        word[length] = '\0';

        arr[word_index] = word;
          word_index++;
    }
      arr[word_index] = NULL;
       return arr;
}
int main()
{
    char str[] = "  maryem  loli  koki ";
    char **split = ft_split(str);
    int i = 0;
    while (split[i] != NULL)
    {
        printf("%s\n", split[i]);
        i++;
    }
}
