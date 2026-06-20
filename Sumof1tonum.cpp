#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    for(int i=1;i<=num;i++)
{ sum=sum+i;
}cout<<"sum of 1 to"<<" "<<num<<" is: "<<sum;
return 0;
}