#pragma once
#include<stdexcept>
class member
{
public:
	member(int grad) {
		if (checkGrade(grad)) {
			grade = grad;
		}
		else{
			throw std::out_of_range("���϶� ���� ����� �ƴմϴ�.");
		}
	}

private:
	bool checkGrade(int grade) {
		int allow[] = { 42,43 };
		for (int i = 0; i < (sizeof(allow)/4); ++i) {
			if (allow[i] == grade) {
				return true;
			}
		}
		return false;
	}
	int grade;
	int partner[2];
};