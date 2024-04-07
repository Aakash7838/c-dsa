#include<iostream>
using namespace std;

int main() {

    int x[] = {1,2,30,4,5};

    int n = sizeof(x)/4;

    int mx = x[0];
    for(int i = 0; i<n; i++){
        // if(x[i]>mx) {
        //     mx = x[i];
        // }

        mx = max(mx, x[i]);
    }
    cout<<mx;
}