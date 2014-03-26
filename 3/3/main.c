//
//  main.c
//  3
//
//  Created by 潇翔 汪 on 14-3-26.
//  Copyright (c) 2014年 潇翔 汪. All rights reserved.
//


#include <stdio.h>
//一个数字+100是个完全平方数，加上268也是一个完全平方数字
#include <math.h>
int main()
{
    int i;
    for (i=0; i<10000; i++) {
        int x = sqrt(i+100);
        int y = sqrt(i+268);
        if ((x*x)==(i+100)&&(y*y)==(i+268) ){
            printf("%d\n",i);
        }
    }
}