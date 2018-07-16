
Continuous Alphabet Sequence(s)

Given a string S as the input, the program must print the continuous alphabet sequences in the string S. Else the program must print -1 if there is no continuous alphabet sequence in the string.

Boundary Condition(s):
2 <= Length of S <= 100

Input Format:
The first line contains the string S.

Output Format:
The first line contains the continuous alphabet sequence(s) in the string or -1.

Example Input/Output 1:
Input:
habcuedyzab

Output:
abcyzab

Explanation:
The continuous alphabet sequences in the string are abc yzab
Hence the output is abcyzab

Example Input/Output 2:
Input:
wmhhfygogd

Output:
-1

Explanation:
There is no continuous alphabet sequence in the string.
Hence the output is -1


IN C:

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,n,a[100],z=0,c=0;
char s[1000];
scanf("%c",s);
n=strlen(s);
z=n/2;
for(i=0;i<n;i++)
{
    a[i]=s[i];
 if(a[i+1]-a[i]==1)
 {
     printf("%c",s[i]);
 }

else
{
    flag=1;
}
}
if(flag==1)
printf("-1");

}
