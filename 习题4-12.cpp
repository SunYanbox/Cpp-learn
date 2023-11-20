#include <iostream>
using namespace std;

class DataType {
private:
	int data_int;
	string data_string;
	double data_double;
public:
	void set_data(int idata) { data_int = idata; }
	void set_data(string idata) { data_string = idata; }
	void set_data(double idata) { data_double = idata; }
	int get_int_data() { return data_int; }
	string get_string_data() { return data_string; }
	double get_double_data() { return data_double; }

	DataType() : data_int(0), data_string(""), data_double(0) {}
};

int main()
{
	DataType a;
	a.set_data(5.12);
	string b = "Hello";
	a.set_data(b);
	a.set_data(2);
	cout << "整型数据：" << a.get_int_data() << endl;
	cout << "浮点数据：" << a.get_double_data() << endl;
	cout << "字符串数据：" << a.get_string_data() << endl;
}