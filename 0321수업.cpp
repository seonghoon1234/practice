#include <iostream>
#include <string>
#include<time.h>
using namespace std;


int main()
{
	
		int score = (rand() % 121)-10;//iostream에 정의됨	-10~+110
		
		/*
		if (score < 0)	//작업을 할때 비정상적인 경우를 제외하는 코드부터 작성하는것이 편리
		{				//예외부터 제외시켜놓고 엑기스를 만듦.
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
			switch (score/10)//90점대는9,80점대는8로 구분./ 91~99사이의 공통점이 십의자리가9라는것을 이용한것.
			{
			case9: cout << "A";
			case8: cout << "F";
			case7:case6:case5:// 이런식으로 switch문 사용가능하나 if문보다 비효율적임.
			default:
				cout << "error";
				break;
			}
		}

		cout << "점수입력: ";
		//cin >> score;
		cout << score<<endl;
	
	

	return 0;
}