#include <iostream>
using namespace std;

void encrypt(string text, int s)
{
	string result = "";

	for (int i=0;i<text.length();i++)
	{
		if (isupper(text[i]))
			result += char(int(text[i]+s-65)%26 +65);

	else
		result += char(int(text[i]+s-97)%26 +97);
	}

	cout<<result;
}
