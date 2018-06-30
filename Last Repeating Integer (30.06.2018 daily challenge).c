

Last Repeating Integer

N integers are passed as the input. The program must print the last repeating integer among the N integers.

Boundary Condition(s):
1 <= N, value of integers <= 1000

Input Format:
The first line contains the integer N.
The second line contains N integers separated by space(s).

Output Format:
The first line contains the last repeating integer.

Example Input/Output 1:
Input:
6
1 2 1 5 2 7

Output:
2

Example Input/Output 2:
Input:
7
12 34 34 34 12 45 67 

Output:
12


In C:


#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,k=0,n,a[1000],c=0,d=0,p[1000],j,max=p[0];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
      
            if(a[i]==a[j])
            {
            p[k]=j;k++;
            }
    }
    
}
for(i=0;i<k;i++)
{
    if(p[i]>max)
    {
        max=p[i];
    }
}
printf("%d",a[max]);
}
