#include<iostream>
using namespace std;

int adder(int a,int b);//�Լ� ���� �ִ°��� '�Լ�(function) ������Ÿ��' �̶�� ��
int bigger(int a,int b);
int sum3(int a, int b,int c);
int abs(int a,int b);
int addArray(int a[],int size);	//�迭�� �ּ������� �迭ũ�⸦ ����.
								//int addArray(int a[size],)�� �Ұ���!!�Լ��� ����ο� �̹� �������
								//������ size�� ����Ҽ��� ����.
int main()
{
	
	/*
	char c[2];
	c={1,2};//�Ұ�. c�� �����ּ��ϻ��̱⋚���� �迭�� ��� ������ �Ѳ����� �ʱ�ȭ �Ұ���.
	*/
	char ccc[3]="as";
	cout<<ccc[0]<<"---------"<<ccc[1]<<"------"<<ccc[2]<<endl;
	//void�� �Լ��� ��ȯ���� ����. �Լ��� ��ȯ���� �Ű��� ���Ḧ �Ǵ��ϴ°� �ƴϿ���?�׷� void�� ���� �ٰŴ�?
	int a=3,b=2;
	cout<<bigger(a,b)<<endl;
	cout<<adder(a,b)<<endl;
	int c=5;
	cout<<sum3(a,b,c)<<endl;

	//������
	int n[10];
	int *p=n;
	cout<<&n[0]<<'/n'<<&n[1];//�ּҰ��� 4���̳���.int���� 4����Ʈ�̹Ƿ�.
	//�����͸Ű������� �������� 1.���� �ٲٱ����� 2.��������� ����

	return 0;
}
int adder(int a, int c)//������Ÿ�԰� �Ű��������� �޶� ��� ���µ�?
{
	return a+c;
}
int bigger(int a, int b)
{
	if(a>b)
		return a;
	return b;//���� else�� ��������. if ���� ó�������� ��Ȳ�� ������� �����ϸ� �ڵ�.
}
int sum3(int a, int b, int c)//���� ��ư� if�� ������ �������� ���� �Լ� ����.
{
	int q,w,e;
	return abs(a,b)+abs(b,c)+abs(c,a);
}
int abs(int a, int b)
{
	if(a>b) return a-b;
	return b-a;
}