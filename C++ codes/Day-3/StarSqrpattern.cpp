#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Nth term:";
    cin >> n;
    char star='*';
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            cout << star << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}