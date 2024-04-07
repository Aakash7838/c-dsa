#include<iostream>
#include<conio.h>
using namespace std;
int main(){

    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    for(int i = 1; i<=n; i++){
        int a = 1;
        for(int j = 1; j<=i; j++){
            cout<<a;
            a = a+2;
        }
        cout<<endl;
    }
    
}