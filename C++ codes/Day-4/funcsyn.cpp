#include<iostream>
using namespace std;

//function definition
int printHello(){
    cout << "hello\n";
    return 3;
}

int main(){
    
    printHello();//Function call;
    cout << printHello();
    return 0;
}