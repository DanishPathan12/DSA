#include <iostream>
using namespace std;

int main()
{

        int arr[5] = {-2, 1, 3, -2, 10};
        int sum = 0;
        int maxi = arr[0];

        for (int i = 0; i < 5; i++)
        {
                maxi = max(maxi, sum);
                if (sum < 0)
                {
                        sum = 0;
                }
        }
        cout << maxi;
}
