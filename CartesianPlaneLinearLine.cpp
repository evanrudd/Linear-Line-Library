//
// Created by Evan Rudd on 9/16/22.
//

#include "CartesianPlaneLinearLine.h"
#include "iostream"

void CartesianPlaneLinearLine::PrintPointSlope() const {
    std::cout << "y ";

    if (yCoord > 0) {
        std::cout << "- " << yCoord << " ";
    } else if (yCoord < 0) {
        std::cout << "+ " << -1 * yCoord << " ";
    }

    std::cout << "= ";

    if (slope != 1) {
        std::cout << slope;
    }

    std::cout << "(x";

    if (xCoord > 0) {
        std::cout << " - " << xCoord << ")" << std::endl;
    } else if (xCoord < 0) {
        std::cout << " + " << -1 * xCoord << ")" << std::endl;
    } else {
        std::cout << ")" << std::endl;
    }
}

void CartesianPlaneLinearLine::PrintSlopeIntercept() const {
    double yIntercept = yCoord - (slope * xCoord);

    std::cout << "y = ";

    if (slope != 1) {
        std::cout << slope;
    }

    std::cout << "x";

    if (yIntercept > 0) {
        std::cout << " + " << yIntercept << std::endl;
    } else if (yIntercept < 0) {
        std::cout << " - " << -1 * yIntercept << std::endl;
    } else {
        std::cout << std::endl;
    }
}

void CartesianPlaneLinearLine::PrintStandard() const {

    // The form: Ax + By = C
    // Variables A, B, and C, correlate to the above.

    double A = slope * -1;
    double B = 1;
    double C = yCoord - (slope * xCoord);

    // A cannot be negative, so if it is, switch all signs.
    if (A < 0) {
        A = A * -1;
        B = B * -1;
        C = C * -1;
    }

    if (A == 1) {
        std::cout << "x ";
    } else if (A != 0) {
        std::cout << A << "x ";
    }

    if (B >= 0) {
        if (A != 0) {
            std::cout << "+ ";
        }
        if (B != 1) {
            std::cout << B << "y = ";
        } else {
            std::cout << "y = ";
        }

    } else if (B < 0) {
        std::cout << "- " << -1 * B << "y = ";
    }

    std::cout << C << std::endl;

}

CartesianPlaneLinearLine CartesianPlaneLinearLine::GetPerpendicular() const {
    return CartesianPlaneLinearLine(xCoord, yCoord, -(1 / slope));
}

void CartesianPlaneLinearLine::Intersection(CartesianPlaneLinearLine line) const {

    double xIntersection;
    double yIntersection;
    double yIntercept = yCoord - (slope * xCoord);
    double lineYIntercept = line.yCoord - (slope * xCoord);

    if (line.slope == slope) {
        if (lineYIntercept == yIntercept) {
            std::cout << "Infinite Intersections since both lines are the same." << std::endl;
            return;
        } else {
            std::cout << "N/A" << std::endl;
            return;
        }
    }

    xIntersection = (yIntercept - lineYIntercept) / (line.slope - slope);
    yIntersection = (slope * xIntersection) + yIntercept;

    std::cout << "(" << xIntersection << "," << yIntersection << ")" << std::endl;
}

double CartesianPlaneLinearLine::GetXCoord() const {
    return xCoord;
}

void CartesianPlaneLinearLine::SetXCoord(int num) {
    xCoord = num;
}

double CartesianPlaneLinearLine::GetYCoord() const {
    return yCoord;
}

void CartesianPlaneLinearLine::SetYCoord(int num) {
    yCoord = num;
}

double CartesianPlaneLinearLine::GetSlope() const {
    return slope;
}

void CartesianPlaneLinearLine::SetSlope(double num) {
    slope = num;
}
