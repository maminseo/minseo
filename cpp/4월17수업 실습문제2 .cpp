#include <iostream>
using namespace std;

class Circle {
	int radius; 
public:
	void setRadius(int radius);
	double getArea();
}; 

void Circle::setRadius(int radius) {
    this->radius = radius;
}

double Circle::getArea() { return 3.14*radius*radius; }

int main() {
	int n, radius;
	int count = 0;

	cout << "원의 개수:";
	cin >> n; 

	Circle *pArray = new Circle [n];
	
	for(int i=0; i<n; i++) {
		cout << "원 " << i+1 << "의 반지름:"; 
		cin >> radius;
		pArray[i].setRadius(radius); 

		if(pArray[i].getArea() > 100)
			count++;
	}

	/*
	Circle* p = pArray;
	for(int i=0; i<n; i++) {
		if(p->getArea() > 100) 
			count++;
		p++;
	} */


	cout << endl << "면적이 100보다 큰 원은" << count << "개 입니다" << endl;

	delete [] pArray; 
}
