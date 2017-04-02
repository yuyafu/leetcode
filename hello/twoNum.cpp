//
//  twoNum.cpp
//  hello
//
//  Created by 静静 on 31/3/17.
//  Copyright © 2017年 jing. All rights reserved.
//

#include <vector>
#include <unordered_map>
#include "leetcode.h"
using namespace std;

vector<int> twoSum(vector<int> &nums, const int target) {
    
    vector<int> result(2,0);
    unordered_map<int, int> hash;
    for (int i = 0; i<nums.size(); ++i) {
        int numToFind = target-nums[i];
        if(hash.find(numToFind) != hash.end()){
            result[0] = hash[numToFind]+1;
            result[1] = i+1;
            return result;
        }
        hash[nums[i]] = i;
    }
    return result;
}

