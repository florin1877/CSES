#include <bits/stdc++.h>

using namespace std;

int solution(int n, int arr[]) {
    
    int a = 0, b = 0;

    for (int i = 1; i <= n; i++)
        a ^= i;

    for (int i = 0; i < n - 1; i++)
        b ^= arr[i];

    return a ^ b;
}

int main() {
    int n, arr[200000];
    
    cin >> n;
    for (int i = 0; i < n - 1; i++)
        cin >> arr[i];

    cout << solution(n, arr) << "\n";
}