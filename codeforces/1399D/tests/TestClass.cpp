#include "TestClass.h"

TEST_F(TestClass, solveTest1)
{
    auto sol = solve("0011");
    ASSERT_EQ(sol.second, 2);
    ASSERT_THAT(sol.first, ::testing::ElementsAre(1, 2, 2, 1));
}

TEST_F(TestClass, solveTest2)
{
    auto sol = solve("111111");
    ASSERT_EQ(sol.second, 6);
    ASSERT_THAT(sol.first, ::testing::ElementsAre(1, 2, 3, 4, 5, 6));
}

TEST_F(TestClass, solveTest3)
{
    auto sol = solve("10101");
    ASSERT_EQ(sol.second, 1);
    ASSERT_THAT(sol.first, ::testing::ElementsAre(1, 1, 1, 1, 1));
}

TEST_F(TestClass, solveTest4)
{
    auto sol = solve("01010000");
    ASSERT_EQ(sol.second, 4);
    ASSERT_THAT(sol.first, ::testing::ElementsAre(1, 1, 1, 1, 1, 2, 3, 4));
}