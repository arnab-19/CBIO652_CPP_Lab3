#include <iostream>    
using namespace std;    
class Overload {    
    public:    
static int product(int a,int b){      
        return a * b;      
    }      
static int product(int a, int b, int c)      
    {      
        return a * b * c;      
    }      
};     
int main(void) {    
    Cal C;                                                   
    cout<<C.product(9, 6)<<endl;      
    cout<<C.product(3, 5, 6);     
   return 0;    
} 