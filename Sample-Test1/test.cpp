#include "gtest/gtest.h"
#include "../teamwork/Calc.cpp"

TEST(calc, calcSum) {
	Calc calc;
	EXPECT_EQ(4, calc.getSum(3, 1));
	EXPECT_EQ(4, calc.getSum(1, 3));
	EXPECT_EQ(7, calc.getSum(5, 2));
}

TEST(calc, calcGop) {
	Calc calc;
	EXPECT_EQ(calc.getGop(2,3), 6);
}

TEST(calc, calcZegop) {
	EXPECT_EQ(1, 1);
}

TEST(calc, calcMinus) {
	Calc calc;
	EXPECT_EQ(-1, calc.getMinus(100, 101));
	EXPECT_EQ(-100, calc.getMinus(100, 200));
	EXPECT_EQ(50, calc.getMinus(50, 0));
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