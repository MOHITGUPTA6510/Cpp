//arrays to function
#include <iostream>
using namespace std;

void PrintArray(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[]= {2,4,8,12,16};
    int n = sizeof(arr)/ sizeof (arr[0]);
    PrintArray(arr,n);
    return 0;
}
