#include<iostream>
using namespace std;

int main() {
    int n = 20;
    for(int i = 1; i <= n; i++){
        if(i % 4 == 0)
            cout<<i<<endl;
    }
}