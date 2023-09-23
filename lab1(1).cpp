#include <iostream>
using namespace std;

int main() {
    int two[20];
    int three[20];
    int n1=0,n2=0;
    for(int i=0;i<20;i++){
        int n;;
        cin >> n;
        if(n >=10 && n <=99){
            two[n1] = n;
            n1++;
        }
        if(n>=100 && n<=999){
            three[n2] = n;
            n2++;
        }
    }
    for(int i=0;i<n1;i++){
        cout << two[i] << " ";
    }

    cout << endl;

    for(int i=0;i<n2;i++){
        cout << three[i] << " ";
    }

}
