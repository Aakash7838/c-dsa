#include<iostream>
using namespace std;

void hy(int x, int n) {
    if(x>n) {
    return;
    }
    cout<<x<<endl;
    hy(x+1 , n);
}

int main() {
    int n;
    cout<<"Enter the n"<< endl;
    cin>>n;
    hy(1 , n);
}