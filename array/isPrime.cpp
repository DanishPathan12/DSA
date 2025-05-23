#include <iostream>
using namespace std;

bool isprime(int n, int divisor = 2)
{
    if (n < 2)
    {
        return false;
    }

    if (n % divisor == 0)
    {
        return false;
    }
    if (divisor * divisor > n)
    {
        return true;
    }
    return isprime(n, divisor + 1);
}

int main()
{
    cout << isprime(17);
}