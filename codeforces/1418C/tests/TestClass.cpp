#include "TestClass.h"

TEST_F(TestClass, solveTest1)
{
    ASSERT_THAT(solve(8, {1, 0, 1, 1, 0, 1, 1, 1}), 2);
}

TEST_F(TestClass, solveTest2)
{
    ASSERT_THAT(solve(5, {1, 1, 1, 1, 0}), 2);
}

TEST_F(TestClass, solveTest3)
{
    ASSERT_THAT(solve(7, {1, 1, 1, 1, 0, 0, 1}), 2);
}

TEST_F(TestClass, solveTest4)
{
    ASSERT_THAT(solve(6, {1, 1, 1, 1, 1, 1}), 2);
}

TEST_F(TestClass, solveTest5)
{
    ASSERT_THAT(solve(1, {1}), 1);
}

TEST_F(TestClass, solveTest6)
{
    ASSERT_THAT(solve(1, {0}), 0);
}