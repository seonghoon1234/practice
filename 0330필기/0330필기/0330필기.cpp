#include <stdio.h>
//#include <iostream>
//using namespace std;

int my_strlen(const char *str) 
{
	if (str == NULL)  return 0;
	//str != NULL 
	int i = 0;
	int count = 0;//��ȿ�� ���ڼ��� ����� 
	for (i =0;str[i]!='\0'; i++){
		//count++;//i�� count���� �����ϰ� �����ϹǷ� ��� count�� �ʿ����.
		;//NOP
	}
	return i;
}
int main()
{

	//�׽�Ʈ �ڵ�
	int len = 0;
	len = my_strlen(NULL);//0//������STR�� ����Ű���ּҴ� NULL�̶�� �ּ�,�ּҰ��� 0
	len = my_strlen("");//0//{'\0'}�� �ǹ�.str�� \0�� ����ִ� ũ��1¥�� �迭�� ����Ŵ.�ι��� �ϳ��� �ִ� ��Ʈ���� ����ִ� ��Ʈ���̶� ��.
	len = my_strlen("hello");//5
	len = my_strlen("hello world");//11
	printf("%d", len);
		
	return 0;
}