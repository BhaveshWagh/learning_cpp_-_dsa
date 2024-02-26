#include<iostream>
using namespace std;

int main()
{

    
    int n, i;
    double fact = 1;
    cout<<"Enter number: ";
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
         fact = fact * i;
    }
    cout<<fact;
}
