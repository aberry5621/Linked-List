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
    std::string name = " ";
    ListNode * link = nullptr;
    
};

void printTheList(ListNode);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Linked List!\n";
    std::cout << "Build Linked List!\n";
    std::cout << "Read Linked List!\n";
    
    ListNode * headPtr = new ListNode;
    ListNode * tmpPtr = new ListNode;
    ListNode * tailPtr = new ListNode;
    
    
    // link the trhee nodes
    headPtr->link = tmpPtr;
    tmpPtr->link = tailPtr;
    tailPtr->link = nullptr;
    
    headPtr->dataPoint = 0;
    tmpPtr->dataPoint = 0;
    tailPtr->dataPoint = 0;
    
    headPtr->name = "head";
    tmpPtr->name = "temp";
    tailPtr->name = "tail";

    printTheList(* headPtr);
    
    
    return 0;
}

void printTheList(ListNode inputNode) {
    
    std::cout << "printList invoked\n";
    
    int ListNodeCount = 0;
    
    ListNode * readPtr = new ListNode;
    
    readPtr->link = &inputNode;
    
    std::cout << "Reading ListNode: ";
    while (readPtr != nullptr) {
        std::cout <<
        "#" << ListNodeCount <<
        " Name: " << readPtr->name <<
        " Value: " << readPtr->dataPoint <<
        " " << std::endl;
        readPtr = readPtr->link;
        ListNodeCount++;
    }
    
}











