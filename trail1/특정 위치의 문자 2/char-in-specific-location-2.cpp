#include <iostream>
using namespace std;

int main() {

    for (int i = 0; i < 10; ++i)
    {
        char number;
        cin >> number;

        if (i == 1 || i == 4 || i == 7)
        {
            cout << number << ' ';
        }
    }
    // Please write your code here.
    return 0;
}