#include <bits/stdc++.h>

using namespace std;

uint64_t solution(uint64_t x, uint64_t y) {

    if ((x < y) && (y & 1)) 
        return y * y - x + 1;

    if ((x < y) && !(y & 1))
        return (y - 1) * (y - 1) + x;

    if ((x > y) && (x & 1))
        return (x - 1) * (x - 1) + y;
    
    if ((x > y) && !(x & 1)) 
        return x * x - y + 1;

    return x * (x - 1) + 1;

}

int main() {
    uint64_t t, x, y;
    cin >> t;
    while (cin >> x >> y)
        cout << solution(x, y) << "\n";
}