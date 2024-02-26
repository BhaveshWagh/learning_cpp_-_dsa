#include<iostream>
using namespace std;
int main () {
int curr, prev = 1, last = 0, n = 2;
    if(n == 2){
        cout<<1;
    }
    else{
    for (int i = 2; i < n ; i++)
    {
        curr = prev + last;
        last = prev;
        prev = curr;
    }
    cout<<curr;
    }

}