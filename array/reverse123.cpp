#include <iostream>
using namespace std;

int main()
{

    int n = 1234;
    int reverse = 0;

    while (n > 0)
    {
        int remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }
    cout << "reverse " << reverse << endl;
    return 0;
}
