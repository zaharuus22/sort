#include <iostream>
#include <fstream>
using namespace std;
std::ifstream ent("input.txt");
std::ofstream esc("output.txt");


int input(long long&n, long long*ms) {

	ent >> n;
	for (int i = 0; i < n; i++) {
		ent >> ms[i];


	}
	return 0;
}

int main()
{
	long long n = 0;
	long long ms[1009];
	input(n, ms);
	return 0;
}

