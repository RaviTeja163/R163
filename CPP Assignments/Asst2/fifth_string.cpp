#include<iostream>
#include<cstring>
using namespace std;

class String{
    char* string;
    int length;
public:
    String()
    {
        string=NULL;
        length=0;
    }
    String(char *s)
	{
		length = strlen(s);
		string = new char[length];
		strcpy(string, s);
	}
	String(char *s, int l)
	{
		length = l;
		string = new char[length];
		strcpy(string, s);
	}
	String(const String &s)
	{
		length = s.length;
		string = new char[length];
		strcpy(string, s.string);
	}
    String operator+(String s2)
	{
		String s1;
		s1.length = length + s2.length;
		if(s1.string==NULL)
		s1.string = new char[s1.length];
		strcpy(s1.string, string);
		strcat(s1.string, s2.string);
		return s1;
	}
	String operator=(String s2)
	{
		if (string == NULL)
			string = new char[s2.length];
		strcpy(string, s2.string);
		length = s2.length;
		return *(this);
	}
	char& operator[](int i)
	{
		return string[i];
	}
	~String()
	{
		if (string != NULL)
			delete string;
	}
	friend istream& operator>>(istream&, String&);
	friend ostream& operator<<(ostream&, String);
};
istream& operator>>(istream& cin, String &s)
{
	char str[50];
	cout << "Enter the string\n";
	cin >> str;
	if (s.string == NULL)
		s.string = new char[strlen(str) + 1];
	strcpy(s.string, str);
	s.length = strlen(s.string);
	return cin;
}
ostream& operator<<(ostream& cout, String c)
{
	cout << "String = " << c.string << endl;
	return cout;
}
int main()
{
	String s1, s2, s3;
	cin >> s1 >> s2;
	s3 = s1 + s2;
	cout << "s3 = s1 + s2" << endl;
	cout << s3;
	cout << "s2[0] = " << s2[0] <<endl << "s1[1] = " << s1[1] << endl;
	return 0;
}
