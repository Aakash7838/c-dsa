#include<iostream>
using namespace std;

int main() {

    int n;
    cout<< "Enter the marks : " << endl;
    cin>> n;

    if(n>=81 && n<=100){
        cout<< "Very Good";
    }else if(n>=61 && n<=80){
        cout<< "Good";
    }else if(n>=41 && n<=60){
        cout<< "Average";
    }else{
        cout<<"Fail";
    }

}