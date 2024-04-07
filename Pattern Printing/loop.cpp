#include<iostream>
#include<conio.h>
using namespace std;
int main(){

    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    for(int i = 0; i<=n; i++){
        int a = 1;
        for(int j = 1; j<=i; j++){
           if(i%2!=0){
            cout<<a << " ";
            a++;
           }else{
            cout<<((char)(j+64)) << " ";
           }
        }
        cout<<endl;
    }
    
}