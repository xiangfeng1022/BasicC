#include <stdio.h>
#include "myString.h"
#include <stdio.h>
/*  MYStrlen 计算一个字符串的长度  遇到'\0'停止  不遇到就一直统计 */
int MYStrlen(const char *pStr)   
{   
    int count = 0;
    // if (pStr == NULL)
    // {
    //     return count;
    // }
     if (!pStr)
    {
        return count;
    }
    while(*pStr != '\0')
    {   
        pStr++;
        count++;
    }
    return count;
}

/*MYStrcpy 字符串拷贝  不会进行越界处理 把src拷贝给dest*/
void MYStrcpy(char *dest, const char *src)
{   
    if (src == NULL || dest == NULL)
    {
        return 0;
    }
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

/* strcmp: 字符串的比较 返回值为0两个字符串相等 用对应位置的字符串ASCII码值相减 */
int MYStrcmp(const char *s1, const char *s2)
{  
   if (*s1 == NULL || *s2 == NULL)
   {
      return 0; 
   }
   while(*s1 != '\0' && *s2 != '\0')
   {
      if(*s1 != *s2)
      {
        return *s1 - *s2;
      }
      s1++;
      s2++;
   }
   return *s1 - *s2;
}

/* strcat: 字符串拼接 把一个字符串拼接到另一个字符串后面 不会越界处理 */
void MYStrcat(char *dest, const char *src)
{   
    if(dest == NULL || src == NULL)
    {
         return 0;
    }
    while(*dest != '\0')
    {
        dest++;
    }
    
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}
