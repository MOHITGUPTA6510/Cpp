//count number of zeros in an arrays
#include <iostream>
using namespace std;

int main(){
    int a=0;
    int arr[]={1,2,3,4,6,0,7,5,4,67,8,6,4,9,0,69,88,0,99,89};
    int length = sizeof(arr)/sizeof(arr[0]);
    for(int i=0 ; i< length ; i++){
        if (arr[i]==0){
            a+=1;
        }
    }
    cout << a ;
    return 0;
}
