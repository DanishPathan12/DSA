#include <iostream>
using namespace std;

int main() {
    int n = 7; // Size of the pattern
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            // Print '*' for border or diagonal elements
            if (i == 0 || i == n  || j == 0 || j == n  || i == j || j==(n-i) ) {
                cout << "* ";
            } else {
                cout << "  "; // Print space for non-star positions
            }
        }
        cout << endl; // Move to the next line after each row
    }
    return 0;
}
