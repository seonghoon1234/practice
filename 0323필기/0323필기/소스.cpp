#include<iostream>
using namespace std;

int adder(int a,int b);//함수 선언만 있는것을 '함수(function) 프로토타입' 이라고 함
int bigger(int a,int b);
int sum3(int a, int b,int c);
int abs(int a,int b);
int addArray(int a[],int size);	//배열의 주소정보와 배열크기를 받음.
								//int addArray(int a[size],)는 불가능!!함수의 선언부에 이미 만들어진
								//변수인 size를 사용할수가 없다.
int main()
{
	
	/*
	char c[2];
	c={1,2};//불가. c는 시작주소일뿐이기떄문에 배열의 경우 선언후 한꺼번에 초기화 불가함.
	*/
	char ccc[3]="as";
	cout<<ccc[0]<<"---------"<<ccc[1]<<"------"<<ccc[2]<<endl;
	//void형 함수는 반환값이 없다. 함수는 반환값을 매개로 종료를 판단하는게 아니엿나?그럼 void의 종료 근거는?
	int a=3,b=2;
	cout<<bigger(a,b)<<endl;
	cout<<adder(a,b)<<endl;
	int c=5;
	cout<<sum3(a,b,c)<<endl;

	//포인터
	int n[10];
	int *p=n;
	cout<<&n[0]<<'/n'<<&n[1];//주소값이 4차이난다.int형이 4바이트이므로.
	//포인터매개변수를 쓰는이유 1.값을 바꾸기위해 2.성능향상을 위해

	return 0;
}
int adder(int a, int c)//프로토타입과 매개변수명은 달라도 상관 없는듯?
{
	return a+c;
}
int bigger(int a, int b)
{
	if(a>b)
		return a;
	return b;//굳이 else문 쓰지않음. if 문이 처리된후의 상황이 어떠한지를 생각하며 코딩.
}
int sum3(int a, int b, int c)//굳이 어렵게 if문 여러개 쓰지말고 새로 함수 만듦.
{
	int q,w,e;
	return abs(a,b)+abs(b,c)+abs(c,a);
}
int abs(int a, int b)
{
	if(a>b) return a-b;
	return b-a;
}