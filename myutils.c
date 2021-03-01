#include "myutils.h"
#include "stdarg.h"


#define TRUE   1    //TRUE
#define FALSE  0    //FALSE


int factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("%d",f);
    return 0;
}



int ispalindrome(int m)
{   
    int temp,reminder,rev=0;
    int temp=m;
    while(m!=0)
    {
        reminder=m%10;
        rev=rev*10 + reminder;
        m=m/10;
    }
    if( rev == temp)
    return FALSE;
    else
    return TRUE;
}


int isprime(int n)
{
    int i,flag = 0;
    for(i=2;i<=n/2;++i)
    {
        //condition for not prime
        if(n%i == 0)
        {
            flag=1;
            break;
        }
    }
    if(n==1)    
        printf("not prime");
    else    
        printf("prime");    
}


int sum(int num, ...) 
{ 
    va_list valist; 
  
    int sum = 0, i; 
  
    va_start(valist, num); 
    for (i = 0; i < num; i++)  
        sum += va_arg(valist, int); 
  
    va_end(valist);
    printf ("%d",sum);
    return 0;
}