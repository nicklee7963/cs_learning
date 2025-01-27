// GOAL: BICYCLE and parking lot
// DIFFICULTY: medium
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;                 // n: 停車場數量, m: 車輛數量
    int c[10], x[10], y[10];  // 停車場座標與容量
    int park_x[10], park_y[10]; // 車輛的座標
    int park_c[10] = {0};     // 每個停車場停車數量

    // 輸入停車場數據
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &x[i], &y[i], &c[i]);
    }

    // 輸入車輛數據
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &park_x[i], &park_y[i]);

        int min_distance = 20001; // 假設最大距離
        int index = -1;           // 最近停車場的索引

        // 尋找最近的停車場
        for (int j = 0; j < n; j++) {
            if (c[j] > 0) { // 確保停車場還有空位
                int distance = abs(x[j] - park_x[i]) + abs(y[j] - park_y[i]);

                // 比較距離與座標
                if (distance < min_distance ||
                    (distance == min_distance && (x[j] < x[index] || (x[j] == x[index] && y[j] < y[index])))) {
                    index = j;
                    min_distance = distance;
                }
            }
        }

        // 將車輛停放到最近的停車場
        if (index != -1) {
            c[index]--;       // 減少該停車場的空位
            park_c[index]++;  // 增加停車數量
        }
    }

    // 輸出每個停車場的停車數量
    for (int i = 0; i < n; i++) {
        printf("%d\n", park_c[i]);
    }

    return 0;
}
