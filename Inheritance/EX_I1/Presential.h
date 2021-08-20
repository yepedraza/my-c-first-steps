/* Topic: Inheritance
   Created by: yepedraza*/
   #ifndef _PRESENTIAL_H
   #define _PRESENTIAL_H

   #include "Student.h"

   class Presential : public Student
   {
   private:
     string assigments;
     string exam;
   public:
     Presential();
     Presential(string pname, string pID, double passigments, double pexam);
     ~Presential();
     void setassigments(string passigments);
     void setexam(string pexam);
     string getassigments();
     string getexam();

   };
   #endif
