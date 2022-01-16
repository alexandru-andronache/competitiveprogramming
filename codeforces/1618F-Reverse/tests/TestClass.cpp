#include "TestClass.h"

TEST_F(TestClass, solveTest1)
{
    ASSERT_EQ(solve(3, 3), "YES");
}

TEST_F(TestClass, solveTest2)
{
    ASSERT_EQ(solve(7, 4), "NO");
}

TEST_F(TestClass, solveTest3)
{
    ASSERT_EQ(solve(2, 8), "NO");
}

TEST_F(TestClass, solveTest4)
{
    ASSERT_EQ(solve(34, 69), "YES");
}

TEST_F(TestClass, solveTest5)
{
    ASSERT_EQ(solve(8935891487501725, 71487131900013807), "YES");
}

TEST_F(TestClass, solveTest6)
{
    ASSERT_EQ(solve(8935891487501725, 71986286270688669), "YES");
}