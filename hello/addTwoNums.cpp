//
//  addTwoNums.cpp
//  hello
//
//  Created by 静静 on 1/4/17.
//  Copyright © 2017年 jing. All rights reserved.
//

#include <stdio.h>
#include "leetcode.h"

ListNode * addTwoNums(const ListNode *l1, const ListNode *l2) {
    ListNode *result = new ListNode(0), *header = result;
    int curSum = 0;
    while (l1 !=nullptr || l2 !=nullptr) {
        curSum =curSum/10;
        if(l1 != nullptr) {
            curSum += l1->val;
            l1 = l1->next;
        }
        if (l2 != nullptr) {
            curSum += l2->val;
            l2 = l2->next;
        }
        header->next = new ListNode(curSum%10);
        header = header->next;
    }
    if (curSum > 0) {
        header->next = new ListNode(curSum/10);
        header = header->next;
    }
    return result;
}