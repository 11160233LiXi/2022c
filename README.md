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
```
# week07-1
## 很長很長的整數, 要用 long long int
```cpp
#include <stdio.h>
int main()
{
    int n=123456789123456789;
    printf("%d\n",n);
    long long int a=123456789123456789;
    printf("%lld\n",a);
}
```
# week07-2
## 回來用long long int 複習最大公因數了。
```cpp
#include <stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    long long int ans;
    for(long long int i=1;i<=a;i++) {
        if(a%i == 0&& b%i == 0) ans=i;
    }
    printf("答案是%lld\n",ans);
}
```
```
# week07-3
## 前面的暴力法真的很慢,所以我們要改用輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld%lld",&a,&b);

    while (1) {
        c=a%b;
        printf("%lld %lld %lld\n",a,b,c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("答案是%lld", b);
}
```
# week07-4
## 倒過來的剝皮法
```cpp
#include <stdio.h>
int main()
{
    int n=123456;

    while(n>0) {
        printf("個位數是:%d\n",n%10);
        n = n/10;
    }
}
```



