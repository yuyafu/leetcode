//
//  isPalindInt.cpp
//  hello
//
//  Created by 静静 on 2/4/17.
//  Copyright © 2017年 jing. All rights reserved.
//

#include <stdio.h>

bool isPalindInt(int x) {
    //边界条件
    if(x<0 || (x!=0 && x%10 == 0)) return false;
    
    int revInt = 0;
    //很好的判断条件
    while (x > revInt) {
        revInt = revInt*10 + x%10;
        x/=x;
    }
    return (x==revInt) || (x==revInt/10);
}
