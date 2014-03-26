//
//  main.c
//  4
//
//  Created by 潇翔 汪 on 14-3-26.
//  Copyright (c) 2014年 潇翔 汪. All rights reserved.
//

//输入年，月，日，判断今天是第几天。
#include <stdio.h>


int main()
{
    int year,month,day,dayth=0;
    printf("请输入年份:\n");
    scanf("%d\n",&year);
    printf("请输入月份:\n");
    scanf("%d\n",&month);
    printf("请输入今天几号:\n");
    scanf("%d\n",&day);
    
    int i;
    for (i=0; i<month; i++) {
        switch (i) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 11:dayth +=31;
                
                break;
                
            case 4:
            case 6:
            case 9:
            case 12:dayth +=30;
                
                break;
                
            case 2:
                if (year%4==0&&year%100!=0||year%400==0) {
                    day+=29;
                    break;
                }else{
                    day+=28;
                    break;
                }
        }
    }
    dayth+=day;
    printf("今天是今年的第%d天\n",dayth);
    
}
