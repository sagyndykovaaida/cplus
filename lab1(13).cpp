#include <iostream>
#include <string>
using namespace std;

int main() {
    const int n = 5;
    string name[n];
    string addr[n];

    for (int i = 0; i < n; i++) {
        getline(cin, name[i]);
        getline(cin, addr[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << (i + 1) << "\t\t" << name[i] << "\t\t" << addr[i] << endl;
    }

}
