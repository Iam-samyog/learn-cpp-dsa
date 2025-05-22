#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Nth term:";
    cin >> n;
    char star='*';
    for(int i=1;i<=n;i++){
        for(int j=1; j<=n;j++){
            cout << star << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}