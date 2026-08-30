#include <iostream>
using namespace std;

int main() {
    int total_num = 10, sum_num_2 = 0, avg_sum_3 = 0;

    for(int i = 0; i < total_num; ++i)
    {
        int number, pos;
        cin >> number;

        pos = i + 1;

        if (pos % 2 == 0)
        {
            sum_num_2 += number;
        }

        if (pos % 3 == 0)
        {
            avg_sum_3 += number;
        }
    }

    cout << sum_num_2 << ' ' 
    << fixed;
    cout.precision(1);
    cout << double(avg_sum_3) / 3;


    // Please write your code here.
    return 0;
}