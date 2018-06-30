

Number of Binary 1's

An integer N is passed as input. The program must print the number of 1's in the binary format of N.

Boundary Condition(s):
0 <= N <= 999999999

Input Format:
The first line contains N.

Output Format:
The first line contains the number of 1's in the binary format of N.

Example Input/Output 1:
Input:
7

Output:
3

Example Input/Output 2:
Input:
9879

Output:
8









IN C:


#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k=0,n;
scanf("%d",&n);
while(n>0)
{
    if(n%2==1)
    k++;
    n=n/2;
}
printf("%d",k);
}
