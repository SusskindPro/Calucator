// C++控制台应用.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <stdio.h>
#include "Caluactor.h"  //打开文件需要使用双引号
using namespace std;



int main()
{
	double x = 0.0;  //变量初始化
	double y = 0.0;
	double result = 0.0;
	char oper = '-';

	cout << "计算器控制台应用程序" << endl << endl;
	cout << "请输入要执行的操作. 格式: a+b | a-b | a/b | a*b "; 
	cout << endl;
	//return 0;
	
	Caluactor c;
	while (true)
	{
		if (oper == '/' & y == 0)
			cout << "发现错误";
			continue;
		cin >> x >> oper >> y;
		result = c.Caluacte(x, oper, y);
		cout << x << oper << y << "=" << result;

	}
	return 0.0;
}

//int main()
//{
//    studion << "Hello World!\n"; //studio包含输入输出功能
//}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
