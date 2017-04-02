//
//  reInteger.cpp
//  hello
//
//  Created by 静静 on 2/4/17.
//  Copyright © 2017年 jing. All rights reserved.
//

#include <stdio.h>
#include <limits.h>

int reInteger(int num) {
    //为了方式result超出范围需要使用long
    long res = 0;
    while (num) {
        res = res * 10 + num%10;
        num /=10;
    }
    return (res < INT_MIN || res > INT_MAX) ? 0 : (int)res;
}