#include <stdio.h>
//#include <iostream>
//using namespace std;

int my_strlen(const char *str) 
{
	if (str == NULL)  return 0;
	//str != NULL 
	int i = 0;
	int count = 0;//유효한 문자수가 몇개인지 
	for (i =0;str[i]!='\0'; i++){
		//count++;//i와 count값이 동일하게 증가하므로 사실 count는 필요없음.
		;//NOP
	}
	return i;
}
int main()
{

	//테스트 코드
	int len = 0;
	len = my_strlen(NULL);//0//포인턴STR이 가리키는주소는 NULL이라는 주소,주소값이 0
	len = my_strlen("");//0//{'\0'}을 의미.str은 \0이 들어있는 크기1짜리 배열을 가리킴.널문자 하나만 있는 스트링을 비어있는 스트링이라 함.
	len = my_strlen("hello");//5
	len = my_strlen("hello world");//11
	printf("%d", len);
		
	return 0;
}