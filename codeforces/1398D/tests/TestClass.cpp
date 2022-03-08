#include "TestClass.h"

TEST_F(TestClass, solveTest1)
{
    std::vector<int> red{3};
    std::vector<int> blue{5};
    std::vector<int> green{4};
    solve(red, green, blue);
    ASSERT_EQ(solve(red, green, blue), 20);
}

TEST_F(TestClass, solveTest2)
{
    ASSERT_EQ(solve({9, 5}, {1}, {2, 8, 5}), 99);
}

TEST_F(TestClass, solveTest3)
{
    ASSERT_EQ(solve({11, 7, 20, 15, 19, 14, 2, 4, 13, 14}, {8}, {11}), 372);
}