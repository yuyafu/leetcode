//
//  convert.cpp
//  hello
//
//  Created by 静静 on 2/4/17.
//  Copyright © 2017年 jing. All rights reserved.
//

#include <stdio.h>
#include <string>
using namespace std;

string convert(string str, int nrows) {
    if (nrows ==1 ) return str;
    //意思就是一个一维数组，然后在每一行进行过追加即可

    //string *strArr = new string[nrows];
    //考虑使用智能指针,删除交给智能
    unique_ptr<string[]> strArr(new string[nrows]);
    int row = 0, step=1;
    for (int i=0; i != str.size(); ++i) {
        
        strArr[row].push_back(str[i]);
        if (row == 0) {
            step = 1;
        } else if (row == nrows-1) {
            step = -1;
        }
        row += step;
    }
    str.clear();
    for (int j=0; j<nrows; ++j) {
        str.append(strArr[j]);
    }
    return str;
}