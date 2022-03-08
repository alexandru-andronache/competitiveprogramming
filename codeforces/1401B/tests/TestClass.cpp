#include "TestClass.h"

TEST_F(TestClass, solveTest1)
{
    ASSERT_EQ(solve(2, 3, 2, 3, 3, 1), 4);
}

TEST_F(TestClass, solveTest2)
{
    ASSERT_EQ(solve(4, 0, 1, 2, 3, 0), 2);
}
TEST_F(TestClass, solveTest3)
{
    ASSERT_EQ(solve(0, 0, 1, 0, 0, 1), 0);
}