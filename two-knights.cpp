#include <bits/stdc++.h>

using namespace std;

uint64_t solution(uint64_t n) {
    return (n - 1) * (n + 4) * (n * n - 3 * n + 4) / 2; 
}

int main() {
    uint64_t n;
    cin >> n;
    for (uint64_t i = 1; i <= n; i++)
        cout << solution(i) << "\n";
}