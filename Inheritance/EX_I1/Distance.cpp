/* Topic: Inheritance
   Created by: yepedraza*/
   #include "Distance.h"

   Distance::Distance() :Student()
   {
     jobs = 0;
     project = 0;
   }
   Distance::Distance(string pname, string pID, double pjobs, double pproject) :Student(pname, pID)
   {
     jobs = pjobs;
     project = pproject;
   }
   Distance::~Distance()
   {
   }
   void Distance::setjobs(string pjobs){
     jobs=pjobs;
   }
   void Distance::setproject(string pproject){
     project=pproject;
   }
   string Distance::getjobs(){
     return jobs;
   }
   string Distance::getproject(){
     return project;
   }
