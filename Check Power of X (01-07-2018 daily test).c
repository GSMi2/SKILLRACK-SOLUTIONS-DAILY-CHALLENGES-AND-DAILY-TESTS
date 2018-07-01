
Check Power of X

An integer N is passed as input. The program must print YES if the given number N is a power of X. Else the program must print NO.

Boundary Condition(s):
1 <= N <= 999999999

Input Format:
The first line contains N and X separated by space(s).

Output Format:
The first line contains YES or NO.

Example Input/Output 1:
Input:
1024 2

Output:
YES

Example Input/Output 2:
Input:
2082 4

Output:
NO




IN C:

#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{
int n,x,l;
cin>>n>>x;
l=x;
while(n>x)
x*=l;
if(n==x)
cout<<"YES";
else
cout<<"NO";
}
