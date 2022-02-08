#include<stdio.h>

int main()
{
    printf("欢迎来到拯救宋大师的马抽奖小游戏！\n");
    printf("你总共有六次机会拯救宋大师的马\n");
    int i = 0, n = 0, x = 0, y = 0;
    for (i = 0; i < 6; i++) {
        printf("你还有%d次机会\n", 6 - i);
        printf("请在一百以内任取一个数字:");
        scanf_s("%d", &n);
        if (n == 54) {
            y++;
            printf("你成功拯救了宋大师的马马");
        }
        else if (n < 54) {
            x++;
            printf("你猜的数字小了点，你失败了，你又失去了一次机会\n");
        }
        else {
            x++;
            printf("你猜的数字大了点，你失去了一次机会\n");
        }
    }
    if (y > 0) {
        printf("你成功拯救了%d次宋大师的马马，下次再见！", y);
    }
    else {
        printf("废物，你让宋大师的马马被杀了六次！欢迎下次再完！");
    }
    return 0;
}
