#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter the nth term:";
    cin >> n;

    for(int i=0;i<n;i++){
        char alp='A';
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j=0;j<(n-i);j++){
            cout << char(alp+i) ;

        }
        cout << endl;
    }
    return 0;
}