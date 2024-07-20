#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int a, b, c, d, e;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    if( a > 0 &&
        b > 0 &&
        c > 0 &&
        d > 0 &&
        e > 0) {
        int wynik = 5 + a + b + c + d+ e;
        cout<<wynik;
    }
    return 0;
}
