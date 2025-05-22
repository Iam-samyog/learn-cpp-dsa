#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Nth term:";
    cin >> n;
    char alpha='A';
    for(int i=0;i<n;i++){
        for(int j=0; j<(i+1);j++){
            cout << alpha << " ";
        }
        cout << endl;
        alpha++;
    }
    cout << endl;
    return 0;
}