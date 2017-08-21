#include<iostream>
int main()
{
int n,i
cout<<"enter how big you want your triangle to be...<<endl;
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
cout<<" ";
for(j=1;j<=i;j++)
{
if(j==1||j==i||i==n)
cout<<"*";
else
cout<<" ";
}
}
return(0);
}
