//for  each loop
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr ={1,2,3,4,5};

    cout  << "Iterating by value" << endl;
    for (auto it : arr ){
        cout << it << " " ;
    }
    cout << endl;
    cout <<"iterating by referance"<<endl;
    for (auto &it : arr){
        cout << it << " ";

    }
    cout << endl;
    return 0;
}
