//
//  stringOwn.cpp
//  hello
//
//  Created by 静静 on 31/3/17.
//  Copyright © 2017年 jing. All rights reserved.
//

#include <assert.h>
#include "stringOwn.h"

int strLengh(const char *str) {
    assert(str != nullptr);
    int len = 0;
    while (*str++) {
        ++len;
    }
    return len;
}

char * strCopy(char *desStr, const char *srcStr){
    assert(desStr !=nullptr && srcStr !=nullptr);
    char *tmp = desStr;
    while (*srcStr){
        *desStr++ = *srcStr++;
    };
    return tmp;
}
int strCmp(const char *str1, const char *str2){
    assert(str1 !=nullptr && str2 !=nullptr);
    int res = 0;
    while (!(res = (unsigned char) *str1 - (unsigned char) *str2) && str1) {
        ++str1;
        ++str2;
    }
    if(res < 0) {
        res= -1;
    }
    if(res > 0) {
        res = 1;
    }
    return res;
}
char * strCat(char *desStr, const char *srcStr){
    assert(desStr != nullptr && srcStr !=nullptr);
    char *cat = desStr;
    while (*desStr){
        desStr++;
    } ;
    while (*srcStr){
        *desStr++ = *srcStr++;
    };
    return cat;
}