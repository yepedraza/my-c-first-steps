/* Topic: Inheritance
   Created by: yepedraza*/
   #ifndef _STUDENT_H
   #define _STUDENT_H

   #include <iostream>
   #include <string>
   using namespace std;

   class Student
   {
   protected:
     string name;
     string ID;
   public:
     Student();
     Student(string pname, string pID);
     ~Student();
     void setname(string pname);
     void setID(string pID);
     string getname();
     string getID();

   };
   #endif
