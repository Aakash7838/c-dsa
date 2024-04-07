#include<iostream>
using namespace std;

int main() {

    int x[] = {1,2,30,4,5};

    int n = sizeof(x)/4;

    int mn = x[0];
    for(int i = 0; i<n; i++){
        // if(x[i]<mn) {
        //     mn = x[i];
        // }

        mn = min(mn, x[i]);
    }
    cout<<mn;
}