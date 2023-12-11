#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 32

int main()
{   

#if 0
    /* 字符串(字符数组) */
    char array[BUFFER_SIZE] = "hello world";
    /*strlen*/
    int len = strlen(array);
    printf("len:%d\n", len);
    
    /*strcpy*/
    char name[BUFFER_SIZE];
    memset(name, 0, sizeof(name));
    strcpy(name, "zhangsan");
    printf("name:%s\n", name);
    
    /*strcat*/
    strcat(name, "is a boy");
    printf("name:%s\n", name);
    
    /*strcmp*/
    char name2[BUFFER_SIZE] = "wangwu";
    int ret = strcmp(name, name2);
    printf("ret:%d\n", ret);

#endif

    /*指针出入*/
    char * ptr = "hello world";
    int len = strlen(ptr);
    int size = sizeof(ptr);
    printf("len:%d\n",len);
    printf("size:%d\n",size);
    
    printf("*ptr:%c\t*(ptr+1):%c\n",*ptr,*(ptr+1));
    
    
    return 0;
}