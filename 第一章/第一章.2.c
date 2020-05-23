//#include <stdio.h>
//#include <stdlib.h>
//#define N 1000000

//int main()
//{
//	char s[N] = { 0 };
//	int n = 0;
//	printf("请输入要输入的行数（ 0 表示程序开始）：-->");
//	scanf("%d", & n);//输入行号
//	int i = 0;
//	for (i = 0; i <= n; i++)
//	{
//		gets_s(s, N);
//		printf("%d  %s\n", i , s);
//	}
//
//	return EXIT_SUCCESS;
//}

//int main()
//{
//	int ch;
//	int line;
//	int at_beginning;//打印行号
//
//	line = 0;
//	at_beginning = 1;
//	//读取字符并逐个处理它们
//
//	while ((ch = getchar()) != EOF)//输入
//	{
//		//如果位于一行的起始位置，打印行号
//		if (1 == at_beginning)
//		{
//			at_beginning = 0;
//			line++;
//			printf("%d ", line);
//		}
//
//		//打印字符，并对行尾进行检查
//		putchar(ch);
//		if ('\n' == ch)
//		{
//			at_beginning = 1;
//		}
//	}
//	return EXIT_SUCCESS;
//}