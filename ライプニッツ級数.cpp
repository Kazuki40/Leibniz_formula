//ライプニッツ級数
#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
using namespace std;

//宣言
long long int n, i;
double fx;

int main() {
	cout << "繰り返し回数を入力\n";
	cin >> n;
	for (i = 0; i <= n; i++) {
		fx += (pow(-1, i)) / (2 * i + 1);
	}
	fx = fx * 4;
	cout << "答えは" << scientific << fx << endl;
	return 0;
}