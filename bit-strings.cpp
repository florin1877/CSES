#include <bits/stdc++.h>

using namespace std;

const uint64_t MOD = 1e9 + 7;

uint64_t solution(uint64_t n) {
    uint64_t ans = 1;

    for (uint64_t i = 1; i <= n; i++) {
        ans <<= 1;
        ans %= MOD;
    }

    return ans;
}

int main() {
    uint64_t n;
    cin >> n;
    cout << solution(n) << "\n";
}