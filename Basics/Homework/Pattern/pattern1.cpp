#include<iostream>
using namespace std;

int main()
{
    
    for (int i = 4; i >= 1; i--)
    {
        char name = 'A'; 
       for(int j = 1; j<= i; j++){
        cout<<name<<" ";
        name = name + 1;
       }
       cout<<endl;
    }
    
    // A B C D 
    // A B C 
    // A B 
    // A
    
}