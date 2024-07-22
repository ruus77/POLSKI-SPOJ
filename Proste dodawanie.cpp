#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;

        if(t>0 && t<100) {
            for (int j= 0; j<t; j++){
            int n;
            cin>>n;
            int suma = 0;
            if(n>0) {
                for(int i =0; i <n; i++) {
                    int k; cin>>k;

                    suma +=k;

                }
            }
                cout << suma <<"\n";
        }
    }

return 0;
}
