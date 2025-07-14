#include <iostream>
using namespace std;
int main() {
    int temperatura, resultado;
    cin >> temperatura;
    resultado = temperatura - 20;
    if(resultado < 0){
        cout << resultado*-1 << endl;
    }else{
        cout << resultado << endl;
    }
    return 0;
}