// PPP2 第4章 习题4.5
// 题目：编写程序求解一元二次方程 ax^2 + bx + c = 0
// 页码：P132
// 思路：
//  1. 输入 a、b、c
//  2. 计算判别式 Δ = b^2 - 4ac
//  3. Δ > 0 → 两个实根
//     Δ = 0 → 一个实根
//     Δ < 0 → 无实根

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "请输入系数 a b c：";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "a 不能为 0，这不是二次方程。\n";
        return 0;
    }

    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "两个实根：" << x1 << " 和 " << x2 << endl;
    }
    else if (delta == 0) {
        double x = -b / (2 * a);
        cout << "一个实根：" << x << endl;
    }
    else {
        cout << "无实根（判别式 < 0）。\n";
    }

    return 0;
}
