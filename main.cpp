#include <iostream>
using namespace std;
int main() {
    int n;
    int a = 1, b = 1, c;
    cin >> n;
        cout << "1" << endl;
        cout << "1" << endl;
        do {
            c = a + b;
            cout << c << endl;
            b = a;
            a = c;
        }
        while( (a+b)<=n);
        
    return 0;
}
