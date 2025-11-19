// PPP2 - Chapter 4 - Example 4.1
// 示例：单位转换（inch 到 cm）
// 页码：P108
// 本例演示简单输入、变量定义、表达式计算

#include <iostream>
using namespace std;

int main()
{
	constexpr double cm_per_inch = 2.54;    // 定义常量 cm_per_inch 每英寸厘米数
	double inches;                          // 定义变量 inches 存储输入的英寸数

	cout << "请输入英寸数：";   // 输出提示信息 提示用户输入英寸数
	cin >> inches;                          // 读取用户输入的英寸数

	// 计算并输出结果
	double cm = inches * cm_per_inch;		// 计算厘米数 将英寸转换为厘米
	cout << inches << " 英寸 = " << cm << "厘米" << endl; // 输出转换结果

	return 0;
}
