#include <iostream>
using namespace std;

int main () {
    
    int in;
    int x;
    int y;

        cout<<"Choose desired calculation:\n";
        cout<<"1: subtraction\n";
        cout<<"2: addition\n";
        cout<<"3: multiplication\n";
        cout<<"4: division\n";
        cout<<"5: Remainder\n";
        cout<<"Choose a calculation:";

    cin >> in;

        cout<<"Input first number:";
        
        cin >> x;
        
        cout<<"Input second number:";
        
        cin >> y;
    
    double sub=x-y;
    double ad=x+y;
    double mul=x*y;
    double di=x/y;
    double rem=x%y;

            /*if(in==1) {

            }

            else if(in==2) {

            }

            else if(in==3) {

            }

            else if(in==4) {

            }

            else if(in==5) {

            }

            else {} */

            switch(in)  {
		        case 1:
			        cout << x <<"-"<< y <<" = " << sub << endl;
			    break; 

	     	    case 2:
	     		    cout << x <<"+"<< y <<" = " << ad << endl;
	     		break;
	
	     	    case 3:
			        cout << x <<"*"<< y <<" = " << mul << endl;
			    break;

                case 4:
			        cout << x <<"/"<< y <<" = " << di << endl;
			    break;

                case 5:
			        cout << x <<"%"<< y <<" = " << rem << endl;
			    break;

		default:
			cout << "Next time try pressing a number between 1-5!" << endl;
	}

    system("pause");

}