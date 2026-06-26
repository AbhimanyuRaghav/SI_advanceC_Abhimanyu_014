#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i = 0;

    gets(str1);
    gets(str2);

    while(str1[i] == str2[i] &&
          str1[i] != '\0' &&
          str2[i] != '\0')
    {
        i++;
    }

    if(str1[i] == str2[i])
        printf("Strings are Equal");
    else
        printf("Strings are Not Equal");

    return 0;
}