#include <iostream>
using namespace std;

double avarage (double a, double b){
    return(a + b) / 2.0;
}

int main(){
    double x, y;
    cout << "Введи 2 числа: ";
    cin >> x >>y;

    cout << "Середнє арифметичне: " << avarage(x,y) << endl;
    return 0;
}