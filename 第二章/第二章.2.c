//#include <stdio.h>
//
//int main()
//{
//	int ch;
//	int count = 0;
//
//	//���ַ���ȡ����
//	while ((ch = getchar()) != EOF)
//	{
//		//������ʼ�պϷ�
//		if (ch == '{')
//		{
//			count++;
//		}
//
//
//		//�һ�����ֻ�е�����һ��������ƥ��ʱ���ǺϷ���
//		if (ch == '}')
//		{
//			if (0 == count)
//			{
//				printf("�����������\n");
//			}
//			else
//			{
//				count--;
//			}
//		}
//	}
//	if (count > 0)
//	{
//		printf("%d����ƥ���������\n", count);
//	}
//	return 0;
//}