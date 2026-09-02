#include <iostream>
#include <vector>

using namespace std;

int n;
int arr[100000];

int main() {
    cin >> n;
    int maxValue = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        maxValue = maxValue < arr[i] ? arr[i] : maxValue;
    }

    // 현재 진행중인 벡터 값 초기화
    vector<int> current(arr, arr + n);
    // 일의 자리부터 첫번째(k) 자리까지 반복하도록 설계
    // 탈출 조건 = 자릿수 k가 가장 큰 값의 자릿수보다 클 때
    int k = 1;
    while(maxValue / k > 0)
    {
        vector<vector<int>> digits(10, vector<int>());

        for (int i = 0; i < n; ++i)
        {
            int number = (current[i] / k) % 10;
            digits[number].push_back(current[i]);
        }

        // 이전 정렬값 초기화
        current.clear();

        for (int i = 0; i < 10; ++i)
        {
            // 자릿수로 정렬된 배열 순차적으로 삽입
            current.insert(
                current.end(),
                digits[i].begin(),
                digits[i].end()
            );
        }

        k = k * 10;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << current[i] << ' ';
    }

    // Please write your code here.

    return 0;
}
