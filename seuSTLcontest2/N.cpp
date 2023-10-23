#include <bits/stdc++.h>

using namespace std;

struct person {
    string name;
    int year;
};

bool cmp(person x, person y) {
    return x.year > y.year;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cin.ignore();

        person a[n + 1];

        for (int i = 1; i <= n; i++) {
            getline(cin, a[i].name);
            cin.ignore();
            cin >>a[i].year;
        }

        sort(a + 1, a + n + 1, cmp);

        for (int i = 1; i <= n; i++) {
            cout << a[i].name << "\n";
        }
    }

    return 0;
}