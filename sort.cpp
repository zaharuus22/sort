#include <iostream>
#include <fstream>
using namespace std;
std::ifstream ent("input.txt");
std::ofstream esc("output.txt");
long long n = 0;
long long ms[1009];
long long ans = 0;

int input();
int output();
int solve();
int safik(long long& a, long long& b);
int buble();
int input() {

	ent >> n;
	for (int i = 0; i < n; i++) {
		ent >> ms[i];


	}
	return 0;
}

int solve() {
	for (int i = 0; i < n; i++) {
		buble();

	}




	return 0;
}
int buble() {
	for (int i = 0; i < n - 1; i++) {
		int j = i + 1;
		if (ms[i] > ms[j]) {
			safik(ms[i], ms[j]);

		}

	}

	return 0;

}

int output() {

	esc << ans;

	return 0;
}

int main()
{
	
	input();
	solve();
	output();
	return 0;
}
int safik(long long& a, long long& b) {
	/*
	а = 3   b = 5
	a1 = 5  b1 = 3  a = 3 b = 5
	a1 = 5 b1 = 3 a = 5  b = 3

	a = 5  b = 3
	*/
	long long a1, b1;
	a1 = b;
	b1 = a;
	a = a1;
	b = b1;
	ans += 1;
	return 0;
}



