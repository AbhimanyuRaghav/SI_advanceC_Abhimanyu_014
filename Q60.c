#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    gets(str);

    while(str[i] != '\0')
    {
        char ch = str[i];

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            vowels++;

        else if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
            consonants++;

        else if(ch>='0'&&ch<='9')
            digits++;

        else if(ch==' ')
            spaces++;

        i++;
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits = %d\n", digits);
    printf("Spaces = %d", spaces);

    return 0;
}