//applying switch case
#include <iostream>
using namespace std;
int main(){
    char name ='M';//only compare single charecter

    switch(name){
    case 'M':
        cout<<"person is matched";
        break;
    case 'K':
        cout<<"persons is not matched";
        break;
    default :
        cout<<"input name not exist";
    }
    return 0;
}
