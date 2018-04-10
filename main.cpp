#include "string.h"

int main()
{
	double inp;
    int i = 0;
	cin >> inp;
    const String str1(inp);
    String str2;
    String str3(inp);
    str3.outputstr();
    str2 = str1;
    str2 = 4.6 + str1 + 2 + str2;
    str2.outputstr();
    cout << str2[2] << endl;
	return 0;
}

