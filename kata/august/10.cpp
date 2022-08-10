#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
	int n = stoi(argv[1]);	
	cout << "Checking number " << n << endl;
	int sqn = (int) sqrt((double) n);
	for (int i = 2; i < sqn; i++) {
		if (n % i == 0) {
			cout << "NOT PRIME, can be divided by " << i << endl;
			return 0;
		}
	}
	cout << "PRIME :D" << endl;

	return 0;
}
