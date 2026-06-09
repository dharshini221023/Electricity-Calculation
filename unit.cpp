#include <iostream>
using namespace std;

class ElectricityBill
{
private:
    string custName;
    int units;
    float charge, totalAmt;

public:
    void getData()
    {
        cout << "Enter Customer Name: ";
        cin >> custName;

        cout << "Enter Units Consumed: ";
        cin >> units;
    }

    void calculate()
    {
        if (units <= 100)
            charge = 2;
        else if (units <= 200)
            charge = 3;
        else
            charge = 5;

        totalAmt = units * charge;
    }

    void display()
    {
        cout << "\nCustomer Name : " << custName << endl;
        cout << "Units Consumed: " << units << endl;
        cout << "Charge/Unit   : " << charge << endl;
        cout << "Total Amount  : " << totalAmt << endl;
    }
};

int main()
{
    ElectricityBill obj;

    obj.getData();
    obj.calculate();
    obj.display();

    return 0;
}