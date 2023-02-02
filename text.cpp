#include <iostream>
#include <string>
using namespace std;

 
class AskAndPrint {
    public:

    void DoYourThing(char first) {
        char f=first;
        string ask[];
            
            cout<<f;
            cin.get(ask);
            cout<<ask;
    }
};
int main (void) {  

   char charstring[] = "Write the text for printing:";

   AskAndPrint thing;

   thing.DoYourThing(charstring);

return 0;

}

