#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l, c, coposquebrados = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> l >> c;
        if(l > c){
            coposquebrados += c;
        }
    }

    cout << coposquebrados;
}