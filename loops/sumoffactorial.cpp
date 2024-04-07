#include<iostream>
using namespace std;
int main(){

    // multiply digit of number

    int n;
    cout<<"Enter the number" <<" ";
    cin>>n;

    int sum = 0;

    for(int i=1; i<=n; i++){
        sum += i ;
    }
    cout<<sum;
}