#include <stdio.h>
#include <string.h>

void InputPlaintext();
void InputKey();
void Input();
void OutputCiphertext();
int main()
{
	printf("这是凯撒加密的C语言实现！\n");
	Input();
	OutputCiphertext();
	return 0;
}
//明文接收函数
void InputPlaintext()
{
	printf("请输入要加密的明文\n");
	char plaintext[100]; //明文接收数组
	gets(plaintext); //接收明文
	int len = strlen(plaintext); //判断明文数组长度
	//迭代字符串数组中的每一个字符
	for (int i = 0; i < len; i++)
	{
		int res = juage(plaintext[i]);
		printf("%d\n",res);
		printf("--:%c\n",plaintext[i]);
	}
	printf("length:%d\n", len);
	printf("show:%s\n",plaintext);
	//判断字符是否非法;
	int juage(char a){
		int aa = a; //assii码
		if (aa < 32 && a < 126)
		{
			return 1;
			//合法字符
		}
		else
		{
			return 0;
		};
	}
	
}
//密钥key接收函数
void InputKey()
{
	printf("请输入要加密的密钥\n");
}
//输入函数
void Input()
{
	InputPlaintext();
	InputKey();
}
//输出密文函数
void OutputCiphertext()
{
	printf("输出密文\n");
}
//算法的具体实现
void AlgorithmAchieve(plaintext,key)
{

}