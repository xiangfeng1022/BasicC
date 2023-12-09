#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE  10
/*数组：它是一段连续的存储空间
        它里面存放的数据类型是相同的
        */
int main()
{   
    /*方法一：使用定义即初始化*/
#if 1
    int array[BUFFER_SIZE] = { 0 };//初始化
#else
      int array[BUFFER_SIZE];
#endif
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d] = %d\n",idx,array[idx]);
    }
    int len = sizeof(array);
    printf("len:%d\n",len);

    /*地址 %p */
    /*数组的（首）地址 和 数组的首元素地址一样*/
    printf("%p\n",array);
    printf("%p\n",&array[0]);
    printf("%p\n",&array[1]);
    printf("%p\n",&array[9]);
    
#if 0
    /*二进制*/
    /*八进制*/
    /*十进制*/
    /*十六进制：0 1 2 3 4 5 6 7 8 9 A B C D E F 
               F + 1 = 10  0X0F + 0X01 = 0X10
                0X34 = 3 * 16 ^ 1 + 4 * 16 ^ 0 = 48+4=52
                0XB4 = 11 * 16 ^ 1 + 4 * 16 ^ 0 =*/

#endif
#if 0   
    /*清除脏数据 memset函数:用一个常量字节填充内存 */
    /* void *memset(void *s, int c, size_t n);
    memset()函数用s所指向的内存区域的前n个字节填充
    常量字节c。  用c填充 void*s地址 填充size_t n那么长*/
   
    memset(array, 0 ,sizeof(array));
    /*把array所指向的内存区域的 sizeof(array)的40个字节填充0*/
    printf("================\n");

    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d] = %d\n",idx,array[idx]);
    }
#endif

    /*数组的越界访问*/
    /*判断索引的有效性*/
    printf("array[-1]: %d\n",array[-1]);
    printf("array[10]: %d\n",array[10]);

    return 0;
}