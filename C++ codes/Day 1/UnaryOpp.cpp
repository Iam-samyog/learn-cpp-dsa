#include<iostream>
using namespace std;

int main(){
    int a=5;
    cout << a << endl;

    a++;
    cout << a << endl;
    
    cout << a++ /*work,update*/<< endl;
    cout << a << endl;
    cout << ++a /*update,work*/<< endl;
    cout << a << endl;

    cout <<"------"<<endl;
    cout << a-- << endl;
    cout << a << endl;
    cout << --a << endl;
    cout << a << endl;



    return 0;
}