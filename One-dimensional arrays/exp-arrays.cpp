/* Topic: One-dimentional arrays
   Created by: yepedraza*/
#include <iostream>
using namespace std;

int main()
{
  int base[5];
  int expo[5];

  for (int i = 0; i < 5; i++){
    cout << " Enter the base number " << i + 1 << " : ";
    cin >> base[i];
    cout << " Enter the exponent number " << i + 1 << " : ";
    cin >> expo[i];
    cout << endl;
  }
  system("cls");
  cout << endl;
  cout << "\t=== E X P O N E N T S ===";
  cout << endl << endl;
  for (int i = 0; i < 5; i++){
    int result = 1;
    int j = 1;
    while (j<=expo[i]){
      result = result * base[i];
      j++;
    }
  cout << "  =>" << base[i] << " ^ " << expo[i] << " = " << result << endl;
  cout << endl;
  }
  cout << endl << endl;
  system("pause");
  return 0;
}
