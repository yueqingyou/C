#include <stdio.h>
#include <math.h>

int main()
{
    //定义
    int money,year;
    double rate;
    float temp,sum;
    //输入
    printf("Enter money:");
    scanf("%d",&money);
    printf("Enter year:");
    scanf("%d",&year);
    printf("Enter rate:");
    scanf("%lf",&rate);
    //计算
    temp=pow(1+rate,(double)year);
    sum=temp*money;
    //输出
    printf("sum = %.2f\n",sum);
    //结束
    return 0;
}

 /*
  计算存款的本金和复利之和。输入存款金额 money、存期 year 和年利率 rate，根据公式计算存款到期时的本息合计sum（税前），输出时保留2位小数。sum = money(1+rate)^year(提示：在C语言里，^要用pow()函数计算，详见书后附录)。
  ******提示信息："Enter money:"
  ******输入格式："%d"
  ******提示信息："Enter year:"
  ******输入格式："%d"
  ******提示信息： "Enter rate:"
  ******输入格式："%lf"

  **输出格式要求："sum = %.2f\n"
  程序运行示例如下：
  Enter money:1000
  Enter year:3
  Enter rate:0.025
  sum = 1076.89
 */
