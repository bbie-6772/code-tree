#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int idx = 0;

    for (idx = 0; idx < 10; ++idx)
    {
        cin >> numbers[idx];
        if(numbers[idx] == 0)
            break;
    }

    for (idx -= 1; idx >= 0; --idx)
    {
        cout << numbers[idx] << ' ';
    }

    // Please write your code here.
    return 0;
}