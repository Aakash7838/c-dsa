#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int x,y;
    cout<<"enter x"<<endl;
    cin>>x;
    cout<<"enter y"<<endl;
    cin>>y;
    if (x>0 && y>0){
    cout<<"first hai kya dekh raha hai"<<endl;
    }
    if(x>0 && y<0){
        cout<<"chal ho gaya second hai";
    }
    if(x<0 && y>0){
        cout<<"third hai khush ho ja"<<endl;
    }
    if(x<0 && y<0){
        cout<<"code thik hai forth hai";
    }
    if(x==0 && y==0){
        cout<< "kuch nahi hai ghar ja 0 hai";
    }
}