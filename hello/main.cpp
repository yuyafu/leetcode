//
//  main.cpp
//  hello
//
//  Created by 静静 on 30/3/17.
//  Copyright © 2017年 jing. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include "absParam.hpp"
#include "stringOwn.h"
#include "leetcode.h"

using namespace:: std;

int main(int argc, const char * argv[]) {
    
    //决定还是使用printf好用一些。
    vector<int> num1 = {1,2}, num2 = {3, 4};
    //    vector<int> indices = twoSum(num, 60);
    //    cout << "twonum\n" << indices[0] << "\n" << indices[1] << "\n"<< endl;
    //
    //    ListNode *l1 = new ListNode(0),
    //    *header = l1;
    //
    //    for (int i = 2; i<6; ++i) {
    //        header->next = new ListNode(i);
    //        header = header->next;
    //    }
    //    ListNode *addNums = addTwoNums(l1, l1);
    //    ListNode *pre = addNums->next;
    //    while (pre != nullptr) {
    //        printf("%d", pre->val);
    //        pre = pre->next;
    //    }
    
    //    int len = lengthOfLongestSubstr("abcabcghk");
    //    printf("%d", len);
    
    //    double re = findMedianSortArrays(num1, num2);
    //    printf("nnnn%f", re);
    //
    //    string palinerome = longestPalinerome("abcddcba");
    //     printf("nnnn%s\n", palinerome.c_str());
    //
//    string zigbig = convert("hello", 3);
//    printf("nnnn%s\n", zigbig.c_str());
    
//    int res = reInteger(123);
//    printf("nnnn%d\n", res);
    
    int res = myAtoi(" cc -123");
    printf("nnnn%d\n", res);
    return 0;
}
