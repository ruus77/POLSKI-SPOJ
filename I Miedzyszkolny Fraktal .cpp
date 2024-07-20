#include <iostream>
using namespace std;

int main() {
    int o_s, t_s, e_s, d_s;     //stacjonarnie
    int o, t, e, d; //zdalnie

    cin>>o_s>>o;
    cin>>t_s>>t;
    cin>>e_s>>e;
    cin>>d_s>>d;
    if( (o_s>=1 && o_s <=250) &&
        (t_s>=1 && t_s <=250) &&
        (e_s>=1 && e_s <=250) &&
        (d_s>=1 && d_s <=250) &&

        (o>=1 && o <=250) &&
        (t>=1 && t <=250) &&
        (e>=1 && e <=250) &&
        (d>=1 && d <=250))

    {
        int wynik = (o_s - o) + (t_s - t) + (e_s - e) + (d_s - d);
        cout<<wynik<<endl;
    }


    return 0;
}