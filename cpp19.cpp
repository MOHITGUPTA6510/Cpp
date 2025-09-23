//arrays + Pointers

#include <iostream>
using namespace std;
int main(){
    int arr[5];

    cout << arr << endl;
    cout << &arr[1] << endl;

    int arr1[]={2,4,8,12,16};
    int* ptr =arr1;
    for (int i =0 ; i<5 ; i++){
        cout << *(ptr + i) << " ";
    }


    return 0;
}
