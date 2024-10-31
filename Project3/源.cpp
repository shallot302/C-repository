#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	string s;
	cin >> s; int n = 0; int temp = 0;
	while (n >= 0) {
		if (s[n] == '\0') {
			break;
		}
		else if (s[n] == 'B') {
			n++;
			if (s[n] == 'A') {
				n++;
			}
			else if (s[n] == '\0') {
				break;
			}
			if (s[n] == 'Y') {
				n++;
			}
			else if (s[n] == '\0') {
				break;
			}
			if (s[n] == '\0') {
				break;
			}
			else if (s[n] == 'R') {
				n++;
				continue;
			}
			else {
				temp++;
				break;
			}

			else {
				temp++;
				break;
			}

			else {
				temp++;
				break;
			}

		else {
			temp++;
			break;
		}
		}
	}
	if (temp == 0) {
		cout << "hunting successfully";
	}
	if (temp == 1) {
		cout << "Carting";
	}
	return 0;
}