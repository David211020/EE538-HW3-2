#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(CPPLib, Test1){
    CPPLib cpptest;
    std::string input="(a+b+[c++{xxi}])[cy+]";
    bool expected = true;
    EXPECT_EQ(cpptest.CheckValidExpression(input), expected);
}

TEST(CPPLib, Test2){
    CPPLib cpptest;
    std::string input="";
    bool expected = true;
    EXPECT_EQ(cpptest.CheckValidExpression(input), expected);
}

TEST(CPPLib, Test3){
    CPPLib cpptest;
    std::string input="(7h+[5c)+7]";
    bool expected = false;
    EXPECT_EQ(cpptest.CheckValidExpression(input), expected);
}

TEST(CPPLib, Test4){
    CPPLib cpptest;
    std::string input="aca";
    bool expected = true;
    EXPECT_EQ(cpptest.IsPalindrome(input), expected);
}

TEST(CPPLib, Test5){
    CPPLib cpptest;
    std::string input="";
    bool expected = true;
    EXPECT_EQ(cpptest.IsPalindrome(input), expected);
}

TEST(CPPLib, Test6){
    CPPLib cpptest;
    std::string input="accbac";
    bool expected = false;
    EXPECT_EQ(cpptest.IsPalindrome(input), expected);
}

TEST(CPPLib, Test7){
    CPPLib cpptest;
    std::string input="accba";
    int expected = 'b';
    EXPECT_EQ(cpptest.OddChar(input), expected);
}

TEST(CPPLib, Test8){
    CPPLib cpptest;
    std::string input="a";
    int expected = 'a';
    EXPECT_EQ(cpptest.OddChar(input), expected);
}

TEST(CPPLib, Test9){
    CPPLib cpptest;
    std::string input="aabbccddeffgg";
    int expected = 'e';
    EXPECT_EQ(cpptest.OddChar(input), expected);
}