/* Topic: Inheritance
   Created by: yepedraza*/

   #include "Student.h"
   #include "Presential.h"
   #include "Distance.h"
   #include "Register.h"

   int main()
   {
     string vname, vID, vtype;
     double vassigments, vexam, vjobs, vproject;

     cout << " Enter the student's name: ";
     cin >> vname;
     cout << " Enter the student's ID: ";
     cin >> vID;
     cout << " Enter the carreer modality (presential - distance): ";
     cin >>> vtype;
     Register ObjReg(vtype);
     if(vtype == "presential" || vtype == "Presential")
     {
       cout << " Enter the assigments grade: ";
       cin >> vassigments;
       cout << " Enter the exam grade: ";
       cin >> vexam;
       Presential ObjPre(vname, vID, vassigments, vexam);
       ObjReg.PresentialDefinitive(vassigments, vexam);
     }
     else{
       if (vtype == "distance" || vtype == "Distance")
       {
         cout << " Enter the jobs grade: ";
         cin >> vjobs;
         cout << " Enter the project grade: ";
         cin >> vproject;
         Distance ObjDis(vname, vID, vjobs, vproject);
         ObjReg.DistanceDefinitive(vjobs, vproject);
       }
     }
     cout << endl;
     system("pause");
   }
