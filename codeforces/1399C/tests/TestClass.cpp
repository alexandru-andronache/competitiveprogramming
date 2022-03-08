#include "TestClass.h"

TEST_F(TestClass, solveTest1)
{
    std::vector<long long> a{3, 5, 6};
    ASSERT_EQ(solve({1, 2, 3, 4, 5}), 2);
}

TEST_F(TestClass, solveTest2)
{
    ASSERT_EQ(solve({6, 6, 6, 6, 6, 6, 8, 8}), 3);
}

TEST_F(TestClass, solveTest3)
{
    ASSERT_EQ(solve({1, 2, 2, 1, 2, 1, 1, 2}), 4);
}

TEST_F(TestClass, solveTest4)
{
    ASSERT_EQ(solve({1, 3, 3}), 1);
}

TEST_F(TestClass, solveTest5)
{
    ASSERT_EQ(solve({1, 1, 3, 4, 2, 2}), 2);
}