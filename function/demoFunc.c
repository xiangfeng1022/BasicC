#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculateFunc.h"

/*函数参数:可以没有 也可以有*/
/*函数返回值: 可以没有 也可以有
     没有的情况需要写void
     如果有，返回你想返回的数据类型 int long short char float double
  
*/

/* 什么叫API：Application Programming Interface 应用程序编程接口 */

#if 0
/*函数的定义*/
//case1: 没有参数，没有返回值
void purchaseAppointThing()
{
    printf("purchase a phone\n");
}

//case2: 有参数，没有返回值
/*函数参数一定有数据类型*/
void myAddNum1(int num1, int num2)
{
    int sum = num1 + num2;
    printf("sum:%d\n",sum);
}

//case3: 有参数，有返回值
int myAddNum2(int num1, int num2)
{
    int sum = num1 + num2;
    printf("sum:%d\n",sum);
    return sum;
}
#endif

/* 枚举  它也是一种数据类型 4个字节*/
typedef enum STATUS_CODE
{
   ON_SUCCESS,
   ON_ERROR,
   ON_NULLPTR,
   ON_MALLOCFAIL,
}STATUS_CODE;

/* 取别名 */
/*
方法一: enum STATUS_CODE STATUS_CODE;
方法二: 
typedef enum STATUS_CODE
{
   ON_SUCCESS,
   ON_ERROR,
   ON_NULLPTR,
   ON_MALLOCFAIL,
}STATUS_CODE;
*/


int main()
{   

#if 0   
    /*函数调用*/
    purchaseAppointThing();

    int num1 = 5;
    int num2 = 6;
    myAddNum1(num1, num2);

    int totalSum = myAddNum2(num1, num2);
    int transFormerPrice = 10;
    if(totalSum > transFormerPrice)
    {
        printf("get a transFormer\n");
    }
    else
    {
        printf("l not geted\n");
    }
#endif

#if 0 
    //enum STATUS_CODE status;
    STATUS_CODE status;
    int len = sizeof(status);
    printf("len:%d\n", status);
#endif
    int num1 = 50;
    int num2 = 60;
    int sum = calculateAdd(num1, num2);
    printf("sum:%d\n", sum);
    
    int num3 = calculateSub(num1, num2);
    printf("sum:%d\n", num3);

    int amass = calculateMul(num1, num2);
    printf("sum:%d\n", amass);

    int num4 = calculateDiv(num1, num2);
    printf("sum:%d\n", num4);
    
    return 0;
}