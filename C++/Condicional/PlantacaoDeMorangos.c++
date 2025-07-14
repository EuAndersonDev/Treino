#include <iostream>
using namespace std;
int main(){
    int a, b, a1, b1, r, r1;
    cin >> a >> b;
    cin >> a1 >> b1;
    r = a * b;
    r1 = a1 * b1;
    if(r > r1){
        cout << r << endl;
    }else{
        cout << r1 << endl;
    }
    return 0;

}