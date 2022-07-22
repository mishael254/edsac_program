#include "edsac.h"
#include <iostream>
#include <cmath>
using namespace std;
int main() {

	cout << "The following program  works how edsac did work\nTo print digits with its squares\n " << endl<<"digit    digit square\n";

	int digit = 0;
	while (digit<100) {

		int dgt_square = pow(digit, 2);
		cout << digit << '\t' << dgt_square << endl;
		++digit;
	
	}


}