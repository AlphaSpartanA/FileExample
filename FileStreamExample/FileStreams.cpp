#include<fstream>
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string inputFromFile = "";
	string filename = "";
	ifstream fileInput("textToInput.txt");
	ifstream selectFileInput(filename);
	
	fileInput.open("textToInput.txt");
	getline(fileInput, inputFromFile);
	fileInput.close();

	if (inputFromFile != "")
	{
		cout << inputFromFile << endl;
	}
	else
	{
		cout << "This file is either empty or does not exist. Check the filename and enter it again:";
	}
	cin >> filename;
	
	selectFileInput.open(filename);
	getline(selectFileInput, inputFromFile);
	selectFileInput.close();

	cout << inputFromFile << endl;
}