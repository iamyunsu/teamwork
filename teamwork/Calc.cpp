#include <stdexcept>
class Calc {
public:
	int getSum(int a, int b) {
		return a + b;
	}
	int getGop(int a, int b) {
		return a * b;
	}
	int getZegop(int a) {
		return 0;
	}
	int getMinus(int a, int b) {
		return a - b;
	}
	int getDivide(int a, int b) {
		if (!b) throw std::invalid_argument("b cannot be zero");
		return a / b;
	}
	int getSumSum(int a, int b, int c) {
		return a + b + c;
	}
};