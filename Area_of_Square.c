#include <stdio.h>
int main(void)              // 官方推荐的写法
{
    float radius, area;     // radius 半径，area 面积
    printf("Enter the Radius : ");
    if (scanf("%f", &radius) != 1 || radius < 0) {
        printf("Invalid input!\n");
        return 1;           // 异常结束
    }
    area = 3.1416f * radius * radius;  // 圆面积公式 πr²
    printf("Area = %.2f\n", area);      // 保留两位小数
    return 0;               // 正常结束
}
