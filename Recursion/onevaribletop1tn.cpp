#include<iostream>
using namespace std;

void hy(int n) {
    if(n==0) {
    return;
    }
    hy(n-1);
    cout<<n<<endl;
}

int main() {
    int n;
    cout<<"Enter the n"<< endl;
    cin>>n;
    hy(n);
}