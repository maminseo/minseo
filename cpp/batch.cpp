#include <iostream>
#include <fstream>
using namespace std;

int main() {

  ifstream input("batch.inp");
  ofstream output("batch.out");

  if(!input || !output) {
    cerr << "파일을 찾을 수 없습니다" << endl;
    return 1;
  }

  int N;
  input >> N;
  input.ignore();

  int IO = 0, CPU = 0;
  for(int n =0; n<N; n++) {
    int time, index = 1;
    while(input >> time && time != -1) {
      if(index % 2 == 1) {
        CPU += time;
      }
      else {
        IO += time;
      }
      index++;
    }
  }
    
  output << IO << " " << CPU+IO << endl;

  input.close();
  output.close();

  return 0;
}