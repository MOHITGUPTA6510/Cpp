//  Jump Statements
#include <iostream>
using namespace std;

int main(){
    for (int i=0; i<5 ; i++){
        if (i==3){
            break;// kill the loop
        }
        cout << i<< endl;

    }
    for (int i=0; i<5 ; i++){
        if (i==3){
            continue;// skip  the iteration and move to the next one
        }
        cout << i<< endl;

    }
    int age =17;
    if (age <18){
        goto Notapli;//to to another part of code
    }
    else{
        cout << "you can vote";
        return 0;
    }
    Notapli:
        cout << "You can not vote";
    return 0;
}
