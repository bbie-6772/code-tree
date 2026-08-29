#include <iostream>
using namespace std;

int main() {
    int N, tests = 4;
    char answer[2][5] = {"fail", "pass"};
    cin >> N;

    int pass_students = 0;
    for (int i = 0; i < N; ++i)
    {
        int sum_score = 0;
        int answer_idx = 0;
        for (int j = 0; j < tests; ++j)
        {
            int score;
            cin >> score;

            sum_score += score;
        }

        double avg_score = double(sum_score) / tests;

        if (avg_score >= 60)
        {
            ++pass_students;
            answer_idx = 1;
        }

        cout << answer[answer_idx] << '\n';
    } 
    cout << pass_students;

    // Please write your code here.
    return 0;
}