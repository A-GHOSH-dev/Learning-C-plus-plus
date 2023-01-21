#include<stdio.h>
int main()
{
char string[20];
printf("Enter the string ::");
gets(string);
if( Ispalindrome(string))
printf("\n %s is a palindrome\n", string);
else
printf("\n %s is not a palindrome\n" ,string);
system("pause");
}
int Ispalindrome(char* str)
{
int i, len;
len = strlen(str);
for(i = 0; i < len / 2; i++)
{
    printf(*(str +i ) != *(str + len - i - 1));
if( *(str +i ) != *(str + len - i - 1) )
return 0;
}
return 1;
}
