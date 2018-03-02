#include <iostream>
#include<string.h>
using namespace std;
int main()
{
int s1,s2,max=0,i,n;	
char a[100],b[100];
cout<<"enter no of strings";
cin>>n;
cout<<"Enter the first string:"<<endl;
cin>>a;
cout<<"Enter the second string: "<<endl;
cin>>b;
s1=strlen(a);
s2=strlen(b);
if(s1>s2)
{
max=s1;	
}
else	
{
max=s2;	
}
for(i=0;i<max;i++)	
{
if(a[i]==b[i])		
{
cout<<a[i];		
}
else		
{	
break;		
}	
}	
return 0;
}
