//nested if-else
#include <iostream>
using namespace std;
int main(){
    int n=-44;

    if(n>0){
        if(n%2==0){
            cout<<"number is positive and even";
        }
        else{
            cout<<"number is positive and odd";
        }
    }
    else if(n==0){
        cout<<"the number is zero";
    }
    else{
        cout<<"the number is negative";
    }
    return 0;
}
