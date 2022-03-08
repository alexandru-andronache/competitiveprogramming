#include "TestClass.h"

TEST_F(TestClass, solveTest1)
{
    ASSERT_THAT(solve(5, 20, 50), testing::ElementsAre(50, 40, 30, 20, 10));
}

TEST_F(TestClass, solveTest2)
{
    ASSERT_THAT(solve(2, 1, 49), testing::UnorderedElementsAreArray({1, 49}));
}

TEST_F(TestClass, solveTest3)
{
    ASSERT_THAT(solve(6, 20, 50), testing::ElementsAre(50, 44, 38, 32, 26, 20));
}

TEST_F(TestClass, solveTest4)
{
    ASSERT_THAT(solve(5, 3, 8), testing::ElementsAre(8, 3, 13, 18, 23));
}

TEST_F(TestClass, solveTest5)
{
    ASSERT_THAT(solve(9, 13, 22), testing::UnorderedElementsAreArray({1, 10, 13, 4, 19, 22, 25, 16, 7}));
}