#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the Number :";
    cin >> num;

    if(num >= 0 ){
        cout << num << " is Positive Number";

    }else if(num == 0){
         cout << num << " is Zero ";
    }
    else{
        cout << num << " is Negative Number";
    }
    
    return 0;
}