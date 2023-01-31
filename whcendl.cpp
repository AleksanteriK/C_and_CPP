#include <iostream>

using namespace std;

int main () {

        cout<<"The program calculates the total amount of"<<endl;
        cout<<"work hours during a given time frame and the average work day length."<<endl;

    int days;
        
        cout << "How many days:"<<endl;
        cin>>days;

    int exdays=days-1;
    float ar[exdays];
    int i;
    float in;
    int o=1;
    float sum=0.000;

    for (i = 0 ; i < days ; i++) {

        cout<<"Input hours of workday "<<o++<<": ";
        cin>>in;
        ar[i]=in;
        sum = sum + ar[i];

    }
    
    int loop;
    float avg=sum/days;

        cout<<"Total work hours: "<<sum<<endl;
        cout<<"Average work day length: "<<avg<<endl;
        cout<<"Inputted hours: ";

    for (loop = 0 ; loop < days ; loop++) {
        
            cout<<ar[loop]<<" ";
    
    }

            cout<<endl;

system("pause");

}