#include "Caluactor.h"
using namespace std;
//double Caluactor::Caluactor(double x, char oper, double y)
//{
//	switch (oper)
//	{
//		case '+':
//			return x + y;
//		case '-':
//			return x - y;
//		case '*':
//			return x * y;
//		case '/':
//			return x / y;
//		default :
//			return 0.0;
//	}
//
//}

double Caluactor::Caluacte(int x, char oper, int y)
{
	   switch (oper)
	   {
	    case '+':   // ���������ʹ�ò�������ʱ��ʹ�õ�����
		    return x + y;
	    case '-':
		    return x - y;
	    case '*':
		    return x * y;
	    case '/':
		    return x / y;
	    default :
		    return 0.0;
	    }

}

