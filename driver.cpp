#include <iostream>
#include "CartesianPlaneLinearLine.h"

using namespace std;

int main() {

    int choice;
    int xValue;
    int yValue;
    int slopeValue;
    int yInterceptValue;

     {
        cout << "Choose an option: " << endl;
        cout << "1) Enter X Coordinate" << endl;
        cout << "2) Enter Y Coordinate" << endl;
        cout << "3) Enter Slope" << endl;
        cout << "4) Y-Intercept" << endl;

        cin >> choice;
        cout << endl;

        switch (choice) {
            case 1:
                cout << "X Coordinate = ";
                cin >> xValue;
                cout << endl;
            case 2:
                cout << "X Coordinate = ";
                cin >> yValue;
                cout << endl;
            case 3:
                cout << "Slope = ";
                cin >> slopeValue;
                cout << endl;
            case 4:
                cout << "Y-Intercept = ";
                cin >> yInterceptValue;
                cout << endl;
            default:
                cout << "Error: No option for " << choice << " value.";
        }

    }


    return 0;
}
