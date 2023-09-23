#include <iostream>
#include <string>
using namespace std;

int main() {
    const int n = 10;
    string phoneNumbers[n];

    for(int i = 0; i < n; ++i) {
        cin >> phoneNumbers[i];
    }
    for (int i = 0; i < n; ++i) {
        string phoneNumber = phoneNumbers[i];
        string phoneNum = phoneNumber.substr(0, 3);
        cout << (i + 1) << "\t\t" << phoneNum << "\t\t" << phoneNumbers[i] << endl;
    }
}
