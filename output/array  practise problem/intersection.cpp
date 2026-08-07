#include <bits/stdc++.h>
using namespace std;

vector<int> findinterssection(vector<int> a, vector<int> b) {
    vector<int> ans;

    int n1 = a.size();
    int n2 = b.size();

    vector<int> vis(n2, 0);

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {

            if (a[i] == b[j] && vis[j] == 0) {
                ans.push_back(a[i]);
                vis[j] = 1;
                break;
            }

            else if (b[j] > a[i]) {
                break;
            }
        }
    }

    return ans;
}

int main() {
    int n, m;

    cout << "Enter the number of first array: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter elements of first array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter the number of second array: ";
    cin >> m;

    vector<int> b(m);

    cout << "Enter elements of second array: ";
    for (int j = 0; j < m; j++) {
        cin >> b[j];
    }

    vector<int> ans = findinterssection(a, b);

    cout << "Intersection: ";

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}