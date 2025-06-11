#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    if (str.size() != n) {
        cout << "NO";
        return 0;
    }
    vector<bool> seen(26, false);
    for (char ch : str) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            seen[ch - 'a'] = true;
        }
    }
    for (bool present : seen) {
        if (!present) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
