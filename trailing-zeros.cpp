#include <bits/stdc++.h>
 
using namespace std;
 
uint64_t solution(uint64_t n) {
    uint64_t cnt = 0;
 
    for (uint64_t i = 5; i <= n; i *= 5) {
        cnt += (n / i);
    }
 
    return cnt;
}
 
int main() {
    uint64_t n;
    cin >> n;
    cout << solution(n) << "\n";
}