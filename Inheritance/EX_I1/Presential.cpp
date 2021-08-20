/* Topic: Inheritance
   Created by: yepedraza*/
   #include "Presential.h"

   Presential::Presential() :Student()
   {
     assigments = 0;
     exam = 0;
   }
   Presential::Presential(string pname, string pID, double passigments, double pexam) :Student(pname, pID)
   {
     assigments = passigments;
     exam = pexam;
   }
   Presential::~Presential()
   {
   }
   void Presential::setassigments(string passigments){
     assigments=passigments;
   }
   void Presential::setexam(string pexam){
     exam=pexam;
   }
   string Presential::getassigments(){
     return assigments;
   }
   string Presential::getexam(){
     return exam;
   }
