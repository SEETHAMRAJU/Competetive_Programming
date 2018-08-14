#include<stdio.h>
int main()
{
    char s;
    printf("Enter a character: ");
    scanf("%c",&s);
    int y=s;
    if((y>=65 && y<=90) || (y>=97 && y<=122))
    {
        printf("ALPHABET!!!!!!!!!!\n\n");
    }
    else
    {
        printf(":( Not an Alphabet!!!!!!!!\n\n");
    }
    return 0;
}