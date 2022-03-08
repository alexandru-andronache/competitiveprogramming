#include "TestClass.h"

TEST_F(TestClass, solveTest1)
{
    ASSERT_EQ(solve(3, "120"), 3);
}

TEST_F(TestClass, solveTest2)
{
    ASSERT_EQ(solve(5, "11011"), 6);
}

TEST_F(TestClass, solveTest3)
{
    ASSERT_EQ(solve(6, "600005"), 1);
}

TEST_F(TestClass, solveTest4)
{
    ASSERT_EQ(solve(26, "11140000000090000000002111"), 37);
}