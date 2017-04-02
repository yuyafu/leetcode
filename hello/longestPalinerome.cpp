//
//  longestPalinerome.cpp
//  hello
//
//  Created by 静静 on 2/4/17.
//  Copyright © 2017年 jing. All rights reserved.
//

#include "leetcode.h"
#include <string>


string longestPalinerome(const string &str) {
    //首先是边界值的考虑
    if (str.empty()) return "";
    auto len = str.size();
    if (len == 1) {
        return str;
    }
    int minStart = 0, maxLen = 0;
    for (int i =0; i != len; ++i) {
        //针对最后剩下的小于时，就可以不用再比较了,聪明
        if(len - i <= maxLen/2) break;
        int j=i , k=i;
        while (k < len-1 && str[k] == str[k+1]) {
            ++k;
        }
        while (j>0 && k<len-1 && str[k+1] == str[j-1]) {
            ++k;
            --j;
        }
        if (maxLen < k-j+1) {
            minStart = j;
            maxLen = k-j+1;
        }
    }
    return str.substr(minStart, maxLen);
}