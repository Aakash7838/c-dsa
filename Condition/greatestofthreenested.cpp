#include<iostream>
using namespace std;

int main() {

    int a;
    cout<< "Enter the 1st Number : " << endl;
    cin>> a;

    int b;
    cout<< "Enter the 2nd Number : " << endl;
    cin>> b;

    int c;
    cout<< "Enter the 3rd Number : " << endl;
    cin>> c;

    if(a>b){
        if(a>c){
            cout<< a << " is greatest";
        }else{
            cout<< c << " is greatest";
        }
    }else{
        if(b>c){
            cout<< b << " is greatest";
        }else{
            cout<< c << " is greatest";
        }
    }

}