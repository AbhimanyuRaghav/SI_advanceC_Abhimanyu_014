#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    gets(str);

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;

        i++;
    }

    puts(str);

    return 0;
}