#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 32

int main()
{   


    /* 字符串(字符数组) */
    char array[BUFFER_SIZE] = "hello world";
    /*strlen*/
    int len = strlen(array);
    printf("len:%d\n", len);
    
    /*strcpy*/
    char name[BUFFER_SIZE];
    memset(name, 0, sizeof(name));
    strcpy(name, "hellow");
    printf("name:%s\n", name);
    
    /*strcat*/
    strcat(name, "is a boy");
    printf("name:%s\n", name);
    
    /*strcmp*/
    char name2[BUFFER_SIZE] = "hello";
    int ret = strcmp(name, name2);
    printf("ret:%d\n", ret);


#if 0
    /*指针出入*/
    char * ptr = "hello world";
    int len = strlen(ptr);
    int size = sizeof(ptr);
    printf("len:%d\n",len);
    printf("size:%d\n",size);
    
    printf("*ptr:%c\t*(ptr+1):%c\n",*ptr,*(ptr+1));
    printf("ptr + 2: %s\n",ptr + 2);
#endif

#if 0
    char array[] = "helloworld";
    int len = strlen(array);  //10
    int size = sizeof(array); //11
    printf("len: %d\n",len);  
    printf("size: %d\n",size);
    
    
    char buffer[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    int len1 = strlen(buffer); //5
    int size1 = sizeof(buffer);  //6
    printf("len1: %d\n",len1);
    printf("size1: %d\n",size1);
#endif    

    return 0;
}