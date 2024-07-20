#include <iostream>
using namespace std;

string napis(int k) {
    if (k % 6 == 0) return "ab";
    if (k % 2 == 0 && k % 3 != 0) return "a";
    if (k % 3 == 0 && k % 2 != 0) return "b";
    return "";
}

int main() {
    int x, y;
    cin >> x >> y;

    if (x <= y && x >= 0 && y >= 0) {
        string wynik = "";
        for (int i = x; i <= y; ++i) {
            wynik += napis(i);
        }
        cout << wynik << endl;
    }

    return 0;
}
