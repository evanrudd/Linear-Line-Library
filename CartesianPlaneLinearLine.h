//
// Created by Evan Rudd on 9/16/22.
//

#ifndef PROGRAMMINGASSIGNMENT1_CARTESIANPLANELINEARLINE_H
#define PROGRAMMINGASSIGNMENT1_CARTESIANPLANELINEARLINE_H


class CartesianPlaneLinearLine {

public:
    CartesianPlaneLinearLine() {
        xCoord = 0;
        yCoord = 0;
        slope = 1;
    }
    CartesianPlaneLinearLine(double xValue, double yValue, double slopeValue) {
        xCoord = xValue;
        yCoord = yValue;
        slope = slopeValue;
    }
    CartesianPlaneLinearLine(double yInterceptValue, double slopeValue) {
        xCoord = 0;
        yCoord = yInterceptValue;
        slope = slopeValue;
    }
    explicit CartesianPlaneLinearLine(double slopeValue) {
        xCoord = 0;
        yCoord = 0;
        slope = slopeValue;
    }
    void PrintPointSlope() const;
    void PrintSlopeIntercept() const;
    void PrintStandard() const;
    CartesianPlaneLinearLine GetPerpendicular() const;
    void Intersection(CartesianPlaneLinearLine line) const;
    double GetXCoord() const;
    void SetXCoord(int num);
    double GetYCoord() const;
    void SetYCoord(int num);
    double GetSlope() const;
    void SetSlope(double num);

private:
    double xCoord;
    double yCoord;
    double slope;
};


#endif //PROGRAMMINGASSIGNMENT1_CARTESIANPLANELINEARLINE_H
