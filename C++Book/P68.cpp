//////////////////////////////////////////////////
//	������֮�ͣ���'��Ĭ�ϲ����ĺ���'
//////////////////////////////////////////////////

#include <iostream>

using namespace std;

//��Ĭ�ϲ����ĺ���
int sum(int a = 3, int b = 4, int c = 5)
{
	return a + b + c;
}

int main()
{
	cout << "�����������ʹ��Ĭ�ϲ����� " << sum() << endl << endl;
	cout << "ʹ�ò���a=6��b=8��c=10�� " << sum(6, 8, 10) << endl;
	
	int a;
	cin >> a;

	return 0;
}