#include <iostream>
using namespace std;

int mod(int a){
    int b;
    b = a%2;
    return b;
}

int main(){
    int a;
    cin >> a;
    int result = mod(a);
    cout << result << endl;

    return 0;

}