#include<iostream>
using namespace std;

int main() {

     // it is my third conditionals homework

    int n;
    cout<< "Enter the Number : " << endl;
    cin>> n;

    if((n%3 == 0 || n%5 == 0) && (n%15 != 0)){
        cout<< "it is a divisible by 5 and 3";
    }else{
        cout<< "it is not a divisible by 5 and 3";
    }


}