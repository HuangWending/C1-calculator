# C1-calculator
C语言计算器
#include <stdio.h>：包含头文件stdio.h，该头文件包含了标准输入输出函数的定义。
int main()：这是程序的主函数，程序从这里开始执行。
char operator;：声明一个字符变量operator，用于存储运算符。
double num1, num2, result;：声明三个double类型的变量，分别用于存储操作数和结果。
printf("请输入运算符 (+, -, *, /): ");：打印提示信息，要求用户输入运算符。
scanf("%c", &operator);：使用scanf函数读取用户输入的运算符，并将其存储在operator变量中。
printf("请输入两个操作数: ");：打印提示信息，要求用户输入两个操作数。
scanf("%lf %lf", &num1, &num2);：使用scanf函数读取用户输入的两个操作数，并将其存储在num1和num2变量中。
switch (operator) { ... }：使用switch语句根据用户输入的运算符执行相应的操作。
case '+':：如果运算符是加号，则执行以下代码。
result = num1 + num2;：将num1和num2相加的结果赋值给result变量。
printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);：打印带有结果的加法表达式。
break;：跳出switch语句。
case '-':、case '*'、case '/'：类似于加法，分别处理减法、乘法和除法。
if (num2 != 0) { ... }：如果num2不等于0，则执行以下代码。
result = num1 / num2;：将num1除以num2的结果赋值给result变量。
printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);：打印带有结果的除法表达式。
else { ... }：如果num2等于0，则执行以下代码。
printf("除数不能为0\n");：打印除数为0的错误信息。
default:：如果运算符不是加号、减号、乘号或除号，则执行以下代码。
printf("无效的运算符\n");：打印无效运算符的错误信息。
return 0;：返回0，表示程序正常结束。
