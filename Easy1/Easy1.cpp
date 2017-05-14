#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	int age;
	string Name;
	string Username;
	
	cout << "Please enter your name, age, and username." << endl;
	cout << "Name:";
    cin >> Name;
    cout << "Age:";
	cin >> age;
	cout << "Username:";
	cin >> Username;
	
	cout << "Your name is " << Name << ", you are " << age << " years old, and your username is " << Username << ".";
	
	ofstream file;
	file.open("cppRedditBioList.txt");
	file << Name << " " << age << " " << Username << "\n";
	file.close();
	return 0;
}