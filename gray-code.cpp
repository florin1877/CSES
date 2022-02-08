#include <bits/stdc++.h>

#define _int uint64_t

using namespace std;

_int leftmost_bit(_int x) {
    x = x | (x >> 1);
    x = x | (x >> 2);
    x = x | (x >> 4);
    x = x | (x >> 8);
    x = x | (x >> 16);
    return x - (x >> 1);
}

string to_Bin(_int n) {
    string res = "";
    _int first_one = leftmost_bit(n);

    if (first_one == n && n) {
        res += "1";
        _int k = (n >> 1);
            
        for (_int i = 1; i <= k; i *= 2) {
            res += "0";
        }

        return res;
    }

    for (_int i = 1; i <= first_one; i *= 2) {
        res.insert(0, to_string(n & 1));
        n >>= 1;
    }

    return res;
}

_int to_Gray(_int n) {
    return n ^ (n >> 1);
}

void solution(_int n) {

    _int k = (1 << n);
    for (_int i = 0; i < k; i++) {
        string ans = to_Bin(to_Gray(i));

        if (ans.length() < n)
            for (_int j = 0; j < n - ans.length(); j++)
                cout << "0";

        cout << ans << "\n";
    }

}

int main() {
    _int n;
    cin >> n;
    solution(n);
}