#include<iostream>
using namespace std;

int main() {

    int x[] = {1,2,3,4,5};

    int n = sizeof(x)/4;

    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += x[i];
    }
    cout<<sum;
}