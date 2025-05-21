//Find the character uppercase and lowercase

#include<iostream>
using namespace std;

int main(){
    char ch;

    cout << "Enter alphabet:";
    cin >> ch;

    if(ch>=65 && ch<91){
        cout << "The character is in Uppercase\n";
    }
    else if(ch>=97 && ch<123 ){
        cout << "The character is in Lowercase\n";
    }else{
        cout << "Invalid Input\n";
    }

    //another way is 
    if(ch>='a' && ch<='z'){
        cout << "The character is in Lowercase\n";
    }
    else if(ch>='A' && ch<='Z' ){
        cout << "The character is in Uppercase\n";
    }
    else{
        cout << "Invalid Input\n";
    }


    return 0;
}