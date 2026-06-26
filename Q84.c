#include <stdio.h>
#include <string.h>

int main()
{
    char str[500];
    int words = 1;

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            words++;
    }

    printf("Total Words = %d", words);

    return 0;
}