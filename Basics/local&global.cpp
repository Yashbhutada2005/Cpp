#include <iostream>
using namespace std;
    void function() {
        int a;
     // global variable = it can be declared outside any fnction but can be accesed from anywhere
        int a = 98;
        cout<<a;
    }
 int main () {
    // local variable = it can be declared inside the braces and can be accesed from the function itself
    int a = 123;
    // precedency is given to local variable 

    cout<<a<<endl;
    return 0;
 }