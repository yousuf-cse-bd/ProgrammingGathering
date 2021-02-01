#include <iostream>
#include <math.h>
using namespace std;

void metricUnitBMI()
{
    float height, weight, bmi;

    cout<<"Input Weight (KG)Here: ";
    cin>>weight;
    cout<<"\nInput Height [M] Here: ";
    cin>>height;

    bmi = weight / pow(height,2);
    cout<<"Your BMI: "<<bmi<<"\n"<<endl;
}

void imperialUnitBMI()
{
    float height, weight, bmi;

    cout<<"Input Weight (lbs)Here: ";
    cin>>weight;
    cout<<"\nInput Height [inc] Here: ";
    cin>>height;

    bmi = (weight*707) / pow(height,2);
    cout<<"Your BMI: "<<bmi<<"\n"<<endl;
}

int main()
{
    cout<<"I Start by The Name of Allah."<<endl;
    int option;

    do
    {

        cout<<"Press 1 for Metric BMI."<<endl;
        cout<<"Press 2 for Imperil BMI."<<endl;
        cout<<"Press 0 for EXIT."<<endl;
        cout<<"Choose Your Unit: ";
        cin>>option;
        switch(option)
        {
        case 1:
            metricUnitBMI();
            break;
        case 2:
           imperialUnitBMI();
            break;
        case 0:
            cout<<"EXIT...!"<<endl;
            break;
        default:
            cout<<"Choose Your Right Option."<<endl;
        }

    }
    while(option != 0);

    return 0;
}
