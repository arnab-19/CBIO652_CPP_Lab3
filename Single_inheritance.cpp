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
int main(void) {  
     Bank b1;  
     cout<<"Initial bal: "<<b1.balance<<endl;    
     cout<<"Interest from bank: "<<b1.interest<<endl; 
     cout<<"Updated bal: "<<b1.new_balance<<endl;   
    return 0;  
}  
