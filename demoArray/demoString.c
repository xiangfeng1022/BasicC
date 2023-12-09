#include <stdio.h>

/*它也是个常量*/
const int g_num = 10;

int main()
{   
    /*字符数组初始化定义的两种方式*/
    char buffer1[]= "helloworld"; //保存在栈区
    buffer1[0] = 'H';
    printf("buffer1:%s,\tbuffer[0]:%c\n",buffer1,buffer1[0]);
    
    char * ptr = "helloworld";   //保存在全局区/常量区
    printf("ptr[0]:%c\t*(ptr+1):%c\n",ptr[0], *(ptr + 1));
    
    /*为什么字符串不能改? 因为字符串是常量，它也是存放在全局区的，不可以修改*/
    ptr[0] = 'H'; //不可以修改  
    printf("ptr[0]:%c\n",ptr[0]);//会报段错误
    return 0;
}