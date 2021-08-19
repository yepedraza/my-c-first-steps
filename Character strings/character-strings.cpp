/* Topic: Character strings
   Created by: yepedraza*/

   #include <iostream>
   using namespace std;

   int main()
   {
     char fname[50];
     char sname[50];

     cout << " Enter your first name: ";
     cin.getline(fname,50);
     cout << " Enter your second name: ";
     cin.getline(sname,50);
     cout << endl;
     system("cls");

     cout << " Your full name is: " << fname << " " << sname << endl;
     cout << endl;
     cout << "\t After copying string two into string one, it is presented: " << endl;
     cout << endl;
     strcpy_s(fname,sname); //That allows the overwrite

     cout << " Now, the first name is: " << fname << endl;
     cout << " And second name not have any changes: " << sname << endl;
     cout << endl;
     if(strcmp(fname,sname) == 0){
       cout << " The first name and the second name are the same!!" << endl;
     }
     cout << endl;
     strcat_s(fname,sname);
     cout << " Your first name after the concatenate is: " << fname << endl;
     cout << " Your second name after the concatenate is: " << sname << endl;
     cout << endl;
     cout << sname << " length is: " << strlen(sname);
     cout << endl;
     cout << sname << " inverted is: " << _strrev(sname);
     cout << endl;
     system("pause")
     return 0;
   }
