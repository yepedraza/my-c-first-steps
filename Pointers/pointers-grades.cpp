/* Topic: Pointers
   Created by: yepedraza*/
#include <iostream>
using namespace std;

int main()
{
  int grade1, grade2, grade3;
  int *pgrade1 = NULL, *pgrade2 = NULL, *pgrade3 = NULL;
  pgrade1 = &grade1;
  pgrade2 = &grade2;
  pgrade3 = &grade3;
  int def = 0;

  cout << " Enter the first grade: ";
  cin >> grade1;
  cout << endl;
  cout << " Grade 1 memory address: ";
  cout << &grade1 << endl << endl;
  cout << " Enter the second grade: ";
  cin >> grade2;
  cout << endl;
  cout << " Grade 2 memory address: ";
  cout << &grade2 << endl << endl;
  cout << " Enter the third grade: ";
  cin >> grade3;
  cout << endl;
  cout << " Grade 3 memory address: ";
  cout << &grade3 << endl << endl;

  def = (*pgrade1 * 0.3)+(*pgrade2*0.3)+(*pgrade3*0.4);
  cout << " The final grade is: " << def << endl;
  cout << endl;
  system("pause");
  return 0;
}
