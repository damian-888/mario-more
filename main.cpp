#include <stdlib.h>
#include <iostream>
#include <string>
#include <limits.h>

using namespace std;

int height = 0;
string space = " ";
string hash = "#";
string gap = "  ";

int main() {
  //get height if between 1 & 8 ink, otherwise c.fail, c.clear, c.ignore;
  while(true) {
    cout << "Enter height: ";
    cin >> height;

    if(cin.fail() || height < 0 || height > 8) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else{
      break;
    }
  }

  int more_height = height + height + 2;

  //loop lines - width of line = height + height + 2 for the middle spaces and two heights for both pyrimids
  for(int i = 1; i <= height; i++) {
    int hashes = i;
    int spaces = height - i;
    
    //Print left spaces
    for(int l = 0; l < spaces; l++) {
      cout << " ";
    }
    //print left hashes
    for(int lh = 0; lh < hashes; lh++) {
      cout << "#";
    }
    
    //Print gap
    cout << "  ";

    //Print right hashes
    for(int rh = 0; rh < hashes; rh++) {
      cout << "#";
    }

    //print endl
    cout << endl;

  }
}
