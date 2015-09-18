#include <iostream>

template<typename T, typename U>
int readAndSum(std::istream& input, T& sum, U& n) {
	sum = 0;
	n = 0;

	T value = 0;
	input >> value;
	while(input) {
		sum += value;
		++n;
		input >> value;
	}

	return 0;
}

using namespace std;

int main(int argc, char** argv) {
	double sum;
	size_t n;
	int ret = readAndSum(cin, sum, n);
	cout << sum << endl;
	return ret;
}

