#include <stdio.h>

int main()
{
    char str[100], result[100];
    int i = 0, j = 0;

    gets(str);

    while(str[i] != '\0')
    {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z'))
        {
            result[j++] = str[i];
        }

        i++;
    }

    result[j] = '\0';

    puts(result);

    return 0;
}