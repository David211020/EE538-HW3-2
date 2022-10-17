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
SinglyLinkedList::SinglyLinkedList(const std::vector<int> &v){
    if(v.empty()){
        return;
    }
    int i;
    ListNode *p;
    size_=v.size();
    p=new ListNode(v[0]);
    head_=p;
    for(i=1; i<size_; ++i){
        p->next=new ListNode(v[i]);
        p=p->next;
    }
}

SinglyLinkedList::SinglyLinkedList(const SinglyLinkedList &rhs){
    if(rhs.size_==0){
        return;
    }
    size_=rhs.size_;
    ListNode *p, *p2;
    p2=rhs.head_;
    p=new ListNode(p2->val);
    head_=p;
    for(int i=1; i<size_; ++i){
        p2=p2->next;
        p->next=new ListNode(p2->val);
        p=p->next;
    }
}

SinglyLinkedList::~SinglyLinkedList(){
    if(size_==0){
        return;
    }
    // ListNode *p;
    // while(head_->next != nullptr){
    //     p=head_;
    //     head_=head_->next;
    //     delete [] p;
    // }
    delete [] head_;
    head_ = nullptr;
    size_=0;
}

bool SinglyLinkedList::empty(){
    if(size_==0){
        return true;
    }
    return false;
}

int SinglyLinkedList::size(){
    return size_;
}

ListNode *SinglyLinkedList::head(){
    return head_;
}

void SinglyLinkedList::push_back(int i){
    ListNode *p;
    p=head_;
    while(p->next != nullptr){
        p=p->next;
    }
    p->next = new ListNode(i);
    ++size_;
}

bool SinglyLinkedList::pop_back(){
    if(size_==0){
        return false;
    }
    ListNode *p;
    p=head_;
    for(int i=1; i<size_-1; ++i){
        p=p->next;
    }
    delete [] p->next;
    p->next=nullptr;
    size_=size_-1;
    return true;
}

int SinglyLinkedList::back(){
    if(size_==0){
        return -1;
    }
    ListNode *p;
    p=head_;
    while(p->next != nullptr){
        p=p->next;
    }
    return p->val;
}

ListNode *SinglyLinkedList::GetBackPointer(){
    ListNode *p;
    p=head_;
    while(p->next != nullptr){
        p=p->next;
    }
    return p;
}

ListNode *SinglyLinkedList::GetIthPointer(int i){
    if(size_<i+1){
        return nullptr;
    }
    ListNode *p;
    p=head_;
    for(int j=0; j<i; ++j){
        p=p->next;
    }
    return p;
}

int &SinglyLinkedList::operator[](int i){
    if(size_<i+1){
        return minusOne_;
    }
    ListNode *p;
    p=head_;
    for(int j=0; j<i; ++j){
        p=p->next;
    }
    return p->val;
}

void SinglyLinkedList::print(){
    ListNode *p;
    p=head_;
    while(p->next != nullptr){
        std::cout<<p->val<<std::endl;
        p=p->next;
    }
}

std::vector<int> SinglyLinkedList::convert_to_vector(){
    std::vector<int> res;
    ListNode *p;
    p=head_;
    while(p->next != nullptr){
        res.push_back(p->val);
        p=p->next;
    }
    res.push_back(p->val);
    return res;
}

ListNode *SinglyLinkedList::erase(int i){
    if(size_<i+1){
        return nullptr;
    }
    ListNode *p, *p2;
    p=head_;
    for(int j=0; j<i-1; ++j){
        p=p->next;
    }
    p2=p->next;
    p2=p2->next;
    delete p->next;
    p->next = p2;
    return p;
}

void SinglyLinkedList::remove_duplicates(){
    if(size_==0){
        return;
    }
    std::vector<int> items;
    ListNode *p, *p2;
    int i,len;
    p=head_;
    items.push_back(p->val);
    while(p->next != nullptr){
        len = items.size();
        for(i=0; i<len; ++i){
            if(p->next->val == items[i]){
                p2=p->next->next;
                delete p->next;
                p->next=p2;
                break;
            }
        }
        items.push_back(p->val);
        p = p->next;
    }
    size_=items.size();
}
