#include <bits/stdc++.h>

using namespace std;

void solution(uint64_t n) {
    cout << n << " ";

    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
            cout << n << " ";
        }

        else {
            n = 3 * n + 1;
            cout << n << " "; 
        }

    }

    cout << "\n";
}

int main() {
    uint64_t n;
    cin >> n;
	solution(n);	
}