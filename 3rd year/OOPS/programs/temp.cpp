#include<iostream>

using namespace std;

class User{
    int unitConsumed;
    float charges;
    string UserName;
    public:
    void setUser(string name,int units){
        UserName = name;
        unitConsumed = units; 
        
        // now charges based on given criteria
        charges = 50;// minimum everyone have to pay
        if(units<=100){
            charges += 0.60*units;
        }

        if(units>100 && units <= 200){
            charges += 0.60*100 + 0.80*(units -100);
        }

        if(units > 200){
            charges += 0.60*100 + 0.80*100 + 0.90*(units -200);
        }

        if(charges > 300){
            // additional 15% add
            
            charges += 0.15*(charges); 
        }
    }

    void getUserDate(){
        cout<<"user "<<UserName<<endl;
        cout<<"units consumed "<<unitConsumed<<endl;
        cout<<"Tototl  charges "<<charges<<endl;
        cout<<endl;
    }

};
int main(){
    User u1,u2,u3;
    u1.setUser("ved",100);
    u2.setUser("ved1",230);
    u3.setUser("ved2",440);

    u1.getUserDate();
    u2.getUserDate();
    u3.getUserDate();
    return 0;
}