#include <iostream>
using namespace std;


/*
int main() 
{
	cout << 5. / 9 * (78.0 - 32.0) << endl;
	cout << 5. / 9 << endl; // �Ǽ� �������� �Ҽ����� ǥ�� 
	cout << 5 / 9 << endl;
	return 0;
}
*/


/*
int main()
{
	double ft1;		   // ft1 initially undefined
	
	double ft2 = 78.0; // ft2 initially 78.0
					   // (C style)
	cout << ft2 << endl;
	
	double ft3(78.0);  // ft3 initially 78.0
					   // (C++ constructor style)   -> ���� �ʱ�ȭ�� ���� ������ �ʱ�ȭ �����ϴ� 
	cout << ft3 << endl;                           //  (c���� ���Ǵ� ������� ��Ȯ�ϸ� ������)
	
	double ft4{ 78.0 }; // ft4 initially 78.0
						// (C++11 initializer list) -> ������ �ʱ�ȭ�� ���� ������ �ʱ�ȭ �����ϴ� (���� Ÿ�� ���� �Ұ�)
	cout << ft4 << endl;
	return 0;
}
*/


int main()
{
	double f_temp(0.0); // init with something,  ���� �ʱ�ȭ
	cout << "Enter Farenheit temperature: ";
	cin >> f_temp;
	cout << f_temp << " degrees Farenheit is " << (f_temp - 32.0) * 5 / 9
		<< " degrees Celcius" << endl;
	return 0;
}