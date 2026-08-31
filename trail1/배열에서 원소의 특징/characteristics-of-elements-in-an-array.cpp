#include <iostream>
using namespace std;

int main() {

    int prev_number = 0;
    for (int i = 0; i < 10; ++i)
    {
        int number;
        cin >> number;

        if (number % 3 == 0)
        {
            cout << prev_number;
            break;
        }

        prev_number = number;
    }
    // Please write your code here.
    return 0;
}