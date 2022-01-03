#include "TestClass.h"

TEST_F(TestClass, solveTest1)
{
    ASSERT_EQ(solve(4), 2);
}

TEST_F(TestClass, solveTest2)
{
    ASSERT_EQ(solve(5), 3);
}

TEST_F(TestClass, solveTest3)
{
    ASSERT_EQ(solve(100), 66);
}

TEST_F(TestClass, solveTest4)
{
    ASSERT_EQ(solve(100000), 66666);
}

TEST_F(TestClass, solveTest5)
{
    ASSERT_EQ(solve(1000000000), 666666666);
}