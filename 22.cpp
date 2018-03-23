#include<iostream>
using namespace std;
void c(char num[3],int n)
{
if(n>0)
{
num[3-n]='0';
c(num,n-1);
num[3-n]='1';
c(num,n-1);
}
else
{
cout<<num;
}
}
void main()
{
char num[]={0};
int n;
cin>>n;
c(num,n);
}
