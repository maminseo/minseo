//기초학습25p 
//해보고 싶은것 : 1. 배열입력(사이즈 무제한 0이 입력되면 넣기 종료) -> 포인트를 써야할듯?
// 2. 사이즈 입력 후 사이즈 수 만큼 배열 입력

#include <iostream>
using namespace std;

void makeArray1(int arr[], int size); // size 입력 후 size 크기만큼 배열 입력
int addArray(int arr[], int size); //배열값 모두 더하기
void makeDouble(int arr[], int size); // 배열 값 두배
void printArray(int arr[], int size); // 배열 출력



int main() {
    int size = 0;

    cout << "배열의 사이즈를 입력하시오:";
    cin >> size;

    int arr[size];
    makeArray1(arr, size);
    
    int sum = addArray(arr, size);
    cout << "배열의 합은:" << sum << endl;

    makeDouble(arr, size);
    printArray(arr, size);

    return 0;
}

void makeArray1(int arr[], int size) {
    for(int i=0; i<size; i++) {
        int n;
        cout << "정수를 입력하시오:";
        cin >> n;
        arr[i] = n;
    } 
}


int addArray(int arr[], int size) {
    int sum = 0;
    for(int i=0; i<size; i++)
        sum += arr[i];

    return sum;
}

void makeDouble(int arr[], int size) {
    for(int i=0; i<size; i++) {
        arr[i] *= 2;
    }
}

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}