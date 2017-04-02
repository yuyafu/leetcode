//
//  leetcode.h
//  hello
//
//  Created by 静静 on 31/3/17.
//  Copyright © 2017年 jing. All rights reserved.
//
#include <vector>
using namespace std;
#ifndef leetcode_h
#define leetcode_h

extern vector<int> twoSum(vector<int> &nums, const int target);

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr){};//真重要的思想
};
extern ListNode * addTwoNums(const ListNode *l1, const ListNode *l2);

extern int lengthOfLongestSubstr(string str);

extern double findMedianSortArrays(vector<int> &num1, vector<int> &num2);

extern string longestPalinerome(const string &str);

extern string convert(string str, int nrows);

extern int reInteger(int num);
extern int myAtoi(string str);
#endif /* leetcode_h */
