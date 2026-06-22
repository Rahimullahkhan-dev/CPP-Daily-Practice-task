#include<iostream>
using namespace std;
int main()
{
    int num;
    cout <<"Enter a number: ";
    cin>>num;
    cout<<" odd numbers for 1 to "<<num<<" are: "<<endl;
    for(int i=1;i<=num;i+=2)
    {
        cout<<i<< " ";

    } cout<<endl;
    return 0;
}