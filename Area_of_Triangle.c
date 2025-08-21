#include <stdio.h>
int main(void)          // 1. 官方标准写法
{
    float base, height, area;   // 2. 变量名更直观
    printf("Enter the base : ");
    if (scanf("%f", &base) != 1 || base < 0) {  // 3. 检查输入成功 + 合理性
        printf("Invalid base.\n");
        return 1;         // 非 0 表示程序异常结束
    }
    printf("Enter the height : ");
    if (scanf("%f", &height) != 1 || height < 0) {
        printf("Invalid height.\n");
        return 1;
    }
    area = 0.5f * base * height;  // 4. 0.5f 表示“float 字面量”，避免类型转换
    printf("Area is %.2f\n", area);  // 5. 保留 2 位小数，并换行
    return 0;  // 0 表示正常结束
}
