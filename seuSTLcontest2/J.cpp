#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    string s;

    cin.ignore();
    while(t--){
        getline(cin, s);
        stringstream ss (s);
        while(ss>> s){
            reverse(s.begin(),s.end());
            cout<< s <<" ";
        }
    }

    return 0;
}

