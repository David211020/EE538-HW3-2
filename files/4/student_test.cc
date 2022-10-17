#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(CPPLib, Test1){
    std::vector<int> input={1,2,3,4};
    SinglyLinkedList list(input);
    SinglyLinkedList list2(list);
    std::vector<int> expected = {1,2,3,4};
    EXPECT_EQ(list2.convert_to_vector(), expected);
}

TEST(CPPLib, Test2){
    std::vector<int> input={1,2,3,4};
    SinglyLinkedList list(input);
    bool expected = false;
    EXPECT_EQ(list.empty(), expected);
}

TEST(CPPLib, Test3){
    SinglyLinkedList list;
    bool expected = true;
    EXPECT_EQ(list.empty(), expected);
}

TEST(CPPLib, Test4){
    SinglyLinkedList list;
    int expected = 0;
    EXPECT_EQ(list.size(), expected);
}

TEST(CPPLib, Test5){
    std::vector<int> input={1,2,3,4};
    SinglyLinkedList list(input);
    int expected = 4;
    EXPECT_EQ(list.size(), expected);
}

TEST(CPPLib, Test6){
    std::vector<int> input={1,2,3,4};
    SinglyLinkedList list(input);
    int expected = 1;
    EXPECT_EQ(list.head()->val, expected);
}

TEST(CPPLib, Test7){
    SinglyLinkedList list;
    ListNode *expected = nullptr;
    EXPECT_EQ(list.head(), expected);
}

TEST(CPPLib, Test8){
    std::vector<int> input={1,2,3,4};
    SinglyLinkedList list(input);
    list.push_back(5);
    list.push_back(6);
    list.pop_back();
    std::vector<int> expected = {1,2,3,4,5};
    EXPECT_EQ(list.convert_to_vector(), expected);
}

TEST(CPPLib, Test9){
    std::vector<int> input={1,2,3,4};
    SinglyLinkedList *list=new SinglyLinkedList(input);
    int expected = 4;
    EXPECT_EQ(list->back(), expected);
    delete list;
}

TEST(CPPLib, Test10){
    std::vector<int> input={1,2,3,4};
    SinglyLinkedList list(input);
    ListNode *p = list.GetBackPointer();
    int expected = 4;
    EXPECT_EQ(p->val, expected);
}

TEST(CPPLib, Test11){
    std::vector<int> input={1,2,3,4};
    SinglyLinkedList list(input);
    ListNode *p = list.GetIthPointer(5);
    ListNode *expected = nullptr;
    EXPECT_EQ(p, expected);
}

TEST(CPPLib, Test12){
    std::vector<int> input={1,2,3,4};
    SinglyLinkedList list(input);
    int expected = 2;
    EXPECT_EQ(list[1], expected);
}

TEST(CPPLib, Test13){
    std::vector<int> input={1,2,3,4};
    SinglyLinkedList list(input);
    int expected = -1;
    list.print();
    EXPECT_EQ(list[5], expected);
}

TEST(CPPLib, Test14){
    std::vector<int> input={1,2,3,4};
    SinglyLinkedList list(input);
    list.erase(2);
    std::vector<int> expected = {1,2,4};
    EXPECT_EQ(list.convert_to_vector(), expected);
}

TEST(CPPLib, Test15){
    std::vector<int> input={1,2,3,4,2,6,3,5};
    SinglyLinkedList list(input);
    list.remove_duplicates();
    std::vector<int> expected = {1,2,3,4,6,5};
    EXPECT_EQ(list.convert_to_vector(), expected);
}
