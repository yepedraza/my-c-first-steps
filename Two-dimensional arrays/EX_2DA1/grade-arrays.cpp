/* Topic: One-dimentional arrays
   Created by: yepedraza*/
#include <iostream>
using namespace std;

int main()
{
  int numest;
  int numgra;
  float grade[20][5];
  string fname[20];
  string sname[20];
  string message = " ";
  cout << " Enter the number of students: ";
  cin >> numest;
  cout << endl;
  cout << " Enter the number of grades: ";
  cin >> numgra;
  system("cls");
  for (int i = 0; i < numest; i++){
    cout << " Enter first name of student number " << i+1 << " : ";
    cin >> fname[i];
    cout << endl;
    cout << " Enter second name of student number " << i+1 << " : ";
    cin >> sname[i];
    cout << endl;
    for (int j = 0; j < numgra;){
      cout << " => Enter grade number " << j+1 << " : ";
      cin >> grade[i][j];
      if (grade[i][j] >= 1.0 && grade[i][j] <= 5.0){
        j++;
      }
      else{
        cout << "\t=== ERROR: INVALID GRADE ===";
        cout << endl;
      }
    }
    system("cls");
  }
  system("cls");
  cout << endl;
  cout << "\t=== G R A D E S  R E P O R T ===" << endl;
  cout << endl;
  for(int i = 0; i < numest; i++){
    float sumgra = 0;
    float defgra = 0;

    cout << "Name of student number " << i+1 << " : " << fname[i] << " " << sname[i] << endl;
    cout << endl;
    for(int j = 0; j < numgra; j++){
      cout << "Grade number " << j+1 << " : " << grade[i][j] << endl;
      sumgra = (sumgra + grade[i][j]);
    }
    defgra = sumgra/numgra;
    if (defgra >= 3.0) {
      message = "  Subject approved! ";
    }
    else{
      message = " Subject desapproved! ";
    }
    cout << endl;
    cout << " The final grade is: " << defgra << endl;
    cout << message << endl;
    cout << endl;
  }
  cout << endl;
  system("pause");
  return 0;
}
