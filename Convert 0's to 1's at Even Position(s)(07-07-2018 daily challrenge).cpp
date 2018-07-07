

Convert 0's to 1's at Even Position(s)

An integer N is passed as the input. The program must change all the bits present at even position(from last bit) to 1 and then print the modified decimal value as the output. 

Boundary Condition(s):
2 <= N <= 500

Input Format:
The first line contains the value of N.

Output Format:
The first line contains modified decimal value.

Example Input/Output 1:
Input:
5

Output:
7

Explanation:
The binary value of 5 is 101.
Changing the bits at even position we get 111 = 7.

Example Input/Output 2:
Input:
32

Output:
42

Explanation:
The binary value of 32 is 100000.
Changing the bits at even position we get 101010 = 42.



In c++:





#include <iostream>
#include<math.h>
using namespace std;

int main(int argc, char** argv)
{
int a[1000],i=1,j=1,k,l,m=0,n;
cin>>n;
while(n>0)
{
    a[j]=n%2;
    if(j%2==0)
    {
        a[j]=1;
    }
    j++;
    n=n/2;
}
double power=0,r=0;
while(i<j)
{
    power =pow(2,r);
    a[i]=(int)a[i]*power;
    m=m+a[i];
    i++;
    r++;
}
cout<<m;
}
