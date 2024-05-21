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
	EXPECT_EQ(1, 1);
}

TEST(calc, calcSumSum) {
	Calc calc;

	EXPECT_EQ(6, calc.getSumSum(1, 2, 3));
	EXPECT_EQ(-6, calc.getSumSum(-1, -2, -3));
	EXPECT_EQ(4, calc.getSumSum(-1, 2, 3));
	EXPECT_EQ(0, calc.getSumSum(1, 2, -3));
}