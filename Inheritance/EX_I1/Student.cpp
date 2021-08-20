/* Topic: Inheritance
   Created by: yepedraza*/
   #include "Student.h"

   Student::Student()
   {
     name = "";
     ID = "";
   }
   Student::Student(string pname, string pID)
   {
     name = pname;
     ID = pID;
   }
   Student::~Student()
   {
   }
   void Student::setname(string pname){
     name=pname;
   }
   void Student::setID(string pID){
     ID=pID;
   }
   string Student::getname(){
     return name;
   }
   string Student::getID(){
     return ID;
   }
