#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(CPPLib, Test1){
    Queue q;
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    Queue q2=q;
    std::vector<int> expected = {1,2,3};
    EXPECT_EQ(q2.GetData(), expected);
}

TEST(CPPLib, Test2){
    Queue q;
    q.Enqueue(1);
    q.Enqueue(3);
    q.Enqueue(5);
    Queue q2;
    Queue q3;
    q3=q2=q;
    std::vector<int> expected = {1,3,5};
    EXPECT_EQ(q3.GetData(), expected);
}

TEST(CPPLib, Test3){
    Queue q;
    q.Enqueue(1);
    q.Enqueue(3);
    q.Enqueue(5);
    Queue q2;
    q2.Enqueue(2);
    q2.Enqueue(4);
    q2.Enqueue(6);
    Queue q3;
    q3=q2+q;
    std::vector<int> expected = {1,3,5,2,4,6};
    EXPECT_EQ(q3.GetData(), expected);
}

TEST(CPPLib, Test4){
    Queue q;
    bool expected = false;
    EXPECT_EQ(q.Dequeue(), expected);
}

TEST(CPPLib, Test5){
    Queue q;
    q.Enqueue(1);
    q.Enqueue(3);
    q.Enqueue(5);
    q.Dequeue();
    std::vector<int> expected = {3,5};
    EXPECT_EQ(q.GetData(), expected);
}

TEST(CPPLib, Test6){
    Queue q;
    q.Enqueue(1);
    q.Enqueue(3);
    q.Enqueue(5);
    bool expected = false;
    EXPECT_EQ(q.IsEmpty(), expected);
}

TEST(CPPLib, Test7){
    Queue q;
    bool expected = true;
    EXPECT_EQ(q.IsEmpty(), expected);
}

TEST(CPPLib, Test8){
    Queue q;
    int expected = -1;
    EXPECT_EQ(q.Front(), expected);
}

TEST(CPPLib, Test9){
    Queue q;
    q.Enqueue(1);
    q.Enqueue(3);
    q.Enqueue(5);
    int expected = 1;
    EXPECT_EQ(q.Front(), expected);
}