#include<iostream>
#include<cstring>
using namespace std;
template<class T>
int linear_search(T list[], int number, T element)
{
	int i;
	for (i = 0; i < number; i++)
    {
        if (list[i] == element)
			return 1;
    }
	return 0;
}

int linear_search(char *list[], int number, char *element)
{
	int i;
	for (i = 0; i < number; i++)
    {
        if (strcmp(list[i], element) == 0)
			return 1;
    }
	return 0;
}

int main()
{
	int number1;
    int element1;
    cout<<"Enter number of elements in int list\n";
    cin>>number1;
	int list1[number1];
    cout<<"Enter the elements for int list\n";
    int i=0;
    for(i=0;i<number1;i++)
    {
        cin>>list1[i];
    }
    cout<<"Enter the elements to be searched in int list\n";
    cin>>element1;
	if (linear_search(list1, number1, element1))
		cout << "Element is found in int list\n";
	else
		cout << "Element is not found\n";

    float element2;
    int number2;
    cout<<"Enter number of elements in float list\n";
    cin>>number2;
    float list2[number2];
    cout<<"Enter the elements for float list\n";
    for(i=0;i<number2;i++)
    {
        cin>>list2[i];
    }
    cout<<"Enter the elements to be searched in float list\n";
    cin>>element2;
	if (linear_search(list2, number2, element2))
		cout << "Element is found in float list\n";
	else
		cout << "Element is not found\n";


	int number3;
    char str[20];
    cout<<"Enter number of elements in char* list\n";
    cin>>number3;
    char *arr[number3];
	for (i = 0; i < number3; i++)
	{
		cout<<"Enter name "<<i+1<<endl;
		cin >> str;
		arr[i] = new char[strlen(str) + 1];
		strcpy(arr[i], str);
	}
    cout<<"Enter the name to be searched\n";
	cin >> str;
	if (linear_search(arr, number3, str))
		cout << "Name found\n";
	else
		cout << "Name not found\n";
	return 0;
}
