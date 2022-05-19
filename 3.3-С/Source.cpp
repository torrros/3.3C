#include <iostream>
#include "Rational.h"
 using namespace std;

 int main()
{
	 Rational a;
	 Rational b(3, 4);
	 cin >> a;

	 cout << a << "|" << b << "=" << a / b << endl;
	 if (a == b)
		 cout << "Equal";
	 else
		 cout << "Not equal";
	 cout << endl;

	 if (a > b)
		 cout << "Great";
	 else
		 cout << "Less";
	 cout << endl;

	 if (a < b)
		 cout << "Great";
	 else
		 cout << "Less";
	 cout << endl;

	 cout << "a++ -" << a++ << endl;
	 cout << "++a -" << ++a << endl;
	 cout << "a-- -" << a-- << endl;
	 cout << "--a -" << --a << endl;
	
	 cout << "count - " << Rational::Count() << endl;
	 cout << "count - " << Object::Count() << endl;
}