#include<iostream>
using namespace std;
int main(){

    // multiply digit of number

    int n;
    cout<<"Enter the number" <<" ";
    cin>>n;

    int sum = 1;

    while( n!=0){
        int ID = n%10 and n%2==0;
        n = n/10;
        sum += ID;
    }
    cout<<sum;
}