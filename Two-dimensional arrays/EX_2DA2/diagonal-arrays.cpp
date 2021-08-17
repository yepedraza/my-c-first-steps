/* Topic: Two-dimentional arrays
   Created by: yepedraza*/
#include <iostream>
using namespace std;

int main()
{
  int numbers[4][4];
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4;){
      cout << "   Enter row number [" << i <<"] column [" << j <<"] : ";
      cin >> numbers[i][j];
      if(numbers[i][j] >= 1 && numbers[i][j] <=9){
        j++;
      }
      else{
        cout << endl;
        cout << "\t=== ERROR: NUMBER OUT OF RANGE ===" << endl;
        cout << endl;
      }
    }
    cout << endl;
  }
  system("cls");
  cout << endl;
  cout << "\t=== ENTERED MATRIX ===" << endl;
  cout << endl;
  for (int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      cout << numbers[i][j] << "  ";
    }
    cout << endl;
  }
  cout << endl << endl;
  cout << "\t=== DIAGONAL ===" << endl;
  cout << endl << endl;
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      if (i == j) {
        cout << numbers[i][j];
      }
      else {
        cout << "  ";
      }
    }
    cout << endl;
  }
  cout << endl << endl;
  system("pause");
  return 0;
}
