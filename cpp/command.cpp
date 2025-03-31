#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
  unordered_map<string, string> unixToDos = {
    {"ls", "dir"},
    {"mkdir", "md"},
    {"rmdir", "rd"},
    {"rm", "del"},
    {"cp", "copy"},
    {"mv", "rename"},
    {"clear", "cls"},
    {"pwd", "cd"},
    {"cat", "type"},
    {"man", "help"},
    {"date", "time"},
    {"find", "find"},
    {"grep", "findstr"},
    {"more", "more"},
    {"diff", "comp"},
    {"ed", "edlin"},
    {"sort", "sort"},
    {"lsattr", "attrib"},
    {"pushd", "pushd"},
    {"popd", "popd"},
    {"ps", "taskmgr"},
    {"kill", "tskill"},
    {"halt", "shutdown"},
    {"ifconfig", "ipconfig"},
    {"fsck", "chkdsk"},
    {"free", "mem"},
    {"debugfs", "scandisk"},
    {"lpr", "print"}
  };

 
  unordered_map<string, string> dosToUnix;
  for (const auto &pair : unixToDos) {
      dosToUnix[pair.second] = pair.first;
  }

  ifstream input("command.inp");
  ofstream output("command.out");

  if(!input || !output) {
    cerr << "파일을 찾을 수 없습니다" << endl;
    return 1;
  }

  int N;
  input >> N;
  input.ignore();

  vector<string> commands;

  for (int i = 0; i < N; i++) {
    string command;
    input >> command;
    commands.push_back(command);
  }

  for (const auto &command : commands) {
    if (unixToDos.find(command) != unixToDos.end()) {
      output << command << " -> " << unixToDos[command] << endl;
    } else if (dosToUnix.find(command) != dosToUnix.end()) {
      output << command << " -> " << dosToUnix[command] << endl;
    } else {
      output << "찾을수없음 " << endl;
    }
  }

  input.close();
  output.close();

  return 0;
}
