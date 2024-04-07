#include<iostream>
using namespace std;

void hy(int n) {
    if(n==0) {
    return;
    }
    cout<<"hey"<<endl;
    hy(n-1);
}

int main() {
    hy(3);
}