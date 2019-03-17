#include<iostream>
#include<cstring>
using namespace std;
class String
{
	char *string;
	int length;
public:
	String()
	{
		string = NULL;
		length = 0;
	}
	String(char *str)
	{
		length = strlen(str);
		string = new char[length+1];
		strcpy(string, str);
	}
	String(char *str, int len)
	{
		length = len;
		string = new char[length+1];
		strcpy(string, str);
	}
	String(const String &str)
	{
		length = str.length;
		string = new char[length+1];
		strcpy(string, str.string);
	}
	void printString()
	{
		if (string != NULL)
			cout << string << endl;
	}
	~String()
	{
		if (string != NULL)
			delete string;
	}
};

int main()
{
	String s1("Ravi"), s2(s1);
	s1.printString();
    s2.printString();
	return 0;
}
