#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> ReadString(const string Pattern, const string UserInput);

int main(int argc, char* argv[])
{

	vector<string>arr1;
	string userStr, userPattern;

	std::cout << "Type the pattern character(s), in the end hit return " << std::endl;
	std::cin >> userPattern;

	std::cout << "Type a string, in the end hit return " << std::endl;
	std::cin >> userStr;

	if (userPattern.length() > 0 && userStr.length() > 0)
		arr1 = ReadString(userPattern, userStr);
	
	for (int i = 0; i < arr1.size(); i++)
	{
		cout << arr1[i] << endl;
	}

}

vector<string> ReadString(const string Pattern, const string UserInput)
{
	vector<string>arr1;

	int pos, leng = Pattern.length();
	string arrString, found;


	for (int i = 0; i < UserInput.length(); i++)
	{
		pos = i + 1;

		if (Pattern == UserInput.substr(i, leng))
		{
			arrString = "Pattern " + Pattern + " found at position: " + to_string(pos);
			arr1.push_back(arrString);
		}
	}
	return arr1;
}