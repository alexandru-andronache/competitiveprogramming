#include "TestClass.h"

TEST_F(TestClass, solveTest1)
{
    std::vector<long long> a{3, 5, 6};
    std::vector<long long> b{3, 2, 3};
    ASSERT_EQ(solve(a, b), 6);
}

TEST_F(TestClass, solveTest2)
{
    std::vector<long long> a{1, 2, 3, 4, 5};
    std::vector<long long> b{5, 4, 3, 2, 1};
    ASSERT_EQ(solve(a, b), 16);
}

TEST_F(TestClass, solveTest3)
{
    std::vector<long long> a{1, 1, 1};
    std::vector<long long> b{2, 2, 2};
    ASSERT_EQ(solve(a, b), 0);
}

TEST_F(TestClass, solveTest4)
{
    std::vector<long long> a{1, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    std::vector<long long> b{1, 1, 1, 1, 1, 1};
    ASSERT_EQ(solve(a, b), 4999999995);
}

TEST_F(TestClass, solveTest5)
{
    std::vector<long long> a{10, 12, 8};
    std::vector<long long> b{7, 5, 4};
    ASSERT_EQ(solve(a, b), 7);
}