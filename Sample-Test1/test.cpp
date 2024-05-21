#include "gtest/gtest.h"
#include "../teamwork/Calc.cpp"

TEST(calc, calcSum) {
	EXPECT_EQ(1, 1);
}

TEST(calc, calcGop) {
	EXPECT_EQ(1, 1);
}

TEST(calc, calcZegop) {
	EXPECT_EQ(1, 1);
}

TEST(calc, calcMinus) {
	EXPECT_EQ(1, 1);
}

TEST(calc, calcDivide) {
	Calc calc;

	EXPECT_EQ(calc.getDivide(10, 5), 2);
	EXPECT_EQ(calc.getDivide(5, 1), 5);
	EXPECT_EQ(calc.getDivide(5, 2), 2);
	EXPECT_EQ(calc.getDivide(5, 3), 1);
	EXPECT_EQ(calc.getDivide(5, 4), 1);
	EXPECT_THROW(calc.getDivide(2,0), std::invalid_argument);
}

TEST(calc, calcSumSum) {
	EXPECT_EQ(1, 1);
}