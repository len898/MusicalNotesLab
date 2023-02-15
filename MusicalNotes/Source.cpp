/*
On a piano, a key has a frequency, say f0. Each higher key (black or white) has a frequency of f0 * rn, where n is the distance (number of keys) from that key, and r is 2(1/12). Given an initial key frequency, output that frequency and the next 4 higher key frequencies.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
	double inputFrequency;
	const double RVALUE = pow(2, (1.0 / 12.0));

	std::cin >> inputFrequency;

	std::cout << std::fixed << std::setprecision(2) << inputFrequency << " " << pow(RVALUE,1) * inputFrequency << " " << pow(RVALUE, 2) * inputFrequency<< " " << pow(RVALUE, 3) * inputFrequency << " " << pow(RVALUE, 4) * inputFrequency << std::endl;

	return 0;
}