#include <stdio.h>
#include <string.h>

void InputPlaintext();
void InputKey();
void Input();
void OutputCiphertext();
int main()
{
	printf("���ǿ������ܵ�C����ʵ�֣�\n");
	Input();
	OutputCiphertext();
	return 0;
}
//���Ľ��պ���
void InputPlaintext()
{
	printf("������Ҫ���ܵ�����\n");
	char plaintext[100]; //���Ľ�������
	gets(plaintext); //��������
	int len = strlen(plaintext); //�ж��������鳤��
	//�����ַ��������е�ÿһ���ַ�
	for (int i = 0; i < len; i++)
	{
		int res = juage(plaintext[i]);
		printf("%d\n",res);
		printf("--:%c\n",plaintext[i]);
	}
	printf("length:%d\n", len);
	printf("show:%s\n",plaintext);
	//�ж��ַ��Ƿ�Ƿ�;
	int juage(char a){
		int aa = a; //assii��
		if (aa < 32 && a < 126)
		{
			return 1;
			//�Ϸ��ַ�
		}
		else
		{
			return 0;
		};
	}
	
}
//��Կkey���պ���
void InputKey()
{
	printf("������Ҫ���ܵ���Կ\n");
}
//���뺯��
void Input()
{
	InputPlaintext();
	InputKey();
}
//������ĺ���
void OutputCiphertext()
{
	printf("�������\n");
}
//�㷨�ľ���ʵ��
void AlgorithmAchieve(plaintext,key)
{

}