#include <iostream>
using namespace std;

int main() {
    int numbers[100], sumNumbers = 0;

    for (int i = 0; i < 100; ++i)
    {
        cin >> numbers[i];

        if (numbers[i] == 0 || i == 99)
        {
            sumNumbers = numbers[i - 3] + numbers[i - 2] + numbers[i - 1];
            break;
        }
    }

    cout << sumNumbers;

    // Please write your code here.
    return 0;
}