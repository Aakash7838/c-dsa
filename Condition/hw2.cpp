#include<iostream>
using namespace std;

int main() {

    // it is my second conditionals homework

    int l;
    cout<< "Enter the length : " << endl;
    cin>> l;

    int b;
    cout<< "Enter the breadth : " << endl;
    cin>> b;

    int a = l*b;
    cout << a << endl;
    int p = 2*(l+b);
    cout<< p << endl;
    cout<< endl;

    if(a>p){
        cout<< "Area of the rectangle is greater than perimeter";
    }else{
        cout<< "Area of the rectangle is not greater than perimeter";
    }


}