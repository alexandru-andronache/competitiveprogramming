#include "TestClass.h"

TEST_F(TestClass, solveTest1)
{
    ASSERT_EQ(solve(4, 0), 0);
}

TEST_F(TestClass, solveTest2)
{
    ASSERT_EQ(solve(5, 8), 3);
}
TEST_F(TestClass, solveTest3)
{
    ASSERT_EQ(solve(0, 1000000), 1000000);
}