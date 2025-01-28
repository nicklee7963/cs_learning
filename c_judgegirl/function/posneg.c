#include "posneg.h" // 假设你有 posneg.h

int posneg(int a[5][5], int b[2]) {
    // 初始化 b 数组
    b[0] = 0; // 用于统计负数数量
    b[1] = 0; // 用于统计正数数量

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i][j] < 0) {
                b[0]++;
            } else if (a[i][j] > 0) {
                b[1]++;
            }
        }
    }
    return 0; // 返回值可以省略或用于其他标志
}
