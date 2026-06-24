#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"Odd number 1 to "<<num<<" "<<"are :"<<endl;
    for (int i=1;i<=num;i+=2)
    {  
        if(i % 2 !=0 )
      {

       cout<<i<<" ";
       sum = sum + i;
    }
}
    cout<<endl<<"Sum of these Odd number :"<< sum;

    return 0;
}