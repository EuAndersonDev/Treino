#include <iostream>
using namespace std;

int main(){
    int idade;
    cin >> idade;
    if(idade >= 18){
        cout << "Maior"<< endl;
    }else{
        cout << "Menor" << endl;
    }
    return 0;
}