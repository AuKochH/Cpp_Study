//////////////////////////////////////////////////
//	����ģ�� template "�����ֵ"
//////////////////////////////////////////////////

#include <iostream>

using namespace std;

//����ģ������T,T������������,��������ΪT,����������ҲΪT
template <class T>
T myAbs(T parm)
{
	return parm > 0 ? parm : -parm;
}

int main()
{
	int i = 50;
	float f = -3.25f;
	long l = 723358;

	cout << myAbs(i) << endl;
	cout << myAbs(f) << endl;
	cout << myAbs(l) << endl;

	cin >> i;
}