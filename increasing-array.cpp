#include <bits/stdc++.h>

using namespace std;

uint64_t solution(uint64_t n, uint64_t arr[]) {
    uint64_t moves = 0;

    for (uint64_t i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            moves += arr[i] - arr[i + 1];
            arr[i + 1] = arr[i];
        }
    }

    return moves;
}

int main() {
    uint64_t n, arr[200000];
    
    cin >> n;
    for (uint64_t i = 0; i < n; i++)
        cin >> arr[i];

    cout << solution(n, arr) << "\n";
}