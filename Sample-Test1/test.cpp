#include "gtest/gtest.h"
#include "../teamwork/Calc.cpp"

TEST(calc, calcSum) {
	EXPECT_EQ(1, 1);
}

TEST(calc, calcGop) {
	EXPECT_EQ(1, 1);
}

TEST(calc, calcZegop) {
	Calc calc;
	EXPECT_EQ(4, calc.getZegop(2));
	EXPECT_EQ(25, calc.getZegop(5));
	EXPECT_EQ(100, calc.getZegop(10));
}

TEST(calc, calcMinus) {
	EXPECT_EQ(1, 1);
}

TEST(calc, calcDivide) {
	EXPECT_EQ(1, 1);
}

TEST(calc, calcSumSum) {
	EXPECT_EQ(1, 1);
}