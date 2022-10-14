# 2022c
從前從前有一個.......continue
# week06-1
##  重點其實是要先把樓層的鷹架印出來
```cpp
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++) {
        int start = i*2+1;
        printf("ÆN¬[:%d¼Ó %d¬P¬P\n",i ,start);
    }
}
```

# week06-2
## 畫金字塔
```cpp
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++) {
        int start = i*2+1;
        int space = 5-i;
        for(int k=0;k<space;k++) {
            printf(" ");
        }
        for(int k=0;k<start;k++) {
            printf("*");
        }
        printf("鷹架:%d樓 %d空格 %d星星\n",i,space,start);
    }
}
```
# week06-3
## 找到最大公因數。暴力解
```cpp
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("輸入兩個數: ",a,b);
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a;i++) {
        if(a%i==0 && b%i==0) c=i;
    }
    printf("最大公因數為%d",c);
}
```
# week06-4
## 輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("輸入兩個數: ",a,b);
    scanf("%d %d",&a,&b);

    while(1) {
        c = a%b;
        printf("a:%d b:%d c:%d\n",a,b,c);
        if(c==0) break;
        a = b;
        b = c;
    }
    printf("中的是%d",b);
}
```
# week06-5
## 了解 while(1) 為什麼是「一直做」的迴圈
```cpp
#include <stdio.h>
int main()
{
    if(1) printf("不是0都成立\n");
    if(10) printf("不是0都成立\n");
    if(2) printf("不是0都成立\n");
    if(100) printf("不是0都成立\n");
    if(1500) printf("不是0都成立\n");
    if(-1) printf("不是0都成立\n");
    if(-1500) printf("不是0都成立\n");
    if(0) printf("不是0都成立\n");
}
```
