// 2024/3/13 ������. yes�� �Է� �� ������ ������� �ʴ� ���α׷� �ۼ�

#include <iostream>
#include <cstring>
#include <string>

using namespace std;


int main()
{
	
	char yes[4];

	cout << "yes�� �Է��Ͻÿ�: ";
	
	while (true) {


		cin.getline(yes, 4, '\n');

		if (strcmp(yes, "yes") == 0) {

			cout << "�¾ҽ��ϴ�" << endl;
			break;
		}

		else
			cout << "Ʋ�Ƚ��ϴ�" << endl;
	}
	

	return 0;
}