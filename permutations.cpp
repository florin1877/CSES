#include <bits/stdc++.h>

using namespace std;

void solution(int n) {

    if (n == 1) {
        cout << 1;
        return;
    }

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION\n";
        return;
    }

    for (int i = 2; i <= n; i += 2)
        cout << i << " ";

    for (int i = 1; i <= n; i += 2)
        cout << i << " ";

    cout << "\n";

}

int main() {
    int n;
    cin >> n;
    solution(n);
}