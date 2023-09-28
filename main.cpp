// Serhiy Leonchyk // P2 Word Counter
#include <iostream> 
#include <iomanip> 
#include <fstream> 
#include <sstream> 
#include <string> 
#include <cstdlib>

using namespace std;

int main() {
string input;
string word;
string fileName;
int totalCount = 0;
int letterCount = 0; ifstream fin; istringstream inSS(input);
cout << setw(30) << "~Word Counter~" << endl;
cout << setfill('-') << setw(65) << " " << endl;
cout << "What file would you like a report on (or type exit to quit): "; cin >> fileName;
cout << endl;
while (fileName != "exit") {
  totalCount = 0;
  letterCount = 0;
  int wordLength[9] = {0,0,0,0,0,0,0,0,0};
  fin.open(fileName); 
  if (fin.fail()) {
    cout << "Could not open input file : " << fileName << endl; fin.close();
    cin.clear();
    cout << "What file would you like a report on (or type exit to quit): "; cin >> fileName;
    cout << endl;
  }
if (!fin.fail()){
  while (fin >> word) {
  ++totalCount;
  for (int i = 0; i <= 7; ++i) { if (word.size() == i + 1) {
    ++wordLength[i];
  }
}
if (word.size() > 8) {
  ++wordLength[8];

  } 
}
cout << setfill(' ') << setw(24) << "Word Report for " << fileName << endl; cout << setw(15) << "Length:" << setw(20) << "Count: " << endl;
for (int i = 0; i < 8; ++i)
{
cout << setw(10) << i + 1 << setw(20) << wordLength[i] << endl; }
cout << setw(10) << ">8" << setw(20) << wordLength[8] << endl; cout << "Total words in the file: " << totalCount << endl << endl; cout << "What file would you like a report on (or type exit to quit): "; cin >> fileName;
}
}
return 0;
}
 
