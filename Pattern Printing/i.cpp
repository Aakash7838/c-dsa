#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n;
    char ch = 'A';
    cout<<"enter n";
    cin>>n;
    int num =1;
for(int i=1;i<=n;i++){
    for (int j=1;j<=i;j++){
        if(i%2==0){
            if(j==0)
                 if(j==0)
                cout<<ch;
                else 
                cout<<" "<<ch;
                ch++;
            }
            if(j==0)
                cout<<num;
                else
                cout<<" "<<num;
                num++;
        }
                cout<<endl;
        }
    }
    