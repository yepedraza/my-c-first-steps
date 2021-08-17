// Topic: Conditionals in C++
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string emp_name;
  int emp_id;
  string profession;
  long basic_salary;
  int extrah;
  long sales;
  int extraval;
  long extrapay = 0;
  long bonus = 0;
  long benefits =0;
  long totalpay;

  cout << " Enter the employee's name: ";
  getline(cin, emp_name);
  cout << " Enter the employee's ID: ";
  cin >> emp_id;
  cout << " Enter the employee's basic salary: ";
  cin >> basic_salary;
  cout << " Enter the employee's profession (Worker - Seller): ";
  cin >> profession;

  if(profession == "worker" || profession == "WORKER"){
    cout << endl;
    cout << "\t==> Enter the number of extra hours: ";
    cin >> extrah;
    cout << "\t==> Enter the extra hours value: ";
    cin >> extraval;
    extrapay = (extrah*extraval);
    bonus = (basic_salary*0.2);
    benefits = (basic_salary*0.05);
    totalpay = ((basic_salary+extrapay+bonus)-benefits);
    system("cls");

    cout << endl << endl;
    cout << "\t=== NONAME CORPORATION ===";
    cout << endl << endl;
    cout << " Employee's name: " << emp_name;
    cout << endl;
    cout << " ID: " << emp_id;
    cout << endl;
    cout << " Profession: " << profession;
    cout << endl;
    cout << " Basic salary: " << basic_salary;
    cout << endl;
    cout << " Extra hours worked: " << extrah;
    cout << endl;
    cout << " Extra hours value: " << extraval;
    cout << endl << endl;
    cout << "  ==> Total bonus: " << bonus;
    cout << endl;
    cout << " ==> Total extra hours: " << extrapay;
    cout << endl;
    cout << " ==> Total benefits: " << benefits;
    cout << endl;
    cout << " ==> Total paid: " << totalpay;
    cout << endl;
  }
  else{
    if (profession == "seller" || profession == "SELLER"){
      cout << endl;
      cout << "\t==> Enter the total sales: ";
      cin >> sales;
      bonus = (sales*0.02);
      benefits = (sales*0.05);
      totalpay = ((basic_salary+bonus)-benefits);
      system("cls");
      cout << endl << endl;
      cout << "\t=== NONAME CORPORATION ===";
      cout << endl << endl;
      cout << " Employee's name: " << emp_name;
      cout << endl;
      cout << " ID: " << emp_id;
      cout << endl;
      cout << " Profession: " << profession;
      cout << endl;
      cout << " Basic salary: " << basic_salary;
      cout << endl;
      cout << " Total sales: " << sales;
      cout << endl;
      cout << "  ==> Total bonus: " << bonus;
      cout << endl;
      cout << " ==> Total benefits: " << benefits;
      cout << endl;
      cout << " ==> Total paid: " << totalpay;
      cout << endl;
    }
    else{
      cout << endl;
      cout << "\t=== ERROR: INVALID PROFESSION";
      cout << endl << endl;
    }
  }
  cout << endl << endl;
  system("pause");
  return 0;
}
