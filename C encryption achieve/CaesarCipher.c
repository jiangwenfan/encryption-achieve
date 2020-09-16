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
	printf("这是凯撒加密的C语言实现！\n");
	Input();
	//OutputCiphertext();
	return 0;
}
//明文接收函数
void InputPlaintext()
{
	printf("请输入要加密的明文\n");
	char plaintext[1000]; //明文接收数组
	//gets()
	gets(plaintext); //接收明文
	int key = InputKey(); //接受密钥key
	int len = strlen(plaintext); //判断明文数组长度
	//迭代字符串数组中的每一个字符
	for (int i = 0; i < len; i++)
	{
		int AsciiCode = plaintext[i];
		//int res = JudgmentCharacter(AsciiCode);
		char cipher = AlgorithmAchieve(plaintext[i], key);
		OutputCiphertext(cipher,i);
		

	}
	printf("\n密文是:%s\n", cipher1);
	//printf("[test]length:%d\n", len);
	//printf("[test]show:%s\n",plaintext);
	
	
	
}
//密钥key接收函数
int InputKey()
{
	printf("请输入要加密的密钥\n");
	int Key=0;
	scanf("%d",&Key);
	return Key;
}
//输入函数
void Input()
{
	InputPlaintext();
	//InputKey();
}
//输出密文函数
void OutputCiphertext(ciphertext,i)
{
	//printf("输出密文\n");
	cipher1[i] = ciphertext;
	
}
//判断字符是否非法;
int JudgmentCharacter(int AsciiCode)
{
	//printf("[test]:%d\n",AsciiCode);
	//if ((int)AsciiCode < 32 && (int)AsciiCode < 126)
	//{
	//	printf("keyi....");
	//	return 1;
	//	//合法字符
	//} 
	//else
	//{
	//	return 0;
	//}
}
//算法的具体实现
char AlgorithmAchieve(plaintext,key)
{
	//printf("明文:%c\n",plaintext);
	char ciphertext = plaintext + key;
	//printf("密文:%c\n", ciphertext);
	return ciphertext;
}