#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int spaces = 2 * n - 1;
    int stars = 0;

    for (int i = 1; i <= 2 * n - 1; i++) {

        if (i <= n) {
            spaces -= 2;
            stars++;
        } else {
            spaces += 2;
            stars--;
        }

        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }

        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        for (int j = 1; j <= stars; j++) {
            if (j != n) {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}