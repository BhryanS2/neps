/*
beecrowd | 1003
Soma Simples
https://www.beecrowd.com.br/judge/pt/problems/view/1003
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define PB push_back
#define MP(a,b) make_pair(a,b)
#define F first
#define S second

#define MAX 100000000

int main() {
  int a, b;
  cin >> a >> b;
  cout << "SOMA = " << a + b << endl;

  return 0;
}


//g++ exe.cpp -o exe && ./exe < input.txt
