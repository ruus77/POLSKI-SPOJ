#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 0 && n <= 1024) {
        vector<int> patyczki(n);
        for (int i = 0; i < n; ++i) {
            cin >> patyczki[i];
        }
        int dlugosci[257] = {0}; 
        for (int i = 0; i < n; ++i) {
            if (patyczki[i] > 0 && patyczki[i] <= 256) {
                dlugosci[patyczki[i]]++;
            }
        }

        int liczba_trojkatow = 0;
        for (int i = 1; i <= 256; ++i) {
            liczba_trojkatow += dlugosci[i] / 3;
        }

        cout << liczba_trojkatow << endl;
    }

    return 0;
}
