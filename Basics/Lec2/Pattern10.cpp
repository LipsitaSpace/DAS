#include<iostream>
using namespace std;

void firsthalf(int n) {
      for (int i = 0; i<n; i++){
        for (int j = 0; j < n; j++){
            if (j<=i) {
                cout << "*";
            }
        }
        cout << endl;
    }
}

void sechalf(int n) {
    for (int i = n-1; i >= 0; i--){
    for (int j = 0; j < i; j++)
    {
        cout << "*";
    }
    cout<<endl;
    }
}

int main() {
    int n = 5;
    firsthalf(n);
    sechalf(n);
}