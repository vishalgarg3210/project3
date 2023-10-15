#include<iostream>
using namespace std;
int fact(int n)
{
if(n==1)
{
return 1;
}
return n*fact(n-1);
}
int main()
{
int n;
cout<<"Enter the number:";
cin>>n;//take input
cout<<"Factorial of number is:"<<fact(n)<<endl;
return 0;
}