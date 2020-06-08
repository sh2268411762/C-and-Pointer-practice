//#include <stdio.h>
//
//int main()
//{
//	int ch;
//	int count = 0;
//
//	//逐字符读取程序
//	while ((ch = getchar()) != EOF)
//	{
//		//左花括号始终合法
//		if (ch == '{')
//		{
//			count++;
//		}
//
//
//		//右花括号只有当它和一个左花括号匹配时才是合法的
//		if (ch == '}')
//		{
//			if (0 == count)
//			{
//				printf("额外的右括号\n");
//			}
//			else
//			{
//				count--;
//			}
//		}
//	}
//	if (count > 0)
//	{
//		printf("%d个不匹配的左括号\n", count);
//	}
//	return 0;
//}