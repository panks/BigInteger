#include <string>
#define MAX 10000 // for strings

using namespace std;
//-------------------------------------------------------------
class BigInteger
{
private:
	string number;
	bool sign;
public:
	BigInteger(); // empty constructor initializes zero
	BigInteger(string s); // "string" constructor
	BigInteger(string s, bool sin); // "string" constructor
	BigInteger(int n); // "int" constructor
	void setNumber(string s);
	const string& getNumber() const; // retrieves the number
	void setSign(bool s);
	const bool& getSign() const;
	BigInteger absolute() const; // returns the absolute value
	void operator = (BigInteger b);
	bool operator == (BigInteger b);
	bool operator != (BigInteger b);
	bool operator > (BigInteger b);
	bool operator < (BigInteger b);
	bool operator >= (BigInteger b);
	bool operator <= (BigInteger b);
	BigInteger& operator ++(); // prefix
	BigInteger  operator ++(int); // postfix
	BigInteger& operator --(); // prefix
	BigInteger  operator --(int); // postfix
	BigInteger operator + (BigInteger b) const;
	BigInteger operator - (BigInteger b) const;
	BigInteger operator * (BigInteger b) const;
	BigInteger operator / (BigInteger b) const;
	BigInteger operator % (BigInteger b) const;
	BigInteger& operator += (BigInteger b);
	BigInteger& operator -= (BigInteger b);
	BigInteger& operator *= (BigInteger b);
	BigInteger& operator /= (BigInteger b);
	BigInteger& operator %= (BigInteger b);
	BigInteger& operator [] (int n);
	BigInteger operator -(); // unary minus sign
        BigInteger pow(BigInteger n) const;
	operator string(); // for conversion from BigInteger to string
private:
	bool equals(BigInteger n1, BigInteger n2);
	bool less(BigInteger n1, BigInteger n2);
	bool greater(BigInteger n1, BigInteger n2);
	static string add(string number1, string number2);
	static string subtract(string number1, string number2);
	static string multiply(string n1, string n2);
	static pair<string, long long> divide(string n, long long den);
	string toString(long long n) const;
	long long toInt(string s) const;
};
