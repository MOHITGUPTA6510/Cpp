// search an element in arrays
#include <iostream>
using namespace std;

int main(){
    int a=25;
    int arr[] = {1,2,9,6565,6,3,6,4,65,657,68,7,55623,1,32};
    int length = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i< length ; i++){
        if (arr[i]==a){
            cout << "the element is found" ;
            break;
        }
        else {
            continue ;
        }
    }
    if (arr[length-1]!=a){
        cout << "element is not found";
    }
    return 0;

}
