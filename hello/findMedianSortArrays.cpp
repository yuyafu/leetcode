//
//  findMedianSortArrays.cpp
//  hello
//
//  Created by 静静 on 1/4/17.
//  Copyright © 2017年 jing. All rights reserved.
//

#include <stdio.h>
#include "leetcode.h"

double findMedianSortArrays(vector<int> &num1, vector<int> &num2) {
    //需要n>m,即i与m对应，j需要与n对应,所以
    auto len1 = num1.size(), len2 = num2.size();
    vector<int> a = num1 , b = num2;
    auto m = len1,n=len2;
    if (len1 > len2) {
        a = num2;
        m = len2;
        b = num1;
        n= len1;
    }
    auto half_index = (m + n + 1)/2, imax = m;;
    vector<int>::size_type imin = 0;
    
    while (imin <= imax) {
        auto i = (imin + imax)/2;
        auto j = half_index - i;
        if ( i>0 && a[i-1] > b[j]) {
            imax = i-1;
        } else if(i<m && a[i]<b[j-1]){
            imin = i+1;
        }else {
            //针对边界条件中断
            int max_left = 0;
            if (i == 0) {
                max_left = b[j-1];
            }else if (j==0) {
                max_left = a[i-1];
            } else {
                max_left = max(a[i-1], b[j-1]);
            }
            if ((m+n)%2) {
                return max_left;
            }
            
            int min_right = 0;
            if (i==m) {
                min_right = b[j];
            }else if (j==n) {
                min_right = a[i];
            } else {
                min_right = min(a[i], b[j]);
            }
        
            return double(min_right + max_left)/2;
        }
    }
    return 0;
}