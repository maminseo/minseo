#include <iostream>
using namespace std;

void input_process();   // �Լ� ����
//void output_process(string name, int std_no);

int main() {
	
	input_process();   // �Լ� ȣ��

	return 0;
}

void input_process() { // �Լ� ����
	string name;
	int std_no;

	while (true) {
		cout << "�̸� �Է�: ";
		cin >> name;

		cout << "�й� �Է�: ";
		cin >> std_no;

		if (std_no == 0)
			break;
		else if (std_no == 1)
			cout << "���";
		
		
	}
	
}

void output_process(string name, int std_no) {
	
	cout << endl << endl << "�Է� ���� ���" << endl;
	cout << "�̸�: " << name << endl << "�й�: " << std_no << endl;

}

