#include <iostream>
#include <string>
#include<time.h>
using namespace std;


int main()
{
	
		int score = (rand() % 121)-10;//iostream�� ���ǵ�	-10~+110
		
		/*
		if (score < 0)	//�۾��� �Ҷ� ���������� ��츦 �����ϴ� �ڵ���� �ۼ��ϴ°��� ��
		{				//���ܺ��� ���ܽ��ѳ��� ���⽺�� ����.
			cout << "error";
			return 0;
		}
		if (score > 100) 
		{
			cout << "error";
			return 0;
		}
		if (score >= 99)
		{
			cout << "A";
			return 0;
		}
		if (score >= 80)
		{
			cout << "A";
			return 0;
		}
		*/
		for (int i=0;i<10;i++) 
		{
			cin >> score;
			switch (score/10)//90�����9,80�����8�� ����./ 91~99������ �������� �����ڸ���9��°��� �̿��Ѱ�.
			{
			case9: cout << "A";
			case8: cout << "F";
			case7:case6:case5:// �̷������� switch�� ��밡���ϳ� if������ ��ȿ������.
			default:
				cout << "error";
				break;
			}
		}

		cout << "�����Է�: ";
		//cin >> score;
		cout << score<<endl;
	
	

	return 0;
}