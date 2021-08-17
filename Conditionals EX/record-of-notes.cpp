/* Topic: COnditional sentences in C++ */
#include <iostream>
#include <string>
using namespace std;

int main(){
  string fname_est;
  string sname_est;
  float note1;
  float note2;
  float note3;
  float def = 0;
  string exit;

  do {
    system("cls");
    cout << " Enter the student's first name: ";
    cin >> fname_est;
    cout << " Enter the student's second name: ";
    cin >> sname_est;
    cout << endl;
    cout << " Enter the first note: ";
    cin >> note1;
    if (note1 >= 0 && note1 <= 5.0){
      cout << " Enter the second note: ";
      cin >> note2;
      if (note2 >= 0 && note2 <= 5.0){
        cout << " Enter the third note: ";
        cin >> note3;
        if (note3 >= 0 && note3 <= 5.0){
          def = (note1+note2+note3)/3;
          if(def >= 3.0){
            system("cls");
            cout << endl;
            cout << " Student: " << fname_est << " " << sname_est;
            cout << endl << endl;
            cout << " Note 1: " << note1;
            cout << endl;
            cout << " Note 2: " << note2;
            cout << endl;
            cout << " Note 3: " << note3;
            cout << endl << endl;
            cout << "=> Definitive note: " << def;
            cout << endl << endl;
            cout << " === APPROVED THE COURSE ===";
          }
          else{
            system("cls");
            cout << endl;
            cout << " Student: " << fname_est << " " << sname_est;
            cout << endl << endl;
            cout << " Note 1: " << note1;
            cout << endl;
            cout << " Note 2: " << note2;
            cout << endl;
            cout << " Note 3: " << note3;
            cout << endl << endl;
            cout << "=> Definitive note: " << def;
            cout << endl << endl;
            cout << " === DISAPPROVED THE COURSE ===";
          }
        }
        else{
          cout << endl;
          cout << "\t === ERROR, INVALID NOTE ===";
          cout << endl;
        }
      }
      else{
        cout << endl;
        cout << "\t === ERROR, INVALID NOTE ===";
        cout << endl;
      }
    }
    else{
      cout << endl;
      cout << "\t === ERROR, INVALID NOTE ===";
      cout << endl;
    }
    cout << endl << endl;
    cout << " Do you want to perform another operation? (YES - NO): ";
    cin >> exit;
  } while(exit == "yes" || exit == "YES");
  cout << endl << endl;
  system("pause");
  return 0;
}
