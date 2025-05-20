#include<iostream>
using namespace std;

int main(){
    int a=5;
    int b=10;

    //Relational Operator (Returns True or False)

    cout << (3<5)<<endl; //true->1
    cout << (3>5)<<endl; //False ->1
    cout << (3<=5)<<endl; //true ->1
    cout << (3>=5)<<endl; //false->1
    cout << (3!=5)<<endl; //true ->1
    cout << (3==5)<<endl; // false ->0


    //Logical && , ||, !
    /*&& -AND ||-OR !-NOT*/
 cout << " ! NOT" <<endl;
    cout << !(3==5) <<endl; //true
    cout << !0 <<endl; //false

     cout << " && AND" <<endl;
     cout << 1 &&(3<=5) <<endl;//true
     cout << 0 &&(3<=5) <<endl;//false

     cout << " || OR" <<endl;
     cout << 1 ||(3<=5) <<endl;//true
     cout << 0 || (3<=5) <<endl;//true

    return 0;
}