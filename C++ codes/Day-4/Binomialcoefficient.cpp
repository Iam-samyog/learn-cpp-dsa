#include<iostream>
using namespace std;

int factofX(int x){
    int factX=1;
    for(int i=1;i<=x;i++){
        factX*=i;
    }
    return factX;
}


double BinomialCoefficient(int n,int r){
    return factofX(n)/
    (factofX(n-r)*factofX(r));
}

int main(){
    int n=10;
    int r=5;

    cout << "Binomial Coefficent is: " << BinomialCoefficient(n,r) << endl;

    return 0;
}