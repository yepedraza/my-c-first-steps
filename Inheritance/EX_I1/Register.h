/* Topic: Inheritance
   Created by: yepedraza*/
   #ifndef _REGISTER_H
   #define _REGISTER_H

   #include "Student.h"

   class Register
   {
   private:
     string type;
   public:
     Register();
     Register(string ptype);
     ~Register();
     void settype(string ptype);
     string gettype();
     void PresentialDefinitive(double assigments, double exam);
     void DistanceDefinitive(double jobs, double project)
   };
   #endif
