#include <bits/stdc++.h>

using namespace std;

int solution(string str) {
	int n = str.length();
	int i = 0, cnt, res = 1;

	while (i < n - 1) {
        cnt = 1;

		while (str[i] == str[i + 1]) {
			cnt++;
			i++;
		}
    
		res = (res > cnt) ? res : cnt;
		i++;
	}

	return res;
}

int main() {
    string str;
    cin >> str;
	cout << solution(str) << "\n";	
}
