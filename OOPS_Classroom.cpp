#include <iostream>  
using namespace std;  
class Classroom{
    public:
    string stname;
    int snum;
    void details(string se,int sn){
        stname=se;
        snum=sn;
    }
    void display()
    {
        cout<<snum<<".  "<<stname<<endl;
    }
};
int main(void) {  
    Classroom s1;    
    Classroom s2;
    Classroom s3;
    s1.details("Arnab",1);    
    s2.details("Amal",2);
    s3.details("Bablu",3);
    s1.display();    
    s2.display(); 
    s3.display();
    return 0;  
}
