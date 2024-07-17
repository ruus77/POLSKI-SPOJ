#include<iostream>
using namespace std;
int main() {
    int n1, n2, k1, k2;
    cin>>n1>> k1>> n2>> k2;
    if((n1>=1 && n1<=1000) && (k1>=1 && k1<=1000) && (n2>=1 && n2<=1000) && (k2>=1 && k2<=1000)) {
        cout<<n1 * k1 + n2 * k2;
    }

        return 0;
}