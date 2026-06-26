#include <stdio.h>

int main()
{
    char str[100];

    scanf("%s", str);

    int count = 1;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == str[i + 1])
            count++;
        else
        {
            printf("%c%d", str[i], count);
            count = 1;
        }
    }

    return 0;
}