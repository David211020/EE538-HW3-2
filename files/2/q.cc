#include "q.h"

#include <climits>
#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <bits/stdc++.h>

// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc
bool CPPLib::CheckValidExpression(const std::string& input){
    std::stack<char> s;
    int i;
    int len = input.length();
    for(i=0; i<len; ++i){
        if(input[i]=='{' || input[i]=='[' || input[i]=='('){
            s.push(input[i]);
        }
        else if(input[i]=='}'){
            if(s.top()=='{'){
                s.pop();
            }
            else{
                return false;
            }
        }
        else if(input[i]==']'){
            if(s.top()=='['){
                s.pop();
            }
            else{
                return false;
            }
        }
        else if(input[i]==')'){
            if(s.top()=='('){
                s.pop();
            }
            else{
                return false;
            }
        }
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}

bool CPPLib::IsPalindrome(const std::string& input){
    int begin=0, end=input.length()-1;
    int i;
    int len=input.length()/2;
    for(i=0; i<len; i++){
        if(input[begin]==input[end]){
            ++begin;
            --end;
        }
        else{
            return false;
        }
    }
    return true;
}

int CPPLib::OddChar(const std::string& input){
    int res=0;
    int i,len=input.length();
    for(i=0;i<len;++i){
        res = res ^ input[i];
    }
    return res;
}