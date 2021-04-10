// Lagman_ModifiedVowelCount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Modified to add 3 more letters to count (Letters J,M, and L)

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

const string fileName = "Constitution_of_the_United_States.html";

int main(int argc, char* argv[])
{
	// The executable name and at least one argument?
	if (argc < 2)
	{
		cout << "Error - Please specify a file to analyze" << endl;
		system("pause");
		return 1;
	}

	//// For debugging purposes only
	//for (int i = 0; i < argc; i++)
	//{
	//	cout << i << ":" << argv[i] << endl;
	//}

	ifstream inFile;
	inFile.open(argv[1]);
	if (!inFile)
	{
		cout << "Error with file name.. " << endl;
		return 1;
	}

	///////////////////////
	// Work here with open file.....

	// Read in the lines in the file
	ifstream fs;

	fs.open(fileName);
	if (!fs)
	{
		cout << "Error opening file" << '"' << fileName << '"' << endl;
	}
	else
	{
		// Opening Banner
		cout << setw(60) << setfill('*') << '*' << endl;
		cout << right << setw(12) << '*' << " Welcome to my Letter Count Program " << setw(12) << setfill('*') << '*' << endl;
		cout << setw(60) << setfill('*') << '*' << endl;
		cout << endl;

		int a, e, i, o, u, j, l, m;

		a = 0;
		e = 0;
		i = 0;
		o = 0;
		u = 0;
		j = 0;
		l = 0;
		m = 0;

		char v;

		while (!fs.eof() && fs >> v)
		{
			if (v == 'a' || v == 'A')
			{
				a++;
			}
			else if (v == 'e' || v == 'E')
			{
				e++;
			}
			else if (v == 'i' || v == 'I')
			{
				i++;
			}
			else if (v == 'o' || v == 'O')
			{
				o++;
			}
			else if (v == 'u' || v == 'U')
			{
				u++;
			}

			else if (v == 'j' || v == 'J')
			{
				j++;
			}
			else if (v == 'l' || v == 'L')
			{
				l++;
			}
			else if (v == 'm' || v == 'M')
			{
				m++;
			}
		}

		// Analyzing file
		cout << "Analyzing file " << "'" << fileName << "'" << "..." << endl;
		cout << endl;

		// Output
		cout << left << setw(60) << setfill('.') << "The number of A's: " << a << endl;
		cout << left << setw(60) << setfill('.') << "The number of E's: " << e << endl;
		cout << left << setw(60) << setfill('.') << "The number of I's: " << i << endl;
		cout << left << setw(60) << setfill('.') << "The number of O's: " << o << endl;
		cout << left << setw(60) << setfill('.') << "The number of U's: " << u << endl;
		cout << left << setw(60) << setfill('.') << "The vowel count is: " << a + e + i + o + u << endl;
		cout << endl;
		cout << left << setw(60) << setfill('.') << "The number of J's: " << j << endl;
		cout << left << setw(60) << setfill('.') << "The number of L's: " << l << endl;
		cout << left << setw(60) << setfill('.') << "The number of M's: " << m << endl;
		cout << left << setw(60) << setfill('.') << "The total count of J's, L's, and M's is: " << j + l + m << endl;
	}

	///////////////////////
	fs.close();

	inFile.close();

	system("pause");
	return 0;
}



