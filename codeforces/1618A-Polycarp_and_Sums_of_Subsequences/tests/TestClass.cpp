#include "TestClass.h"

TEST_F(TestClass, solveTest1)
{
    ASSERT_THAT(solve({1, 3, 4, 4, 5, 7, 8}), testing::UnorderedElementsAreArray({1, 4, 3}));
}

TEST_F(TestClass, solveTest2)
{
    ASSERT_THAT(solve({1, 2, 3, 4, 5, 6, 7}), testing::UnorderedElementsAreArray({4, 1, 2}));
}

TEST_F(TestClass, solveTest3)
{
    ASSERT_THAT(solve({300000000, 300000000, 300000000, 600000000, 600000000, 600000000, 900000000}), testing::UnorderedElementsAreArray({300000000, 300000000, 300000000}));
}

TEST_F(TestClass, solveTest4)
{
    ASSERT_THAT(solve({1, 1, 2, 999999998, 999999999, 999999999, 1000000000}), testing::UnorderedElementsAreArray({999999998, 1, 1}));
}

TEST_F(TestClass, solveTest5)
{
    ASSERT_THAT(solve({1, 2, 2, 3, 3, 4, 5}), testing::UnorderedElementsAreArray({1, 2, 2}));
}