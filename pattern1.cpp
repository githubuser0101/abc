#include <iostream>
using namespace std;

void nStarDiamond(int n) {
    // Write your code here.
    // for proper triangle
    for (int i = 1; i <= n; ++i) {
    
        // printing spaces
        for (int j = 1; j <= n-i; ++j) {
            cout << " ";
        }

        // printing asterisks
        for (int k = 1; k <= 2*i-1; k++) {
            cout << "*";
        }

        cout << endl;
    }

    // for reverse triangle
    for (int i = n; i >= 1; i--) {
        // printing spaces
        for (int k = 1; k <= n-i; k++) {
            cout << " ";
        }

        // printing asterisks
        for (int j = 1; j <= 2*i-1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    nStarDiamond(n);
    return 0;
}