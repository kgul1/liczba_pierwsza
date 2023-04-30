#include <iostream>
using namespace std;
bool czy_pierwsza(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<=n/2;i++){

        if(n % i==0){
            return false;
        }
    }
    return true;
}


int main() {

    for(int i=1;i<=10;i++){
        if(czy_pierwsza(i)){
            cout<<i<<" liczba jest pierwsza\n";
        }else{
            cout<<i<<" liczba nie jest pierwszan\n";
        }
    }
    return 0;
}
