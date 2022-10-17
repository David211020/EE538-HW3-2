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
Queue::Queue(const Queue& rhs){
    v_.assign(rhs.v_.begin(),rhs.v_.end());
}

Queue& Queue::operator=(const Queue& rhs){
    v_.assign(rhs.v_.begin(),rhs.v_.end());
    return *this;
}

Queue Queue::operator+(const Queue& rhs){
    Queue res;
    res.v_.assign(rhs.v_.begin(),rhs.v_.end());
    res.v_.insert(res.v_.end(),v_.begin(),v_.end());
    return res;
}

bool Queue::Enqueue(int value){
    v_.push_back(value);
    return true;
}

bool Queue::Dequeue(){
    if(v_.empty()){
        return false;
    }
    std::vector<int>::iterator k = v_.begin();
    v_.erase(k);
    return true;
}

bool Queue::IsEmpty(){
    if(v_.empty()){
        return true;
    }
    return false;
}

int Queue::Front(){
    if(v_.empty()){
        return -1;
    }
    return v_.front();
}