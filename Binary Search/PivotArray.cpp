#include<iostream>
#include<vector>
#include<array>
using namespace std;

int getPivot(int arr[], int n){
    int s = 0;
    int e = n - 1;

    int mid = s + (e - s)/2;

    while(s<e){
        if (arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else {  
            e = mid;
        }

        mid = s + (e - s)/2;
    }    
    return s;
}

int main () {
    int even[4] = {1,3,5,2};

    cout << getPivot(even, 4);
}