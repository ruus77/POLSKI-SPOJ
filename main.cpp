#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    if (t > 0 && t <= 100) {
        for (int i = 0; i < t; i++) {
            int k;
            cin >> k;

            vector<int> tablica;

            for (int j = 0; j < k; j++) {
                int n;
                cin >> n;
                tablica.push_back(n);
            }
            reverse(tablica.begin(), tablica.end());

            for (int j = 0; j < k; j++) {
                cout << tablica[j] << " ";

            }
        }cout<<"\n";
    }

    return 0;
}
