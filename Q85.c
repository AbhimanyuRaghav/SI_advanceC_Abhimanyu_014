#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("input.txt", "r");
    fp2 = fopen("encrypted.txt", "w");

    if(fp1 == NULL)
    {
        printf("File not found");
        return 0;
    }

    while((ch = fgetc(fp1)) != EOF)
    {
        ch = ch + 3;
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("Encryption Completed");

    return 0;
}