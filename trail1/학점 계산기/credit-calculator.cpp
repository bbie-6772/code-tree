#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    double number[5];
    double sum_number = 0.0;
    string grade[3] = {"Perfect", "Good", "Poor"};
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        cin >> number[i];
        sum_number += number[i];   
    }

    double average = (sum_number / N);

    cout << fixed;
    cout.precision(1);
    cout << average << '\n';

    if (average >= 4)
    {
        cout << grade[0];
    }
    else if ( average >= 3)
    {
        cout << grade[1];
    } else 
    {
        cout << grade[2];
    }
    
    // Please write your code here.
    return 0;
}