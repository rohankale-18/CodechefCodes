#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count = 0;
        int rightParentheses = 0;

        for (int i = 0; i < n; ++i) {
            if (s[i] == ':') {
                if (i + 1 < n && s[i + 1] == ')') {
                    count += rightParentheses;
                }
                if (i + 2 < n && s[i + 1] == ')' && s[i + 2] == ')') {
                    ++count;
                }
            }
            if (s[i] == ')') {
                ++rightParentheses;
            }
        }

        cout << count << endl;
    }
    return 0;
}
