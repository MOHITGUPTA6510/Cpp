// arrays
#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};

    arr[0]=90; // updating a array

    for (int i=0; i<5 ; i++){
        cout << arr[i] << " ";
    }

    char arr1[]={'a','b','c','d','e'};
    cout << "Size of array[0]: " << sizeof(arr1[0])<<endl;
    cout << "Size of array : "<<sizeof(arr1)<<endl;

    int n = sizeof(arr1)/sizeof(arr1[0]);
    cout << "the length of array : "<< n << endl;
    return 0;
}
