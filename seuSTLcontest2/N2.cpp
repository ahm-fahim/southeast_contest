#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;

    while(t--){
        int n;
        cin>> n;
        cin.ignore();

        vector <string> str;

        for(int i = 1; i <= n; i++){
            string item;
            getline(cin, item);
            str.push_back(item);
        }

        for(int i = 0; i < n; i++){
            cout<<str[i];
        }
    }
}
