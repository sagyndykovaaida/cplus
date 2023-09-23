#include <iostream>
#include <string>
using namespace std;

int main(){
    int n =10;
    int number[n];
    string lastName[n];
    string groupName[n];

    for(int i=0;i<n;i++){
        cin >> number[i];
    }
    for(int i=0;i<n;i++){
        cin >> lastName[i];
    }
    for(int i=0;i<n;i++){
        cin >> groupName[i];
    }

    for(int i=0;i<n;i++){
        cout << number[i] << " " << groupName[i] <<  " " << lastName[i] << endl ;
    }
}