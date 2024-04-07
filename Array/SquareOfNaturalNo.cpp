#include<iostream>
using namespace std;
int square(int n) {
    int a;
    for(int i = 0; i<n; i++ ){
        a = n * n;
    }
    return a ;
}
int main() {
    int n;
    cout<<"Enter the n"<< endl;
    cin>>n;

    int arr[n];

    int a = sizeof(n)/4;

    for(int i = 0; i<=n; i++){
        cout << square(i) << endl;
    }

}