//
//  count.cpp
//  hello
//
//  Created by 静静 on 3/4/17.
//  Copyright © 2017年 jing. All rights reserved.
//

#include <stdio.h>
typedef unsigned char BYTE;

int count(BYTE v) {
    int num=0;
    
    while (v) {
        v&=(v-1);
        ++num;
    }
    return num;
}

int aRevertB(BYTE a, BYTE b) {
    BYTE c= a ^ b;
    return count(c);
}