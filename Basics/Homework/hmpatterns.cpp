#include<iostream>
using namespace std;

int main()
{
    // char name = 'a';
    for (int i = 1; i <= 5; i++)
    {
        for ( int j = 1; j <= 5; j++)
        {
        char name = 'F' + (j - 1);
            cout<<name<<" ";
        }
        // name = name + 1;
        cout<<endl;
    }
    
}