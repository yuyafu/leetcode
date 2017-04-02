//
//  myAtoi.cpp
//  hello
//
//  Created by 静静 on 2/4/17.
//  Copyright © 2017年 jing. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <limits.h>
using namespace std;

int myAtoi(string str) {
    long res=0;
    auto index = str.find_first_not_of(" ");//去掉首的空格；
    int indicator = 1;
    while (index < str.size()) {
        //防止里面放置＋－，所以在这里
        if (str[index]== '-' || str[index] == '+') {
            indicator = str[index++] == '-' ? -1 : 1;
        }

        if (str[index] >= '0' && str[index] <= '9') {
            res = res*10 + str[index]-'0';
            //对每一次的结果进行判断
            if (res*indicator < INT_MIN) return INT_MIN;
            if (res*indicator > INT_MAX) return INT_MAX;
        }
        ++index;
    }
    return (int)res*indicator;
}