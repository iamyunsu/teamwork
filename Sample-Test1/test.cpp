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
	Calc calc;
	EXPECT_EQ(-1, calc.getMinus(100, 101));
	EXPECT_EQ(-100, calc.getMinus(100, 200));
	EXPECT_EQ(50, calc.getMinus(50, 0));
}

TEST(calc, calcDivide) {
	EXPECT_EQ(1, 1);
}

TEST(calc, calcSumSum) {
	EXPECT_EQ(1, 1);
}