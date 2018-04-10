#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

class String
{
public:
	String();
    String(const char *inp);
	String(const String &obj) { str = NULL; setstring(obj); }
	String(long long int inp) { str = NULL; setstring(inp); }
	String(long int inp) { str = NULL; setstring((long long int)inp); }
	String(int inp) { str = NULL; setstring((long long int)inp); }
	String(short inp) { str = NULL; setstring((long long int)inp); }
	String(double inp) { str = NULL; setstring((long long int)inp); }
	~String();
	int getlength() const { return length; }
	int getstate() const { return state; }
	const char* _getchar() const {return str;}
	char* getchararr() const;
	void outputstr() const;
	void setstring();
	void setstring(const String &obj);
	void setstring(long long int inp);
	void setstring(double inp);    
    String& operator=(const String&);
    friend String operator+(const String&, const String&);
    char& operator[] (int indx);
private:
	void checkstr();
	int length;
	char *str;
    char err;
	int state;//0 - ok; 1 - alloc err; 2 - sprintf err;
};