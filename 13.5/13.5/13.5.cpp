// 13.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>


using namespace std;


int main()
{
	size_t pos;
	string line;
	fstream baby;
	cout << "Enter the year ";
	string year;
	cin >> year;

	baby.open("Babynameranking" + year + ".txt");

	if (baby.fail()) {
		cout << "Cant open file" << endl;
		return 0;

	}

	cout << "Enter the gender: ";
	char gender;
	cin >> gender;
	cout << endl;

	cout << "Enter the name ";

	string name;

	cin >> name;
	cout << endl;

	int rank;
	int bnum;
	int gnum;
	string bname, gname;

	while (!baby.eof())
	{
		baby >> rank >> bname >> bnum >> gname >> gnum;
		if (name == bname && gender == 'M')

			cout << name << " is ranked " << rank << "in year " << year << endl;

		else if (name == gname && gender == 'F')
			cout << name << " is ranked " << rank << "in year " << year << endl;

		baby.close();

		/* Could not get this program to function properly. I also tried the following codes
		below and could not get those to work either.
		#include "stdafx.h"
		#include <iostream>
		#include <fstream>
		#include <string>


		using namespace std;


		int main()
		{
		size_t pos;
		string line;
		fstream baby;
		cout << "Enter the year ";
		string year;
		cin >> year;

		baby.open("Babynameranking" + year + ".txt");

		if (baby.fail()) {
		cout << "Cant open file" << endl;
		return 0;

		}

		cout << "Enter the gender: ";
		string gender;
		cin >> gender;
		cout << endl;

		cout << "Enter the name ";

		string name;

		cin >> name;
		cout << endl;

		int id;

		while (getline(baby,line))
		{
		if (line.find(name) != string::npos)
		baby >> id;
		}

		cout << id;


		return 0;
		}




		NEXT TRY:


		// 13.5.cpp : Defines the entry point for the console application.
		//

		#include "stdafx.h"
		#include <iostream>
		#include <fstream>
		#include <string>


		using namespace std;


		int main()
		{
		size_t pos;
		string line;
		fstream baby;
		cout << "Enter the year ";
		string year;
		cin >> year;

		baby.open("Babynameranking" + year + ".txt");

		if (baby.fail()) {
		cout << "Cant open file" << endl;
		return 0;

		}

		cout << "Enter the gender: ";
		string gender;
		cin >> gender;
		cout << endl;

		cout << "Enter the name ";

		string name;

		cin >> name;
		cout << endl;

		string id = "";

		while (getline(baby,line))
		{
		if (line.find(name) != string::npos)
		cout << line << endl;
		baby.seekp(-5, ios::cur);
		baby >> id;


		}

		cout << id;


		return 0;
		}




		Current: (Tried to count lines with counter variable, but it comes back with 1000 every time).


		// 13.5.cpp : Defines the entry point for the console application.
		//

		#include "stdafx.h"
		#include <iostream>
		#include <fstream>
		#include <string>


		using namespace std;


		int main()
		{
		size_t pos;
		string line;
		fstream baby;
		cout << "Enter the year ";
		string year;
		cin >> year;

		baby.open("Babynameranking" + year + ".txt");

		if (baby.fail()) {
		cout << "Cant open file" << endl;
		return 0;

		}

		cout << "Enter the gender: ";
		string gender;
		cin >> gender;
		cout << endl;

		cout << "Enter the name ";

		string name;

		cin >> name;
		cout << endl;

		int count = 0;

		while (getline(baby,line))
		{
		if (line.find(name) != string::npos)
		cout << line << endl;

		count++;




		}

		cout << count;


		return 0;
		}

		*/
	}

}