#include <iostream>
using namespace std;

int main(){
    string word[15];
    for(int i=0;i<15;i++){
        cin >> word[i];
    }
    for( auto i : word){
        cout <<i << " - " << i.length() << endl;
    }
}