#include <iostream>
#include <string>
using namespace std;

// 日期类
class Date {
public:
	Date(int year, int month, int day) { y = year; m = month; d = day; }
	Date() : Date(2001, 1, 1) {}  // 默认构造函数委托到有参数的构造函数
	Date(const Date& t) { set(t.y, t.m, t.d); }

	void set(int year, int month, int day) { y = year; m = month; d = day; }
	void set(const Date& t) { set(t.y, t.m, t.d); }

	string getDate_En() const {
		return to_string(y) + "-" + to_string(m) + "-" + to_string(d);
	}

	string getDate_Cn() const {
		return to_string(y) + "年" + to_string(m) + "月" + to_string(d) + "日";
	}
private:
	int y, m, d; // 年月日
};

class Member {
public:
	Member(unsigned int inum, string isex, Date ibirthday, unsigned long long int iidentificationNumber) 
		: num(inum), gender(isex), birthday(ibirthday), identificationNumber(iidentificationNumber) { }
	Member():Member(0, "", Date(2023,1,1), 600000000000000000) { }
	Member(const Member& m)
		: num(m.num), gender(m.gender), birthday(m.birthday), identificationNumber(m.identificationNumber) {}
	~Member() {}

	// 内联成员函数
	inline int getID() const {
		return num;
	}

	inline void displayInfo() const {
		std::cout << "ID: " << num << "\n性别: " << gender << "\nBirth Date: ";
		std::cout << birthday.getDate_Cn() << "\nID Card: " << identificationNumber << std::endl;
	}

	// 带默认形参值的成员函数
	void updateInfo(const std::string& igender = "", 
		const Date& ibirthDate = Date(), unsigned long long int iidentificationNumber = 600000000000000000) {
		if (!igender.empty()) {
			gender = igender;
		}
		if (true) {
			birthday = ibirthDate;
		}
		if (0<iidentificationNumber<1000000000000000000) {
			identificationNumber = iidentificationNumber;
		}
	}

private:
	unsigned long long int num; // 编号
	string gender; // 性别
	Date birthday; // 生日
	unsigned int identificationNumber;
};

int main() {
	// 创建日期对象
	Date birthDate(15, 11, 1990);

	// 创建人员对象
	Member Member1(1, "Male", birthDate, 1234567890);

	// 复制构造函数
	Member Member2 = Member1;

	// 显示人员信息
	std::cout << "Member 1 Info:\n";
	Member1.displayInfo();

	std::cout << "\nMember 2 Info:\n";
	Member2.displayInfo();

	// 更新人员信息
	Member1.updateInfo("Female");

	std::cout << "\nUpdated Member 1 Info:\n";
	Member1.displayInfo();

	return 0;
}