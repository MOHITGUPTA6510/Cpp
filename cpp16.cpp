//loops
#include <iostream>
using namespace std;

int main(){
    int i=1;
    while (i<=5){
        cout << i << " ";
        i++;
    }
    cout << endl;
    int j=1;
    do {
        cout << j << " ";
        j++;
    }while(j <=5);

    for(;;){
        cout << "this will rum forever";
    }


    return 0;
}
