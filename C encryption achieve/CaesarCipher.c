#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char cipher1[100];
void InputPlaintext();
int InputKey();
void Input();
void OutputCiphertext(ciphertext,i);
int JudgmentCharacter(int AsciiCode);
char AlgorithmAchieve(plaintext, key);
int main()
{
	printf("���ǿ������ܵ�C����ʵ�֣�\n");
	Input();
	//OutputCiphertext();
	return 0;
}
//���Ľ��պ���
void InputPlaintext()
{
	printf("������Ҫ���ܵ�����\n");
	char plaintext[1000]; //���Ľ�������
	//gets()
	gets(plaintext); //��������
	int key = InputKey(); //������Կkey
	int len = strlen(plaintext); //�ж��������鳤��
	//�����ַ��������е�ÿһ���ַ�
	for (int i = 0; i < len; i++)
	{
		int AsciiCode = plaintext[i];
		//int res = JudgmentCharacter(AsciiCode);
		char cipher = AlgorithmAchieve(plaintext[i], key);
		OutputCiphertext(cipher,i);
		

	}
	printf("\n������:%s\n", cipher1);
	//printf("[test]length:%d\n", len);
	//printf("[test]show:%s\n",plaintext);
	
	
	
}
//��Կkey���պ���
int InputKey()
{
	printf("������Ҫ���ܵ���Կ\n");
	int Key=0;
	scanf("%d",&Key);
	return Key;
}
//���뺯��
void Input()
{
	InputPlaintext();
	//InputKey();
}
//������ĺ���
void OutputCiphertext(ciphertext,i)
{
	//printf("�������\n");
	cipher1[i] = ciphertext;
	
}
//�ж��ַ��Ƿ�Ƿ�;
int JudgmentCharacter(int AsciiCode)
{
	//printf("[test]:%d\n",AsciiCode);
	//if ((int)AsciiCode < 32 && (int)AsciiCode < 126)
	//{
	//	printf("keyi....");
	//	return 1;
	//	//�Ϸ��ַ�
	//} 
	//else
	//{
	//	return 0;
	//}
}
//�㷨�ľ���ʵ��
char AlgorithmAchieve(plaintext,key)
{
	//printf("����:%c\n",plaintext);
	char ciphertext = plaintext + key;
	//printf("����:%c\n", ciphertext);
	return ciphertext;
}