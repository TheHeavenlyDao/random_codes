#include <iostream>
#include <string>
#include <vector>

using std::string;			using std::vector;
using std::cin;				using std::cout;
using std::endl;



double average(vector<double> v)
{
	double r_sum;
	vector<double>::size_type vc_size = v.size();
	
	for (vector<double>::size_type i = 0; i != vc_size; ++i) {
		r_sum += v[i];
	}
	
	return r_sum / vc_size;
}

int main()
{
	cout << "Enter a list of numbers followed by end of file (^D): ";
	
	vector<double> v;
	
	for (double tmp; cin >> tmp;) {
		v.push_back(tmp);
	}
	
	cout << "The average is: " << average(v) << endl;
	
}
