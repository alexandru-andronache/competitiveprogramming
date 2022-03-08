#include "TestClass.h"

TEST_F(TestClass, solveTest1)
{
    ASSERT_EQ(solve({8}), "YES");
}

TEST_F(TestClass, solveTest2)
{
    ASSERT_EQ(solve({4, 3, 6, 6, 2, 9}), "YES");
}

TEST_F(TestClass, solveTest3)
{
    ASSERT_EQ(solve({4, 5, 6, 7}), "YES");
}

TEST_F(TestClass, solveTest4)
{
    ASSERT_EQ(solve({7, 5, 2, 2, 4}), "NO");
}

TEST_F(TestClass, solveTest5)
{
    ASSERT_EQ(solve({781, 503}), "NO");
}

TEST_F(TestClass, solveTest6)
{
    ASSERT_EQ(solve({655, 1181, 1}), "YES");
}

TEST_F(TestClass, solveTest7)
{
    ASSERT_EQ(solve({7, 2, 4, 6}), "NO");
}

TEST_F(TestClass, solveTest8)
{
    ASSERT_EQ(solve({8, 7, 2, 16, 18}), "YES");
}

TEST_F(TestClass, solveTest9)
{
    ASSERT_EQ(solve({223, 557, 112, 575}), "NO");
}
