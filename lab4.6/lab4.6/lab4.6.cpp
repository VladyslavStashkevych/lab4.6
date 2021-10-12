#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P, Sum;
	int k, n;

	k = 1;
	n = 1;
	P = 1.;

	while (k <= 25) {
		Sum = 0;
		n = 1;
		while (n <= k * k) {
			Sum += 1. / n;
			n++;
		}
		P *= 1 + Sum;
		k++;
	}

	cout << P << endl;

	P = 1;
	k = 1;

	do {
		Sum = 0;
		n = 1;
		do {
			Sum += 1. / n;
			n++;
		} while (n <= k * k);
		P *= 1 + Sum;
		k++;
	} while (k <= 25);

	cout << P << endl;

	P = 1;

	for (k = 1; k <= 25; k++) {
		Sum = 0;
		for (n = 1; n <= k * k; n++) {
			Sum += 1. / n;
		}
		P *= 1 + Sum;
	}

	cout << P << endl;

	P = 1;

	for (k = 25; k >= 1; k--) {
		Sum = 0;
		for (n = k * k; n >= 1; n--) {
			Sum += 1. / n;
		}
		P *= 1 + Sum;
	}

	cout << P << endl;

	return 0;
}