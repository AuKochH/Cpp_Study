/////////////////////////////////////////////////////
//
//	ð������
//
//	ʱ�临�Ӷ�ΪO(Nƽ��)������forѭ��
//
//	��һ��ѭ�����������ŵ������
//	�ڶ���ѭ�����ڶ�������ŵ������ڶ���λ��
//	�Դ�����
//	
//	�����һ��һ������ð���ʳ�ð������
//	
/////////////////////////////////////////////////////

#include<iostream>
#include<vector>

using namespace std;

void main()
{
	vector<int> v = { 9, 2, 24, -3, 4, 11, 0, 5 };

	//����ǰ
	for (int i : v)	cout << i << ends;

	//��������
	cout << endl << endl;

	for (int i = 0; i < v.size() - 1; i++)
	{
		for (int j = 0; j < v.size() - i - 1; j++)
		{
			if (v[j] > v[j + 1]) swap(v[j], v[j + 1]);
		}
	}

	//�����
	for (int i : v)	cout << i << ends;

	//��ֹ������ʧ
	getchar();
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}