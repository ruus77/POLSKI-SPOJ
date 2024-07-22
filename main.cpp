#include <iostream>
#include <cmath>

using namespace std;
long long int silnia(long long int n) {
    if(n ==0 || n==1) return 1;
    if(n > 10) return 0;
    return n*silnia(n-1);



}
int main() {
    int D; cin >> D;
    if(D>=1 && D<=30) {
        for(int i =0; i<D; i++)
        {
            long long int n;    cin>>n;
            if(n>=0 && n<= pow(10, 9)) {

                long long int wynik = silnia(n);
                int jedn = wynik % 10;
                int dzies = (wynik % 100 - jedn) / 10 ;


                if(wynik < 10) cout<< "0 " << wynik<<endl;

                else
                    cout<<dzies<<" "<<jedn<<endl;

            }
        }
    }



    return 0;
}