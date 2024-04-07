#include<iostream>
#include<conio.h>
using namespace std;
int main(){

    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    for(int i = 1; i<=10; i++){
        if(n%i==0){
            cout<< i << " ";
        }
    }
    
} 