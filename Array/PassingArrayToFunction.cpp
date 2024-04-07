#include<iostream>
using namespace std;
void change(int arr[]){
    arr[0] = 4;
}

int main() {

    int x[5] = {9,7,63,5,8};

    for(int i = 0; i<=4; i++){
    cout<< x[i]<<" ";
    }
    cout<<endl;

    change(x);
    for(int i = 0; i<=4; i++){
    cout<< x[i]<<" ";
    }
}