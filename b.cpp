#include<iostream>
#include<cmath>
using namespace std;
int reverse(int num,int count){//define function
if(num==0){//break recursion
return 0;
}
int ret=num%10;//claculationg reminder
int arm=pow(ret, count);
return reverse(num/10,count)+arm;//calling function itself to calculate armstrong

}
int main(){
int num;
cout<<"Enter the number:";
cin>>num;//take input
int temp=num,count=0;
// count number of digits
while (temp>0){
count++;
temp=temp/10;
}
//check for armstrong
if(reverse(num,count)==num)
{
cout<<"Armstrong number"<<endl;
}
else{
cout<<"Not a armstrong "<<endl;//calling funtion
}
return 0;
}