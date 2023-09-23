#include <iostream>
#include <cctype>
using namespace std;

int main() {
    const int n = 20;
    char input[n];
    char symbol[n];
    char num[n];

    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }
    int n1 = 0;
    int n2 = 0;

    for (int i = 0; i < n; i++) {
        char a = input[i];

        if (isalpha(a)) {
            symbol[n1++] = a;
        } else if (isdigit(a)) {
            num[n2++] = a;
        }
    }
    for (int i = 0; i < max(n1, n2); i++) {
        if (i < n1) {
            cout << symbol[i] << "\t";
        } else {
            cout << " \t";
        }
        if (i < n2) {
            cout << num[i];
        }
        cout << endl;
    }
}
