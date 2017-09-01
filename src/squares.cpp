#include <iostream>
#include <stdexcept>
#include <iomanip>
#include <string>

#define ts std::to_string

using std::range_error;				using std::cout;
using std::endl;					using std::cin;
using std::string;					using std::setw;



int sqr(int n)
{
	return n * n;
}

int calc_sqr(int n, int min, int max)
{
	if (n >= min && n <= max) return sqr(n);
	else throw range_error("Number out of range (insert a number from " + ts(min) + " to " + ts(max) + ")");
}

int main()
{
	
	int num;
	
	cout << "Insert a number to get it's square: ";
	cin >> num;
	
	try {
		int result = calc_sqr(num, 0, 999);
		cout << num << setw(25 + ts(result).size()) << result;
	} catch (range_error e) {
		cout << "ERROR: " << e.what();
	}
	
	cout << endl;
	
	return 0;
}
