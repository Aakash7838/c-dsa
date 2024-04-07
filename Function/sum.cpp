#include<iostream>
using namespace std;
void sum(int a, int b){
    cout<<a+b;
}
int main() {
    int a;
    cout << "Enter the first number"<< endl;
    cin>>a;
    int b;
    cout << "Enter the first number"<< endl;
    cin>>b;

    sum(a,b);
    cout<<endl;
   
} 