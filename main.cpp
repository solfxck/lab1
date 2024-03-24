#include <iostream>
#include <cmath>
using namespace std;

void calculRectangle(double side1, double side2) {
    double perimetr = (side1 + side2) * 2;
    double area = side1 * side2;
    double diagonal = sqrt(side1 * side1 + side2 * side2);
    cout << "Perimetr: " << perimetr << endl;
    cout << "Area: " << area << endl;
    cout << "Diagonal: " << diagonal << endl;
}

int main(){
    calculRectangle(5.0, 6.0);
}