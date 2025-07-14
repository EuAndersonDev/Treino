#include <iostream>
using namespace std;
int main(){
    int E, D;
    cin >> E;
    cin >> D;
    if (E>D){
        cout << E+D << endl;
    }else{
        cout << 2*(D-E) << endl;
    }
    return 0;
}