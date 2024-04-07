#include<iostream>
using namespace std;

int main() {
    int x = 2;
    int y = 5;
    cout<< x << " " << y << endl;

    x = y;
    y = x;

    cout<< x << " " << y << endl;

}