#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int count = 0;

    for (int i = 0; i < 10; ++i)
    {   
        int number;
        cin >> number;
        if ( number >= 250 )
            break;

        sum += number;
        ++count;
    }
    
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << double(sum) / count;

    // Please write your code here.
    return 0;
}