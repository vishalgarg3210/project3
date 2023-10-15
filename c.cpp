#include<iostream>
#include<cmath>
using namespace std;
int armstrong(int n,int c)
{
if(n==0)
{
return 0;
}
int r=n%10;
double a=pow(r, c);
return armstrong(n/10,c)+a;
}
int main()
{
int n;
cout<<"Enter the number:";
cin>>n;
int temp=n,c=0;

while (temp>0)
{
c++;
temp=temp/10;
}

if(armstrong(n,c)==n)
{
cout<<"Armstrong number"<<endl;
}
else{
cout<<"Not a armstrong "<<endl;
}
return 0;
}