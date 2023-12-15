#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 10
 /* 内存泄漏 */

int main()
{   
 /*1、什么情况下会导致内存泄漏 */
    //case 1: 野指针
    //case 2: malloc 出的堆空间没有被释放
    //踩内存(read / write is invalid.)

#if 0 
   
    int a;
    printf("a:%d\n", a);

    int array[BUFFER_SIZE];
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("%d\t", array[idx]);
    }
#endif

#if 0 
    char *p; //野指针
    printf("\n");
#endif

    //case 2:
    char *ptr = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    if (!ptr)
    {   
        /* 状态码 */
        return -1;
    }
    /* 使用malloc分配的空间，数据是脏的。（脏数据）*/
    memset(ptr, 0, sizeof(char) * BUFFER_SIZE);
#if 0
    /* 极度危险的函数  改用strncpy */
    strcpy(ptr, "hello world");
#else
    /* 使用安全 */
    strncpy(ptr, "hello worldgergrt", BUFFER_SIZE - 1);

#endif

    printf("ptr:%c\n", *ptr);
    
    if (ptr != NULL)
    {
        free(ptr);
        ptr = NULL;
    }
    return 0;
}