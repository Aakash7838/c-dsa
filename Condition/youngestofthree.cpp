#include<iostream>
using namespace std;

int main() {

    int Ram;
    cout<< "Enter the Ram age : " << endl;
    cin>> Ram;

    int Shyam;
    cout<< "Enter the Shyam age : " << endl;
    cin>> Shyam;

    int Ajay;
    cout<< "Enter the Ajay age : " << endl;
    cin>> Ajay;

    if(Ram>Shyam){
        if(Ram>Ajay){
            cout<< Ram << " Ram is elder";
        }else{
            cout<< Ajay << " Ajay is elder";
        }
    }else{
        if(Shyam>Ajay){
            cout<< Shyam << " Shyam is elder";
        }else{
            cout<< Ajay << " Ajay is elder";
        }
    }

}