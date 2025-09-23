//largest element in arrays
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,97,6,5,44,5,34,54,325,5432,32};
    int length = sizeof(arr)/sizeof(arr[0]);

    int a=0;
    for(int i=0 ; i<length ; i++){
        if (arr[i]>a){
            a=arr[i];
        }
        else{
            continue;
        }
    }
    cout<< a;
    return 0;
}
