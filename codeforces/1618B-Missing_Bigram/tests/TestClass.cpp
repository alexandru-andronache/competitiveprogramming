#include "TestClass.h"

TEST_F(TestClass, solveTest1)
{
    ASSERT_EQ(solve("ab bb ba aa ba"), "abbaaba");
}

TEST_F(TestClass, solveTest2)
{
    ASSERT_EQ(solve("ab ba aa ab ba"), "abaabaa");
}

TEST_F(TestClass, solveTest3)
{
    ASSERT_EQ(solve("aa"), "aaa");
}

TEST_F(TestClass, solveTest4)
{
    ASSERT_EQ(solve("bb ab bb"), "bbabb");
}