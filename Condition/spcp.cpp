#include<iostream>
using namespace std;

int main() {

    int cp;
    cout<< "Enter the cost price : " << endl;
    cin>> cp;

    int sp;
    cout<< "Enter the selling price : " << endl;
    cin>> sp;

    if(cp<sp){
        cout<< "profit is : " << sp - cp;
    }else if(cp>sp){
        cout<< "loss is : "<< cp - sp;
    }else{
        cout<<"no profit no loss";
    }


} 