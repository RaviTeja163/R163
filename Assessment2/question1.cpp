#include<iostream>
#include<cstring>
using namespace std;
class MyString{
    char* name;
    int length;
public:
    MyString()
    {
        name=NULL;
        length=0;
    }
    MyString(char* str, int len)
    {
        length = len;
		name = new char[length+1];
        strcpy(name,str);
    }
    MyString(const MyString &s)
    {
        length = s.length;
		name = new char[length+1];
		strcpy(name, s.name);
    }
    ~MyString()
	{
		if (name != NULL)
			delete name;
	}
    MyString operator+(MyString s2)
	{
		MyString s1;
		s1.length = length + s2.length;
		if(s1.name==NULL)
		      s1.name = new char[s1.length];
		strcpy(s1.name, name);
		strcat(s1.name, s2.name);
		return s1;
	}
	MyString operator=(MyString s2)
	{
		if (name == NULL)
			name = new char[s2.length];
		strcpy(name, s2.name);
		length = s2.length;
		return *(this);
	}
    int operator<(MyString s2)
    {
        int i,max;
        if(length>=s2.length)
            max=length;
        else
            max=s2.length;
        for(i=0;i<max;i++)
        {
            if((name[i]-s2.name[i])<0)
                return 1;
            else if((name[i]-s2.name[i])>0)
                return -1;
        }
        return 0;
    }
friend istream& operator>>(istream&, MyString&);
friend ostream& operator<<(ostream&, MyString);
friend void sort(MyString s[],int num);
};

void sort(MyString s[], int num)
{
    int i,j;
    MyString str1;
    for(i=0;i<num-1;i++)
    {
        for(j=0;j<num-i-1;j++)
        {
            if((s[j+1]<s[j])==1)
            {
                str1=s[j+1];
                s[j+1]=s[j];
                s[j]=str1;
            }
        }
    }
    for(i=0;i<num;i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
}
istream& operator>>(istream& cin, MyString &s)
{
	char str[50];
	cin >> str;
	if (s.name == NULL)
		s.name = new char[strlen(str) + 1];
	strcpy(s.name, str);
	s.length = strlen(s.name);
	return cin;
}
ostream& operator<<(ostream& cout, MyString s)
{
	cout << s.name;
	return cout;
}

int main()
{
    MyString s1, s2, s3;
    int i,num,j;
    cout << "Enter 2 strings\n";
	cin >> s1 >> s2;
    i=s1<s2;
    if(i==1)
        cout<<s1<<"<"<<s2<<endl;
    else if(i==-1)
        cout<<s1<<">"<<s2<<endl;
    else if(i==0)
        cout<<s1<<"="<<s2<<endl;
	s3 = s1 + s2;
	cout << "s3 = s1 + s2" << endl;
	cout << s3 << endl;
    cout<<"Enter the number of objects\n";
    cin>>num;
    MyString str[num];
    cout<<"Enter objects\n";
    for(j=0;j<num;j++)
    {
        cin>>str[j];
    }
    sort(str,num);
    return 0;
}
