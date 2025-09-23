//first repeating elements
#include <iostream>

using namespace std;

int main(){
    int arr[] = {1,12,4,9,65,56,47,447,77,9,17,84};

    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<length ; i++){
        for (int j=i+1; j<length ; j++){
            if (arr[i]==arr[j]){
                cout << i+1 << " " <<j+1  << endl;
                break;
            }
        }
    }
    return 0;
}
