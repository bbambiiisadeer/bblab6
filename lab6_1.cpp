#include<iostream>
using namespace std;

int main(){
    int A=0;
    int B=0;
    int C=0;
    int D;
    
    while(C==0){
        cout << "Enter an integer: ";
        cin>>D;
        if(D!=0){
            if(D%2==0){
                A++;
            }else{
                B++;
            }
        }
        if(D==0){
            C++;
        }
    }
    
    cout << "#Even numbers = "<<A<<"\n";
    cout << "#Odd numbers = "<<B;
    return 0;
}