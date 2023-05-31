#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("请输入运算符 (+, -, *, /): ");
    scanf("%c", &operator);

    printf("请输入两个操作数: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("除数不能为0\n");
            }
            break;
        default:
            printf("无效的运算符\n");
            break;
    }

    return 0;
}
