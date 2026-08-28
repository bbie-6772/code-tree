#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int sum_numbers = 0;
    int count = 0;

    for (int i = 0; i < 10; ++i)
    {
        cin >> numbers[i];

        if (numbers[i] == 0)
            break;

        if (numbers[i] % 2 != 0)
            continue;

        sum_numbers += numbers[i];
        ++count;
    }

    cout << count << ' ';
    cout << sum_numbers;

    // Please write your code here.
    return 0;
}