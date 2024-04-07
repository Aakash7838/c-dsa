#include<iostream>
#include<conio.h>
using namespace std;
int main(){

    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    for(int i = 2; i<=n/2; i++){
        if(n%i==0){
            cout<< "compsite ";
        }
    }
    
} 