#include <iostream>  
using namespace std;  
 class Account {  
   public:  
   int balance = 40000;   
 };  
   class Bank: public Account {  
   public:  
   int interest = 200;
   int new_balance= balance + interest;    
   };
   class Emis: public Bank {
       public:
       int emi=3000;
       int full_balance= new_balance - emi;
   };
int main(void) {  
     Emis e1;  
     cout<<"Initial bal: "<<e1.balance<<endl;    
     cout<<"Interest from bank: "<<e1.interest<<endl; 
     cout<<"Updated bal: "<<e1.new_balance<<endl;
     cout<<"After payment of EMIs: "<<e1.full_balance<<endl;
    return 0;  
}