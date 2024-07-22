#include <iostream>
using namespace std;

void podzielne(int n, int x, int y) {
    if (n > 1 && n < 100000) {
        for (int i = 1; i < n; i++) {
            if (i % x == 0 && i % y != 0) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    if (t > 0) {
        for (int i = 0; i < t; i++) {
            int n, x, y;
            cin >> n >> x >> y;
            podzielne(n, x, y);
        }
    }
    return 0;
}
