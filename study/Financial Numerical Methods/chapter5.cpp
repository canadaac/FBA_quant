#include <iostream>
#include <cmath>
using namespace std;


/*
int main()
{
	cout << "Enter three point : ";
	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	double a = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
	double b = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
	double c = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

	double A = acos((a * a - b * b - c * c) / (-2 * b * c));
	double B = acos((b * b - a * a - c * c) / (-2 * a * c));
	double C = acos((c * c - b * b - a * a) / (-2 * a * b));

	const double PI = 3.14159;
	cout << "the three angles are " << A * 180 / PI << " "
		<< B * 180 / PI << " " << C * 180 / PI << endl;

	return 0;
}
*/


/*
int main()
{
	cout << "Enter a lowercase letter : " << endl;
	char lowercaseletter;
	cin >> lowercaseletter;
	
	char uppercaseletter = static_cast<char>('A' + (lowercaseletter - 'a'));

	cout << "The corresponding uppercase letter is " << uppercaseletter << endl;

	return 0;
}
*/


/*
int main() {
	cout << "Enter a lowercase letter : ";
	char lowercaseletter;
	cin >> lowercaseletter;

	cout << char(toupper(lowercaseletter)) << endl;

	return 0;
}
*/



#include <string>

int main() {
	string message = "ABCD";
	cout << message.length() << endl;
	cout << message[0] << endl;
	string s = "Bottom";
	cout << s.length() << endl;
	cout << s.at(1) << endl;
	cout << s[0] << endl;
	s[0] = 'P';
	cout << s << endl;
	string s3 = message + " " + s;
	cout << s3 << endl;
}


#