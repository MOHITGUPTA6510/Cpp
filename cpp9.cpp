#include <iostream>
using namespace std;
int main(){
    int age;
    cin >> age;
    cout<< " Age : " <<age <<endl;

    //un-buffered error stream
    //do not store data(message)
    cerr<< "An error occurred" << endl;

    //buffered error stream
    //store data (message)
    clog << "Another error occured";

    return 0;
}
