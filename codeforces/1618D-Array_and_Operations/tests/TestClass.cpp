#include "TestClass.h"

TEST_F(TestClass, solveTest1)
{
    ASSERT_EQ(solve({1, 1, 1, 2, 1, 3, 1}, 3), 2);
}

TEST_F(TestClass, solveTest2)
{
    ASSERT_EQ(solve({5, 5, 5, 5, 5}, 1), 16);
}

TEST_F(TestClass, solveTest3)
{
    ASSERT_EQ(solve({1, 3, 3, 7}, 2), 0);
}

TEST_F(TestClass, solveTest4)
{
    ASSERT_EQ(solve({4, 2}, 0), 6);
}

TEST_F(TestClass, solveTest5)
{
    ASSERT_EQ(solve({1, 10, 10, 1, 10, 2, 7, 10, 3}, 2), 16);
}