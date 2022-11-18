# 2022c
從前從前有一個.......continue
模板
# week
## 
```cpp
```
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
# week08-1
## 只有2個for迴圈時,口訣是先能畫出正方形。再來的關鍵, 是空格有幾個。空格有n-i個。
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++) {
        for(int k=1;k<=n;k++) {
            if(k<=n-i) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
}
```
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++) {
        for(int k=1;k<=n;k++) {
            printf("%c",(k<=n-i)?' ':'*');
        }
        printf("\n");
    }
}
```
# week08-2
## 用了2個for迴圈
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int i=1;
    while(i<=n) {
        int k=1;
        while(k<=n) {
            printf("%c",(k<=n-i)?' ':'*');
            k++;
        }
        i++;
        printf("\n");
    }
}
```
# week08-3
## 使用flag迴圈立旗做判斷
```cpp
#include <stdio.h>
int main()
{
    printf("判斷是不是質數:");
    int n;
    scanf("%d",&n);

    int bad=0;
    for(int i=2;i<2;i++) {
        if(n%i==0) bad=1;
    }
    if(bad==0) printf("%d是質數",n);
    else printf("%d不是質數",n);
}
```
# week08-4
## "列出質數" 
```cpp
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);

	for(int n=2;n<=a;n++) {

		int bad=0;
		for(int i=2;i<n;i++) {
			if(n%i==0) bad=1;
		}
		if(bad==0) printf("%d ",n);
	}
}
```
# week10-1
## 
```cpp
#include <stdio.h>
int main()
{
    ///int a;
    int a[4] = {10,20,30,40};

    printf("a[0]%d\n",a[0]);
    printf("a[1]%d\n",a[1]);
    printf("a[2]%d\n",a[2]);
    printf("a[3]%d\n",a[3]);
}
```
# week10-2
## 
```cpp
#include <stdio.h>
int main()
{
    int a[4] = {10,20,30,40};

    for(int i=0;i<4;i++) {
        printf("%d\n",a[i]);
    }
    for(int i=3;i>=0;i--) {
    printf("%d\n",a[i]);
    }
}
```
# week11-01
## 三數排列
```cpp
#include <stdio.h>
int main()
{
    int a=90,b=80,c=70,temp;
    printf("%d %d %d \n",a,b,c);
    if(a>b) {
        temp=a;
        a=b;
        b=temp;
    }
    if(b>c) {
        temp=b;
        b=c;
        c=temp;
    }
    if(a>b) {
        temp=a;
        a=b;
        b=temp;
    }
    printf("%d %d %d\n",a,b,c);
}
```
# week11-02
## 
```cpp
```
# week11-03
## 
```cpp
```
# week11-04
## 
```cpp
```







