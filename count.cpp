#include <string>
#include <cstdio>
#include <iostream>

using namespace std;

/* count digits, white space, others */

/* TODO: (1) fix all errors; 
 *       (2) add code for painting histogram in console,
 *           cf. picture in https://en.wikipedia.org/wiki/Histogram
 * 
 */

int main()
{
	string src("12 plus 45 minus 39 is 18\n");
	int i = 0;
	int nwhite, nother;
	const int size = 10;
	int ndigit[size] = { 0 };
	nwhite = nother = 0;

	char c;
	while ((c = src[i++]) != '\0')
		if (c >= '0' && c <= '9')
			++ndigit[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	
	cout << "source string: " << src << endl << "digits =";
	for (int i = 0; i < size; ++i)
		cout << " " << ndigit[i];
	
	cout << ", white space = " << nwhite 
		 << ", other = " << nother << endl;

	//histogram
	cout << " " << "white space: ";
	for (int i = 0; i < nwhite; ++i)
		cout << "=";
	cout << endl;

	cout << "      " << "others: ";
	for (int i = 0; i < nother; ++i)
		cout << "=";
	cout << endl;

	for (int i = 0; i < size; ++i) {
		if (ndigit[i]) {
			cout << "	   " << i << ": ";
			for (int j = 0; j < ndigit[i]; ++j)
				cout << "=";
			cout << endl;
		}
	}
}
