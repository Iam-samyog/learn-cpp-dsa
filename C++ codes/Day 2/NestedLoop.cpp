#include<iostream>
using namespace std;

int main(){
    char ch='*';
    int n;
    cout << "Enter the Nth term:";
    cin >> n;
    for(int i=1;i<=n;i++){
        cout << i << " ";
        for(int j=0;j<i;j++){
            
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}