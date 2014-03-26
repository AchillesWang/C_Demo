//
//  main.c
//  2
//
//  Created by 潇翔 汪 on 14-3-26.
//  Copyright (c) 2014年 潇翔 汪. All rights reserved.
//

#include <stdio.h>
//算1块，5块，10快组成100块钱的不同方法；
int main()
{
    int i,j,k;
    int total;
    for (i=0;i<=100 ;i++ ) {
        for (j=0; j<=20; j++) {
            for (k=0; k<=10; k++) {
                if (i+j*5+k*10==100) {
                    printf("%d %d %d \n",i,j,k);
                    total++;
                }
            }
        }
    }
    printf("%d\n",total);
}

