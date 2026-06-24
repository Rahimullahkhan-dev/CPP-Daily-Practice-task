#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
cout<<"Enter a number :";
cin>>num;
cout<<"Cube series from 1 to " <<num <<" are :";
for(int i=1; i<=num;i++)
{
    int cube=i*i*i;
    cout<<cube<< " ";
    sum = sum + cube;
}
cout<<endl<<"Sum of cubes is :"<< sum;
return 0;
}