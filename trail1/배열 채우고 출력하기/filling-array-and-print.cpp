#include <iostream>
using namespace std;

int main() {
    char words[10];

    for (char& word: words)
        cin >> word;

    for (int i = 10 - 1; i >= 0; --i)
        cout << words[i];

    // Please write your code here.
    return 0;
}