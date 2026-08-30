#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int sumEvenNumbers = 0, sumOddNumbers = 0;

    for (int i = 0; i < 5; ++i)
    {
        int evenNumber, oddNumber;
        cin >> evenNumber >> oddNumber;

        sumEvenNumbers += evenNumber;
        sumOddNumbers += oddNumber;
    }

    cout << abs(sumEvenNumbers - sumOddNumbers);
    // Please write your code here.
    return 0;
}