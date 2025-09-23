// switch case statement
#include <iostream>
using namespace std;
int main(){
    char c='B';

    switch(c){
    case 'A':
        cout<<"not matched";
        break;
    case 'B':
        cout<<"matched";
        break;

    default:
        cout<<"invalid input";
    }

    return 0;
}
