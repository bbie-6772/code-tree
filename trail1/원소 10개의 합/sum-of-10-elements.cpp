#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int sum_numbers = 0;
    
    for (int& number: numbers)
    {
        cin >> number;
        sum_numbers += number;
    }

    cout << sum_numbers;
    // Please write your code here.
    return 0;
}