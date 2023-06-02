#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
double pi(int max_iter){
    double pi= 0.0;
        for(int i=0; i<max_iter;i++){
            double term = (i % 2 == 0) ? 1.0 / (2 * i+1) : -1.0 / (2 * i+1);
            pi += term;
        }
        return pi * 4 ;

}

int main()
{
    int iteracion = 1000000 ;
    double resultado = pi(iteracion);
    cout << setprecision(6) << fixed <<resultado;
    return 0;
}







