#include <iostream>
#include <string>
using namespace std;

// ������
class Date {
public:
	Date(int year, int month, int day) { y = year; m = month; d = day; }
	Date() : Date(2001, 1, 1) {}  // Ĭ�Ϲ��캯��ί�е��в����Ĺ��캯��
	Date(const Date& t) { set(t.y, t.m, t.d); }

	void set(int year, int month, int day) { y = year; m = month; d = day; }
	void set(const Date& t) { set(t.y, t.m, t.d); }

	string getDate_En() const {
		return to_string(y) + "-" + to_string(m) + "-" + to_string(d);
	}

	string getDate_Cn() const {
		return to_string(y) + "��" + to_string(m) + "��" + to_string(d) + "��";
	}
private:
	int y, m, d; // ������
};

class Member {
public:
	Member(unsigned int inum, string isex, Date ibirthday, unsigned long long int iidentificationNumber) 
		: num(inum), gender(isex), birthday(ibirthday), identificationNumber(iidentificationNumber) { }
	Member():Member(0, "", Date(2023,1,1), 600000000000000000) { }
	Member(const Member& m)
		: num(m.num), gender(m.gender), birthday(m.birthday), identificationNumber(m.identificationNumber) {}
	~Member() {}

	// ������Ա����
	inline int getID() const {
		return num;
	}

	inline void displayInfo() const {
		std::cout << "ID: " << num << "\n�Ա�: " << gender << "\nBirth Date: ";
		std::cout << birthday.getDate_Cn() << "\nID Card: " << identificationNumber << std::endl;
	}

	// ��Ĭ���β�ֵ�ĳ�Ա����
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
	unsigned long long int num; // ���
	string gender; // �Ա�
	Date birthday; // ����
	unsigned int identificationNumber;
};

int main() {
	// �������ڶ���
	Date birthDate(15, 11, 1990);

	// ������Ա����
	Member Member1(1, "Male", birthDate, 1234567890);

	// ���ƹ��캯��
	Member Member2 = Member1;

	// ��ʾ��Ա��Ϣ
	std::cout << "Member 1 Info:\n";
	Member1.displayInfo();

	std::cout << "\nMember 2 Info:\n";
	Member2.displayInfo();

	// ������Ա��Ϣ
	Member1.updateInfo("Female");

	std::cout << "\nUpdated Member 1 Info:\n";
	Member1.displayInfo();

	return 0;
}