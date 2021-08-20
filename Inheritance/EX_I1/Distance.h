/* Topic: Inheritance
   Created by: yepedraza*/
   #ifndef _DISTANCE_H
   #define _DISTANCE_H

   #include "Student.h"

   class Distance : public Student
   {
   private:
     string jobs;
     string project;
   public:
     Distance();
     Distance(string pname, string pID, double pjobs, double pproject);
     ~Distance();
     void setjobs(string pjobs);
     void setproject(string pproject);
     string getjobs();
     string getproject();

   };
   #endif
