#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 32
int main()
{
#if 0
    //1.指针怎么定义
    /*定义变量(任意类型)记得初始化*/
    int a = 0;
    long b = 0;

    /* 指针的定义 */
    int *p = NULL;

#endif

#if 0 
     /*指针的使用:指针内部存放的是某变量的地址*/
     /*一级 二级 指针*/
     int a = 5;
     int *p = &a;

     printf("a:%d\n", a);
     printf("&a:%p\n", &a);
     printf("*(&a):%d\n", *(&a));
     printf("*p = %d\n", *p);
     printf("p = %p\n", p);
     printf("&p: %p\n", &p);


     /* 不可以 */    
     //int *ptr = &p;
     //printf("ptr:%p\n", ptr);

    int **ptr = &p;
    printf("ptr:%p\n", ptr);
    printf("*ptr:%p\n", *ptr);
    printf("*(*ptr): %d\n", *(*ptr));
    printf("&ptr:%p\n", &ptr);

    int ***pptr = &ptr;
    printf("pptr:%p\n", pptr);
    printf("*(*(*pptr)): %d\n", *(*(*pptr)));

#endif

#if 0 
    /* 指针的特性 指针占用的内存大小是8个字节(64位操作系统)*/
    int a = 10;
    int len = sizeof(a);
    printf("len:%d\n", len);

    char p = 97;
    int len1 = sizeof(p);
    printf("len1:%d\n", len1);

    char *ptr = &p;
    printf("%c\n", *ptr);
    len = sizeof(ptr);
    printf("len:%d\n", len);

    int *ptrInt = &a;
    printf("*ptrInt:%d\n", *ptrInt);
    len = sizeof(ptrInt);
    printf("len:%d\n", len);
#endif
#if 0
    /* 指针特性2: 指针和字符串 */
    /* 字符串是区别字符数组的 */
    char *ptr = "hello world";
    int len = sizeof(ptr);
    printf("len:%d\n", len);
    
    /* 怎么获取字符串的长度 */
    int length = strlen(ptr);
    printf("length:%d\n", length);
    
    /* 字符串数组的赋值 */
    char name[BUFFER_SIZE] = { 0 };
    strcpy(name,"zhangsan");
    printf("name:%s\n", name);

    /* 给字符串赋值 */
    char *ptr2 = NULL;
    ptr2 = "zhangsan";
    printf("ptr2:%s\n", ptr2);
    // strcpy(ptr2, "zhangsan"); 不可以
    // printf("ptr2:%s\n", ptr2);
#endif
    
    char *ptr2 = NULL;
    ptr2 = "zhangsan";
    printf("ptr2:%s\n", ptr2);

    /* 堆空间 */
    /* void * 是一个指针，这个指针被称为万能指针 */
    char *ptr = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    strcpy(ptr, "zhangsan");
    printf("ptr:%s\n", ptr);
    

    return 0;
}