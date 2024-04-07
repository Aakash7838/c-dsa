#include<iostream>
using namespace std;
int main(){

    // multiply digit of number

    int n;
    cout<<"Enter the number" <<" ";
    cin>>n;

    int r = 0;

    while( n!=0){
        int ID = n%10;
        r *= 10;
        r += ID;
        n = n/10;
    }
    cout<<r;
}