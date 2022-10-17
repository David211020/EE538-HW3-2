#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(CPPLib, Test1){
    std::vector<int> input={1,3,6,5,9,8};
    BinaryTree BTR(input);
    int expected = 1;
    EXPECT_EQ(BTR.GetParentIndex(3), expected);
}

TEST(CPPLib, Test2){
    std::vector<int> input={1,3,6,5,9,8};
    BinaryTree BTR(input);
    int expected = -1;
    EXPECT_EQ(BTR.GetParentIndex(8), expected);
}

TEST(CPPLib, Test3){
    std::vector<int> input={1,3,6,5,9,8};
    BinaryTree BTR(input);
    int expected = 7;
    EXPECT_EQ(BTR.GetLeftIndex(3), expected);
}

TEST(CPPLib, Test4){
    std::vector<int> input={1,3,6,5,9,8};
    BinaryTree BTR(input);
    int expected = 8;
    EXPECT_EQ(BTR.GetRightIndex(3), expected);
}

TEST(CPPLib, Test5){
    std::vector<int> input={1,3,6,5,9,8};
    BinaryTree BTR(input);
    int expected = 6;
    EXPECT_EQ(BTR.FindMin(2), expected);
}

TEST(CPPLib, Test6){
    std::vector<int> input={1,3,6,5,9,8};
    BinaryTree BTR(input);
    int expected = 3;
    EXPECT_EQ(BTR.FindMin(1), expected);
}

TEST(CPPLib, Test7){
    std::vector<int> input={1,3,6,5,9,8};
    BinaryTree BTR(input);
    int expected = 9;
    EXPECT_EQ(BTR.FindMax(1), expected);
}

TEST(CPPLib, Test8){
    std::vector<int> input={1,3,6,5,9,8};
    BinaryTree BTR(input);
    bool expected = true;
    EXPECT_EQ(BTR.IsLeaf(4), expected);
}

TEST(CPPLib, Test9){
    std::vector<int> input={1,3,6,5,9,8};
    BinaryTree BTR(input);
    bool expected = false;
    EXPECT_EQ(BTR.IsLeaf(6), expected);
}

TEST(CPPLib, Test10){
    std::vector<int> input={1,3,6,5,9,8};
    BinaryTree BTR(input);
    std::vector<int> expected = {3,5,9};
    EXPECT_EQ(BTR.PreOrder(1), expected);
}