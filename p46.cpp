#include <iostream>
using namespace std;
// make a class vehicle and its two children 'light motor; and 'heavy motor'
class vehicle{
    public:
    void get_vname(){
        cout<<"this is a vehicle"<<endl;
    }
    void get_licence(){
        cout<<"licence is required"<<endl;
    }
};
class lightmotor:public vehicle{
    public:
    lightmotor(){
        vehicle::get_vname();
        vehicle::get_licence();
        cout<<"this is a light motor vehicle"<<endl;
    }
};
// make child of lightor as ;gear motor; and 'non gear motor'
class gearmotor:public lightmotor{
    public:
    gearmotor(){
        cout<<"this is a gear motor vehicle"<<endl;
    }
};
class nongearmotor:public lightmotor{
    public:
    nongearmotor(){
        cout<<"this is a non gear motor vehicle"<<endl;
    }
};
class heavymotor : public vehicle {
public:
    void hv() {
        vehicle::get_vname();
        vehicle::get_licence();
        cout << "this is a heavy motor vehicle" << endl;
    }
};
// make cgild of heavymotor as 'passenger' and 'goods'
class passenger:public heavymotor{
    public:
    void passen(){
        vehicle::get_vname();
        vehicle::get_licence();
        cout<<"this is a passenger vehicle"<<endl;
    }
};
class goods:public heavymotor{
    public:
    void get(){
        vehicle::get_vname();
        vehicle::get_licence();
        cout<<"this is a goods vehicle"<<endl;
    }
};
int main(){
    cout << "AARTI SAHOO 16017702022" << endl;
    gearmotor g;
    goods g1;
    g.get_vname();
    g.get_licence();
    g1.hv();

    
    return 0;
}