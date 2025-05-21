//Find the character uppercase and lowercase

#include<iostream>
using namespace std;

int main(){
    char ch;

    cout << "Enter alphabet:";
    cin >> ch;

    if(ch>=65 && ch<97){
        cout << "The character is in Uppercase";
    }
    else if(ch>=97 && ch<123 ){
        cout << "The character is in Lowercase";
    }
    return 0;
}