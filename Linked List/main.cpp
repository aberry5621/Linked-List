//
//  main.cpp
//  Linked List
//
//  Created by gb_man on 3/22/17.
//  Copyright © 2017 alex. All rights reserved.
//
// TODO: create a simple linked list with a few items in it

#include <iostream>
#include <string>

struct ListNode {
    
    int dataPoint = NULL;
    std::string name = "\"default\"";
    ListNode * link = nullptr;
    
};

void printTheList(ListNode);

int main() {
    
    // set up initial pointers
    ListNode * headPtr = nullptr;
    ListNode * tailPtr = nullptr;
    ListNode * tmpPtr;
    
    // set head pointer to new Node, ok
    headPtr = new ListNode;
    headPtr->name = "Head Pointer";
    // set tail pointer to head pointer
    tmpPtr = headPtr;
    
    for (int i = 0; i < 10; i++) {
        if (i == 0) {
            //first node
            headPtr->name = "HP 0";
            headPtr->dataPoint = i;
            headPtr->link = nullptr;
        } else if (i > 0 || i < 10) {
            tmpPtr->link = new ListNode;
            tmpPtr->name = "tmpPtr";
            tmpPtr = tmpPtr->link;
            tmpPtr->dataPoint=i;
            tmpPtr->link = nullptr;
        } else {
            tailPtr->link = new ListNode;
            tailPtr->name = "tailPtr";
            tailPtr = tailPtr->link;
            tailPtr->dataPoint=i;
            tailPtr->link = nullptr;
        }
    }
    
    // insert some nodes
    
    
    
    printTheList(*headPtr);
    
    return 0;
}

void printTheList(ListNode inputNode) {
    
    std::cout << "printList invoked and passed \"inputNode\" \n";
    std::cout <<
    "inputNode info: " <<
    "\nName: " << inputNode.name <<
    "\nData Point: " << inputNode.dataPoint <<
    " " << std::endl;
    
    int ListNodeCount = 0;
    
    ListNode * readPtr = nullptr;
    // point read pointer at input node
    readPtr = &inputNode;
    
    std::cout << "Reading ListNodes:\n";
    while (readPtr != nullptr) {
        std::cout <<
        "#" << ListNodeCount <<
        " Name: " << readPtr->name <<
        " Data Point: " << readPtr->dataPoint <<
        " " << std::endl;
        readPtr = readPtr->link;
        ListNodeCount++;
    }
    
}











