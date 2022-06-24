/*
Algorithm to remove vowels from string
Get the input as a string
Define or initialize a string containing the vowels i.e., a, e,i, o, u.
Traverse through the input string, if the vowel is encountered, it should be removed from the string.
Another way is to initialize another string and copy each non-vowel character to this string from the input string.
Display the final result string.
*/
#include <stdio.h>
int check_vowel(char);
int main()
{
char s[100], t[100];
int c, d = 0;
gets(s);
for(c = 0; s[c] != ‘\0’; c++)
{
if(check_vowel(s[c]) == 0)
{
t[d] = s[c];
d++;
}
}
t[d] = ‘\0’;
strcpy(s, t);
printf(“%s\n”, s);
return 0;
}
int check_vowel(char ch)
{
if (ch == ‘a’ || ch == ‘A’ || ch == ‘e’ || ch == ‘E’ || ch == ‘i’ || ch == ‘I’ || ch ==’o’ || ch==’O’ || ch == ‘u’ || ch == ‘U’)
return 1;
else
return 0;
}

