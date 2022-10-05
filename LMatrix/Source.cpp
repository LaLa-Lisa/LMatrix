#include <iostream>
#include "LMatrix.hpp"

int main() {
	LMatrix A(3, 3);
	std::vector<std::vector<double>> mat = { {2, 5,-2},
											 {3, 8, 0},
											 {1, 3, 5} };
	A.data = mat;
	LMatrix B = A.inverse();
	LMatrix C(3, 3);
	C = A * B;
	C.console_out();
	return 0;
}