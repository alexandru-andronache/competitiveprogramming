#include "TestClass.h"

TEST_F(TestClass, solveTest1)
{
    std::vector<long long> v {4, 6, 11, 11, 15, 18, 20};
    auto sol = solve(v);
    ASSERT_EQ(sol.has_value(), true);
    auto [x, y, z] = sol.value();
    ASSERT_EQ(x, 1);
    ASSERT_EQ(y, 2);
    ASSERT_EQ(z, 3);
}

TEST_F(TestClass, solveTest2)
{
    std::vector<long long> v {10, 10, 10, 11};
    auto sol = solve(v);
    ASSERT_EQ(sol.has_value(), false);
}
TEST_F(TestClass, solveTest3)
{
    std::vector<long long> v {1, 1, 1000000};
    auto sol = solve(v);
    ASSERT_EQ(sol.has_value(), true);
    auto [x, y, z] = sol.value();
    ASSERT_EQ(x, 1);
    ASSERT_EQ(y, 2);
    ASSERT_EQ(z, 3);
}
//
//TEST_F(TestClass, solveTest4)
//{
//    ASSERT_EQ(solve("101010101"), 3);
//}
//
//TEST_F(TestClass, solveTest5)
//{
//    ASSERT_EQ(solve("011011110111"), 6);
//}