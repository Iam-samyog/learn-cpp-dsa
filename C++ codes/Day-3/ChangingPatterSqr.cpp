#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Nth term:";
    cin >> n;
    int k=1;
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}