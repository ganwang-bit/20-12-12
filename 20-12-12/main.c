//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr3[]={1};
//    int*arr[]={arr3};
//    int **arr1=arr;
//    int***arr2=&arr;
//    return 0;
//}
#include<stdio.h>
int main()
{
    int arr1[10];
    int arr2[10];
    int arr3[11];
    char ch;
    int i;
    for(i=0;i<20;i++)
    {
        if(i<10)
        {
        ch=getchar();
        arr1[i]=ch-'0';
        }
        else
        {
            ch=getchar();
            arr2[i-10]=ch-'0';
        }
        if(i==9)
            getchar();
    }
    int tmp=0;
    for(i=9;i>=0;i--)
    {
        arr3[i+1]=(arr1[i]+arr2[i]+tmp)%2;
        tmp=(arr1[i]+arr2[i])/2;
    }
    if(tmp==1)
        arr3[0]=tmp;
    else
        arr3[0]=0;
    for(i=0;i<11;i++)
    {
        printf("%d",arr3[i]);
    }
    return 0;
}
