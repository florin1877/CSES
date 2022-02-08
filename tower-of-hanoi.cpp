#include <bits/stdc++.h>

using namespace std;

void solution(int n, int left, int middle, int right) {
	if (!n) { 
        return;
    }

    solution(n - 1, left, right, middle);
    cout << left << " " << right << "\n";
    solution(n - 1, middle, left, right);
}

int main() {
    int n;
    cin >> n;
    cout << (1 << n) - 1 << "\n";
    solution(n, 1, 2, 3);
}