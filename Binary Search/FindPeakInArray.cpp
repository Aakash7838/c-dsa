#include<iostream>
using namespace std;

int FindPeakInArray(int arr [], int n){
    int s = 0;
    int e = n - 1;

    int mid = s + (e - s)/2;

    while(s<e){
        if (arr[mid] < arr[mid+1]){
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
    int even[10] = {1,2,4,6,7,8,13,7,6,5};

    cout << FindPeakInArray (even , 10);
}