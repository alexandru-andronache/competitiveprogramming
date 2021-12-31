#include "TestClass.h"

TEST_F(TestClass, solveTest1)
{
    std::vector<unsigned long long> v {1, 2, 3, 4, 5};
    ASSERT_EQ(solve(v), 2);
}

TEST_F(TestClass, solveTest2)
{
    std::vector<unsigned long long> v {10, 5, 15};
    ASSERT_EQ(solve(v), 0);
}

TEST_F(TestClass, solveTest3)
{
    std::vector<unsigned long long> v {100, 10, 500};
    ASSERT_EQ(solve(v), 100);
}

TEST_F(TestClass, solveTest4)
{
    std::vector<unsigned long long> v {9, 8, 2, 6, 6, 2, 8, 6, 5, 4};
    ASSERT_EQ(solve(v), 0);
}

TEST_F(TestClass, solveTest5)
{
    std::vector<unsigned long long> v {1, 3};
    ASSERT_EQ(solve(v), 3);
}