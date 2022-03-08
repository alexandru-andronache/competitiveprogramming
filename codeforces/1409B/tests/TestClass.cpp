#include "TestClass.h"

TEST_F(TestClass, solveTest1)
{
    ASSERT_EQ(solve(10, 10, 8, 5, 3), 70);
}

TEST_F(TestClass, solveTest2)
{
    ASSERT_EQ(solve(12, 8, 8, 7, 2), 77);
}

TEST_F(TestClass, solveTest3)
{
    ASSERT_EQ(solve(12343, 43, 4543, 39, 123212), 177177);
}

TEST_F(TestClass, solveTest4)
{
    ASSERT_EQ(solve(1000000000, 1000000000, 1, 1, 1), 999999999000000000);
}

TEST_F(TestClass, solveTest5)
{
    ASSERT_EQ(solve(1000000000, 1000000000, 1, 1, 1000000000), 999999999);
}

TEST_F(TestClass, solveTest6)
{
    ASSERT_EQ(solve(10, 11, 2, 1, 5), 55);
}

TEST_F(TestClass, solveTest7)
{
    ASSERT_EQ(solve(10, 11, 9, 1,10), 10);
}