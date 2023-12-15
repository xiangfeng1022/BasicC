#include <stdio.h>
#include <string.h>

int main()
{   
    /* 指针和字符串 */
    char *ptr = "hello world";
     
    /* 字符串常量? 什么叫字符串常量 */
    /* 打印字符串的每一个字符 
       1、使用for循环的方式*/
#if 0  
    //错误的
    int len = strlen(ptr);
    printf("len:%d\n", len); 
    char p = '0';
    for(int idx = 0; idx < strlen(ptr); idx++)
    {
        p = *ptr;
        printf("p:%c, idx:%d\n", p, idx);
        ptr++;
    }
#endif

#if 0
    int len = strlen(ptr);
    printf("len:%d\n", len);
     char p = '0';
    for(int idx = 0; idx < len; idx++)
    {
        p = *ptr;
        printf("p:%c, idx:%d\n", p, idx);
        ptr++;
    }
#endif

#if 0 
    /* 实现方式2: */
    while (*ptr != '\0')
    {   
        printf("%c\t", *ptr);
        ptr++;
    }
#endif

    char *ptr2 = NULL; //在栈空间
#if 1
    ptr2 = "zhangsan"; //字符串在全局常量区
#else
    strcpy(ptr2, "zhangsan"); 
#endif

    printf("ptr2:%s\n", ptr2);
    

 
    return 0;
}