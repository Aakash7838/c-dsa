#include<iostream>
using namespace std;

void hy(int n) {
    if(n==0) {
    return;
    }
    cout<<n<<endl;
    hy(n-1);
}

int main() {
    int n;
    cout<<"Enter the n"<< endl;
    cin>>n;
    hy(n);
}