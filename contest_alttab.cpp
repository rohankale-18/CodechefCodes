#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cout << fixed << flush;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> v;
        string s;
        for (int i = 0; i < n; i++) {
            cin >> s;
            v.push_back(s);
        }

        // Removing duplicates
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());

        reverse(v.begin(), v.end());

        for (const string& str : v) {
            cout << str << endl;
        }
        cout << endl;
    }

    return 0;
}
