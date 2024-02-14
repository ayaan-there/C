#include<stdio.h>
int main()
{
    char s[101];
    int i=0;
    printf("enter a string: \n");
    fgets(s,101,stdin);
    printf("your entered string is: \n%s",s);
    if (s[i] == 'a' || s[i] == 'A' ||
        s[i] == 'e' || s[i] == 'E' ||
        s[i] == 'i' || s[i] == 'I' ||
        s[i] == 'o' || s[i] == 'O' ||
        s[i] == 'u' || s[i] == 'U')
    {
        printf("your input starts with a vowel.\n");
    }
    else 
    {
        printf("your input does not start with a vowel.\n");
    }
return 0;
}