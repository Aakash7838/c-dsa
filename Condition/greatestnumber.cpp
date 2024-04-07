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

    if(a>b && a>c){
        cout<< "a is greater";
    }else if(b>a && b>c){
        cout<< "b is greater";
    }else{
        cout << "c is greater";
    }


}