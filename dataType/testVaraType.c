#include <stdio.h>
#include <stdlib.h>

/*数据类型*/
int main()
{   

#if 0  
    long bigValue = 0;
    int len = sizeof(bigValue);  
    printf("len: %d, a = %ld\n", len, bigValue);
   
    /*变量的命名:数字，字母，下划线。 只能以字母和下划线开头*/
    /*数据类型对应的内存的存储空间*/
    /*sizeof计算字节大小*/
    int age = 6;
    //int _a = 6;
    len = sizeof(age);  /*整型就是整数*/
    printf("len: %d, a = %d\n", len, age);
    
    short smallValue = 1;
    len = sizeof(smallValue);
    printf("len: %d, a = %d\n", len, smallValue);
    

    /*浮点数*/
    float weight = 50.5;
    len = sizeof(weight);
    printf("len: %d, weight= %f\n",len,weight);


    double weight = 50.5;
    len = sizeof(weight);
    printf("len: %d, weight = %f\n", len, weight); /*%f打印小数/浮点数*/

    char sex = 'm';
    len = sizeof(sex);
    printf("len: %d, sex = %c\n", len, sex);  /*%c打印字符*/

#endif   
    /**/
    char sex = -129;               //不加unsigned默认有符号
    int len = sizeof(sex);
    printf("len: %d, sex = %c sex = %d\n", len, sex, sex);
    
    
    char default_value = 137;               //不加unsigned默认有符号
    len = sizeof(default_value);
    printf("len: %d, default_value = %c default_value = %d\n", len, default_value, default_value);


    /*无符号 和 有符号的区别*/
    unsigned char m_value = -127;
    len = sizeof(sex);
    printf("len: %d, sex = %c sex = %d\n", len, m_value, m_value);      
    
    /*表达式 & 运算符*/
    /* + - * / */
    /*括号的优先级最高*/
    /*后置++*/
    /*前置++*/
    

    /*随机数*/
    int randomVal = rand();
    printf("randVal:%d\n",randomVal);

    /*中奖率是25%*/
    int lotteryRate = randomVal % 4;  //[0-3]
    printf("lotteryRate:%d\n",lotteryRate);

    int a = 51 << 1; //= 51 * 2 位运算二进制左移右移
    printf("a:%d\n",a);
    

    int num = 51;
    int orVal = num | 7; //或
    int andVal = num & 2; //与
    printf("orVal:%d\n",orVal);
    printf("andVal:%d\n",andVal);

    /* ! 非号*/
    int notVal = !num;   //非   b非0 !b 为0   b为0 !b 为1
    printf("notVal:%d\n",notVal);
    
    /*且&& 或|| 非 */
    /*或：只要有一个条件满足，就返回1*/
    /*且：两边都被满足，就返回1，否则返回0*/
    
    /*运算符:双目运算符 & 三目运算符*/
    //int a = 7 + 8; 双目运算符

    int num1 = 10;
    int num2 = 30;
    int num3 = num1 > num2 ? 100 : 666;
    printf("num3:%d\n",num3);
     
    return 0;
}