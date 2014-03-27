//
//  main.c
//  5
//
//  Created by 潇翔 汪 on 14-3-26.
//  Copyright (c) 2014年 潇翔 汪. All rights reserved.
//



#include "stdio.h"
    int main(){
        int i,j;
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
                if((i+j)%2==0)
                    printf("%c%c",219,219);
                else
                    printf(" ");
            printf("\n");
        }
    }


