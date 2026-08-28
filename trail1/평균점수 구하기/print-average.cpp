#include <iostream>
using namespace std;

int main() {
    double scores[8];
    double sum_scores = 0.0;

    for (double& score: scores)
    {
        cin >> score;
        sum_scores += score;
    }

    cout << fixed;
    cout.precision(1);
    cout << sum_scores / 8;


    // Please write your code here.
    return 0;
}