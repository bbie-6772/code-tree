#include <iostream>
using namespace std;

int main() {
    int sum_number = 0;

    for(int i = 0; i < 10; ++i)
    {
        int number;
        cin >> number;

        if (i != 2 && i != 4 && i != 9)
            continue;
        
        sum_number += number;
    }

    cout << sum_number << ' ';
    // Please write your code here.
    return 0;
}