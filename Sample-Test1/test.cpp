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
	Calc calc;
	EXPECT_EQ(4, calc.getZegop(2));
	EXPECT_EQ(25, calc.getZegop(5));
	EXPECT_EQ(100, calc.getZegop(10));
}

TEST(calc, calcMinus) {
	Calc calc;
	EXPECT_EQ(-1, calc.getMinus(100, 101));
	EXPECT_EQ(-100, calc.getMinus(100, 200));
	EXPECT_EQ(50, calc.getMinus(50, 0));
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
	Calc calc;

	EXPECT_EQ(6, calc.getSumSum(1, 2, 3));
	EXPECT_EQ(-6, calc.getSumSum(-1, -2, -3));
	EXPECT_EQ(4, calc.getSumSum(-1, 2, 3));
	EXPECT_EQ(0, calc.getSumSum(1, 2, -3));
}