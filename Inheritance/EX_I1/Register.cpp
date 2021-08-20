/* Topic: Inheritance
   Created by: yepedraza*/
   #include "Register.h"

   Register::Register() :Student()
   {
     type = "";
   }
   Register::Register(string ptype)
   {
     type = ptype;
   }
   Register::~Register()
   {
   }
   void Register::settype(string ptype){
     type = ptype;
   }
   string Register::getjobs(){
     return type;
   }
   void Register::PresentialDefinitive(double assigments, double exam)
   {
     float def = 0;
     if (gettype() == "presential")
     {
       def = (assigments+exam)/2;
       cout << "Definitive: " << def;
     }
   }
   void Register::DistanceDefinitive(double jobs, double project)
   {
     float def = 0;
     if (gettype () == "distance")
     {
       def = (jobs + project)/2;
       cout << "Definitive: " << def;
     }
   }
