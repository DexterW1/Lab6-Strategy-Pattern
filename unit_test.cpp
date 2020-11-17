#include "gtest/gtest.h"
#include "base.hpp"
#include "div.h"
#include "pow.h"
#include "add.h"
#include "op.hpp"
#include "sub.h"
#include "rand.h"
#include "mult.h"

#include "op_test.hpp"
Base* zero = new Op(0);
Base* ten = new Op(10);
Base* two = new Op(2);
Base* three = new Op(3);
Base* four = new Op(4);
Base* five = new Op(5);

TEST(divTest, divideby0) {
	Base* div = new Div(ten, zero);
	EXPECT_EQ(div->evaluate(), 0);

}

TEST(divTest, divideby2) {
        Base* div = new Div(ten, two);
        EXPECT_EQ(div->evaluate(), 5);

}

TEST(divTest, dividestringify) {
        Base* div = new Div(ten, two);
        EXPECT_EQ(div->stringify(), "(10.000000)/(2.000000)");

}




TEST(multTest, multby0)
{
	Base* mult = new Mult(ten, zero);
	EXPECT_EQ(mult->evaluate(), 0);

}
TEST(multTest, multstringify)
{
	Base* mult = new Mult(ten, zero);
	EXPECT_EQ(mult->stringify(), "(10.000000)*(0.000000)");

}
TEST(addTest, add0)
{
	Base* add = new Add(ten, zero);
	EXPECT_EQ(add->evaluate(), 10);
}
TEST(addTest, addstringify)
{
        Base* add = new Add(ten, zero);
        EXPECT_EQ(add->stringify(), "(10.000000)+(0.000000)");
}
TEST(subTest, sub0)
{
	Base* sub = new Sub(ten, zero);
        EXPECT_EQ(sub->evaluate(), 10);	
}
TEST(subTest, substringify)
{
        Base* add = new Sub(ten, zero);
        EXPECT_EQ(add->stringify(), "(10.000000)-(0.000000)");
}
TEST(powTest, pow4squared)
{
	Base* pow = new Pow(four, two);
	EXPECT_EQ(pow->evaluate(), 16);

}
TEST(powTest, powstringify)
{
	Base* pow = new Pow(four, five);
	EXPECT_EQ(pow->stringify(), "(4.000000)^(5.000000)");
}
TEST(randTest, returnsnum)
{
	Base* rand = new Rand();
	bool test = false;
	if(rand->evaluate() >= 0 && rand->evaluate() <= 100)
	{
		test = true;
	}
	EXPECT_EQ(test, true);

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
