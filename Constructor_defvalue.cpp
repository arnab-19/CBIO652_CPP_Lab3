#include <iostream>  
using namespace std;  
class Classroom{
public:
int stnum;
string stname;
Classroom(){
stnum = 1;
stname = "Arnab";
cout<<stnum<<". "<<stname<<endl;
}
};
int main(void) {
Classroom();
return 0;
}