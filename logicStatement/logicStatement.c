
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//替换 ctrl f    ctrl g跳转到哪一行

/*状态码*/
enum STATUS_CODE
{
   REGISTER = 1,
   LOGIN,
   QUIT,
};

/*宏定义*/
/*代码规范:宏必须全部大写*/
#define COUNT_NUM 10
#define RANGE_NUM 100

int main()
{   
#if 0
    /*判断语句*/
    int budget = 5000;

    int applephone = 8999;
    int mi14Pro = 4399;
    int huaweiP60 = 6000;
 
    if(budget > applephone)
    {
        printf("get a applephone!\n");
    }
    else if (budget > mi14Pro)
    {
        printf("get a mi14Pro!\n");
    }
    else if (budget > huaweiP60)
    {
        printf("get a huaweiP60!\n");
    }
    
#endif

#if 0
    int budget = 5000;
    int minbudget = 5500;
    int maxbudget = 8000;
    int applephone = 8999;
    int mi14Pro = 4399;
    int huaweiP60 = 6000;
 
    if(budget < applephone || budget > mi14Pro)
    {
        printf("I am happy, get a phone\n");
    }
    else 
    {
        printf("I am sad, no phone\n");
    }
    

    if((minbudget < budget) && (budget < maxbudget))
    {
        printf("success get a phone\n");

    }
    else 
    {
        printf("error get a phone\n");
    }
#endif

#if 0
    /*代码规范1: 一个函数尽量不要超过80行,最多不超过120行*/
    /*坑1: 每一个case都需要break;*/
    /*坑2: 如果case里面的语句过多,一定要加上{}来包含*/
    // case 1:
    // {
    //      printf("welcome to 1 city\n"); 
    // }      
    //     break;

    int choice = 0;
    printf("请输入你的选项:");
    scanf("%d",&choice);
   
    switch(choice)                   
    {
    case REGISTER:
        printf("welcome to register\n");      
        break;
    case LOGIN:
        printf("welcome to login\n"); 
        break;   
    case QUIT:
        printf("welcome to quit\n"); 
        break;  
    default:
        printf("input choice invalid\n"); 
        break;    
    
     }


#endif

#if 0
    srand(time(NULL));

     /*循环*/

     /*请你写一个100以内的数 [1 - 100]*/
    // int randomNum = rand() % RANGE_NUM + 1;
    // printf("randomNum:%d\n",randomNum);
   
    /*代码规范: 循环不允许写i
      不允许使用魔鬼数字，全部用宏*/
    int randomNum = 0;
    
    for(int idx = 0; idx < COUNT_NUM; idx++)
    {
        int randomNum = rand() % RANGE_NUM + 1;
        printf("randomNum:%d\n",randomNum);
    }

#endif

#if 0
    /*编码规范:变量尽量用驼峰式命令*/
    
    /*什么情况下进程的CPU消耗会飙升
     进程在等待或阻塞时不会使用CPU资源，因此进程的CPU消耗会在以下情况下飙升：
     进程处于无限循环状态，例如while(true)。
     进程执行了大量的计算密集型任务，例如排序、加密等操作。
     进程频繁地进行IO操作，例如读写文件、网络通信等。
     如果进程出现以上情况，CPU将会长时间地为该进程服务，导致CPU消耗飙升*/
    //man pthread_cond_wait 

    int circleTimes = COUNT_NUM >> 1;     //*2 左移1  /2 右移1
    int randomNum = 0;
    
    /*一定需要有退出的条件*/
    while(circleTimes--)
    {
        randomNum = rand() % RANGE_NUM + 1;
        printf("randomNum:%d\n",randomNum);
    }
 
#endif

  
    //用处：常使用在宏函数中
    int varaNum = 0;
    do
    {
        printf("varaNum:%d\n",varaNum);
    }while(varaNum);
 
    return 0;
}