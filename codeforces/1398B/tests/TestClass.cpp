#include "TestClass.h"

TEST_F(TestClass, solveTest1)
{
    ASSERT_EQ(solve("01111001"), 4);
}

TEST_F(TestClass, solveTest2)
{
    ASSERT_EQ(solve("0000"), 0);
}

TEST_F(TestClass, solveTest3)
{
    ASSERT_EQ(solve("111111"), 6);
}

TEST_F(TestClass, solveTest4)
{
    ASSERT_EQ(solve("101010101"), 3);
}

TEST_F(TestClass, solveTest5)
{
    ASSERT_EQ(solve("011011110111"), 6);
}