//
//  Header.h
//  leetcode_7
//
//  Created by 王青龙 on 5/31/16.
//  Copyright © 2016 王青龙. All rights reserved.
//

#ifndef Header_h
#define Header_h

class Solution{
public:
    int reverse(int x){
        long long res = 0;
        while (x) {
            res = res * 10 + x % 10;
            x /= 10;
        }
        return (x > INT_MAX || x < INT_MIN) ? 0 : res;
    }
};

#endif /* Header_h */
