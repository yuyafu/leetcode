//
//  lengthOfLongestSubstr.cpp
//  hello
//
//  Created by 静静 on 1/4/17.
//  Copyright © 2017年 jing. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
int lengthOfLongestSubstr(string str) {
    
    vector<int> strIndex(256, -1);
    int maxLen = 0;
    int lastRepeatPos = -1;
    for (int i=0; i != str.size(); ++i) {
        if (strIndex[str[i]] != -1 && lastRepeatPos < strIndex[str[i]]) {
            lastRepeatPos = strIndex[str[i]];
        }
        int space = i - lastRepeatPos;
        maxLen = maxLen < space ? space : maxLen;
        strIndex[str[i]] = i;
    }
    return maxLen;
}