#include <iostream>
using namespace std;

//------------- Struct Math processes -------------
struct math_processes
{
	//Math Attributes
	float num1;
	float num2;
	int processes;

	//Math Functions
	void sum()
	{
		cout << "\n-----------------------------------\n";
		cout << "The sum of " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
		cout << "\n-----------------------------------\n";
	}

	void sub()
	{
		cout << "\n-----------------------------------\n";
		cout << "The subtraction of " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
		cout << "\n-----------------------------------\n";
	}

	void mult()
	{
		cout << "\n-----------------------------------\n";
		cout << "The multiplication of " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
		cout << "\n-----------------------------------\n";
	}

	void div()
	{
		cout << "\n-----------------------------------\n";
		cout << "The division of " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
		cout << "\n-----------------------------------\n";
	}
};
//-------------------------------------------------

//------------- Struct String processes -----------
struct string_processes
{
	//string Attributes
	string str1;
	string str2;
	int processes;

	//string functions
	void concatenation_string()
	{
		cout << "\n-----------------------------------\n";
		cout << "The result of adding string is: " << str1 + " " + str2;
		cout << "\n-----------------------------------\n";
	}

	void compare()
	{
		if (str1.length() == str2.length())
		{
			if (str1 == str2)
			{
				cout << "The two string are the same" << endl;
			}
			else
			{
				cout << "The two string are not the same" << endl;
				cout << "\n-----------------------------------\n";

				for (int i = 0; i < str1.length(); i++)
				{
					if (str1[i] != str2[i])
					{
						cout << "The " << i + 1 << " character is different" << "(" << str1[i] << " != " << str2[i] << ")" << endl;
					}
				}
			}
		}
		else
		{
			cout << "The two string are not the same length" << endl;
		}
	}
};
//-------------------------------------------------

//------------- Prototype Main Function -----------
void math_input(math_processes pro);
void string_input(string_processes pro);
//-------------------------------------------------

int main()
{
	int main_mood;
	math_processes pro_math{};
	string_processes pro_string{};

	do
	{
	main_input:
		cout << "-----------------------------------\n";
		cout << "Enter the mood you want: " << endl;
		cout << "1- Math processes" << endl;
		cout << "2- String processes" << endl;
		cout << "3- Exit" << endl;
		cout << "-----------------------------------\n";
		cin >> main_mood;
		cout << "-----------------------------------\n";

		switch (main_mood)
		{
		case 1:
			math_input(pro_math);
			break;
		case 2:
			string_input(pro_string);
			break;
		case 3:
			break;
		default:
			cout << "Enter availd number: " << endl;
			goto main_input;
		}
	} while (main_mood != 3);

	return 0;
}

//------------------ User Input -------------------- 
void math_input(math_processes pro)
{
	there:
	cout << "\n-----------------------------------\n";
	cout << "Enter the first number: " << endl;
	cin >> pro.num1;
	cout << "-----------------------------------\n";

	cout << "\n-----------------------------------\n";
	cout << "Enter the second number: " << endl;
	cin >> pro.num2;
	cout << "-----------------------------------\n";
	do
	{
	input_processe_math:
		cout << "\n-----------------------------------\n";
		cout << "Enter the operation you want : " << endl;
		cout << "1- Summation" << endl;
		cout << "2- Subtraction" << endl;
		cout << "3- Multiblication" << endl;
		cout << "4- Division" << endl;
		cout << "5- Enter new numbers" << endl;
		cout << "6- Return to main page" << endl;
		cin >> pro.processes;
		cout << "-----------------------------------\n";

		switch (pro.processes)
		{
		case 1:
			pro.sum();
			break;
		case 2:
			pro.sub();
			break;
		case 3:
			pro.mult();
			break;
		case 4:
			pro.div();
			break;
		case 5:
			goto there;
			break;
		case 6:
			break;
		default:
			cout << "Enter availd number: " << endl;
			goto input_processe_math;
		}
	} while (pro.processes != 6);
}

void string_input(string_processes pro)
{
to:
	cout << "\n-----------------------------------\n";
	cout << "Enter the first string: " << endl;
	cin >> pro.str1;
	cout << "-----------------------------------\n";

	cout << "\n-----------------------------------\n";
	cout << "Enter the second string: " << endl;
	cin >> pro.str2;
	cout << "-----------------------------------\n";
	do
	{
	input_processe_string:
		cout << "\n-----------------------------------\n";
		cout << "Enter the operation you want : " << endl;
		cout << "1- Add two string" << endl;
		cout << "2- compare two string" << endl;
		cout << "3- Enter new numbers" << endl;
		cout << "4- Return to main page" << endl;
		cin >> pro.processes;
		cout << "-----------------------------------\n";

		switch (pro.processes)
		{
		case 1:
			pro.concatenation_string();
			break;
		case 2:
			pro.compare();
			break;
		case 3:
			goto to;
			break;
		case 4:
			break;
		default:
			cout << "Enter availd number: " << endl;
			goto input_processe_string;
		}
	} while (pro.processes != 4);
}
//-------------------------------------------------
