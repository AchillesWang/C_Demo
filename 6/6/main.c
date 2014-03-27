//
//  main.c
//  6
//
//  Created by 潇翔 汪 on 14-3-27.
//  Copyright (c) 2014年 潇翔 汪. All rights reserved.
//



#include "stdio.h"      
    int main()
    {
        int i,j,result;
        printf("\n");
        for (i=1;i<10;i++)
        {
            for(j=1;j<=i;j++)
            {
                result=i*j;
                printf("%d*%d=%-3d ",j,i,result); /*-3d表示左对齐，占3位*/
            }
            printf("\n"); /*每一行后换行*/
        }
    }



