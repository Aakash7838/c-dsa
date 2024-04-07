#include<iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter the Number : " << endl;
    cin>> n;

    if(n>99 && n<1000){
        cout<< "it is a three digit number";
    }else{
        cout<< "it is not a three digit number";
    }


}