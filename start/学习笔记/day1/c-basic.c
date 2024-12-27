/*
c语言基础程序以令牌作为基本单位,通过编译器将代码变为令牌(token)
令牌类型有六种
1.关键字(keywords)
2.标识符(identifiers)
3.常量(constracts)
4.字符串字面量(string literials)
5.运算符(operators)
6.分隔符(separators)
另一种456更改为
4.字符串(string)
5.特殊符号(specialsymbols)
6.操作符(operators)
*/
#include <stdio.h>   // 头文件包含

#define PI 3    // 宏定义

// 函数声明
int sq(int a);
int cm(int a);

int main() {         // 主函数
    int num,s,c;   //定义变量
    // 用户输入
    printf("Enter one integers: ");
    scanf("%d", &num);
    // 函数调用
    s = sq(num);
    c = cm(num);

    // 输出结果
    printf("周长= %d\n 面积= %d\n",c,s);
    return 0;        // 返回 0 表示程序成功执行
}

// 函数定义
int cm(int a){
    return 2*a*PI;
}

int sq(int a){
    return a*a*PI;
}