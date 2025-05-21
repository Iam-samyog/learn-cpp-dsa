#include<iostream>
using namespace std;

int main(){
    cout << "---Break--\n";
    for(int i=0;i<20;i++){
        if(i==15){
            break;
        }
        cout << i <<endl;
    }

    cout << "---Continue---\n";
    for(int i=0;i<20;i++){
        if(i==15){
            continue;
        }
        cout << i << endl;
    }

    return 0;
}