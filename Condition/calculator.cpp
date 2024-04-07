#include<iostream>
using namespace std;

int main() {

    int n1;
    cout<< "Enter the first number : " << endl;
    cin>> n1;

    char op;
    cout<< "Enter the operator : " << endl;
    cin>> op;

    int n2;
    cout<< "Enter the second number : " << endl;
    cin>> n2;

    if(op=='+') cout<< n1+n2;
    if(op=='-') cout<< n1-n2;
    if(op=='*') cout<< n1*n2;
    if(op=='/') cout<< n1/n2;

} 