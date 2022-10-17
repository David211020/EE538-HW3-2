#include "q.h"

#include <climits>
#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>

// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc
int BinaryTree::GetParentIndex(int i){
    if(i==0){
        return -1;
    }
    int len=v_.size();
    if(i>=len){
        return -1;
    }
    return (i-1)/2;
}

int BinaryTree::GetLeftIndex(int i){
    return i*2+1;
}

int BinaryTree::GetRightIndex(int i){
    return i*2+2;
}

int BinaryTree::FindMin(int i){
    int len=v_.size();
    if(i>=len){
        return INT_MAX;
    }
    return std::min(v_[i],std::min(FindMin(i*2+1),FindMin(i*2+2)));
}

int BinaryTree::FindMax(int i){
    int len=v_.size();
    if(i>=len){
        return INT_MIN;
    }
    return std::max(v_[i],std::max(FindMax(i*2+1),FindMax(i*2+2)));
}

bool BinaryTree::IsLeaf(int i){
    int len=v_.size();
    if(i>=len){
        return false;
    }
    if(i*2+1>=len){
        return true;
    }
    return false;
}

std::vector<int> BinaryTree::PreOrder(int i){
    int len=v_.size();
    std::vector<int> res,l,r;
    if(i>=len){
        return res;
    }
    res.push_back(v_[i]);
    l=PreOrder(i*2+1);
    res.insert(res.end(),l.begin(),l.end());
    r=PreOrder(i*2+2);
    res.insert(res.end(),r.begin(),r.end());
    return res;
}