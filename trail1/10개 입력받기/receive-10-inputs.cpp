#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int sum_numbers = 0;
    int count;

    for (count = 0; count < 10; ++count)
    {
        cin >> numbers[count];
        if (numbers[count] == 0)
            break;

        sum_numbers += numbers[count];
    }

    cout << sum_numbers << ' ';
    cout << fixed;
    cout.precision(1);
    cout << double(sum_numbers) / count;

    // Please write your code here.
    return 0;
}