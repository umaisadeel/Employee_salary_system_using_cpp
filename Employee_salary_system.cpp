#include <iostream>
using namespace std;
class employee
{
    private:
    int basic_pay;
    int house_rent;
    int medical_allowance;
    int emp_no;
    int travel_allowance;
    int net_pay;

    public:
    void inputData()
    {
        cout<<"Enter employee no:";
        cin>>emp_no;
        cout<<"Enter your basic pay:";
        cin>>basic_pay;
    }

    void compute_pay()
    {
        house_rent=basic_pay*45/100;
        medical_allowance=basic_pay*15/100;
        travel_allowance=basic_pay*10/100;
        net_pay=basic_pay+house_rent+medical_allowance+travel_allowance;
    }

    void print_pay()
    {
        cout<<"House rent is="<<house_rent<<endl;
        cout<<"Medical allowance is="<<medical_allowance<<endl;
        cout<<"Travel allowance is="<<travel_allowance<<endl;
        cout<<"Net pay is="<<net_pay<<endl;
    }
};

int main()
{
    employee E;
    E.inputData();
    E.compute_pay();
    E.print_pay();
return 0;
}