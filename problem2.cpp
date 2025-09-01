
#include <iostream>
#include <cmath>   // for std::exp
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>

double u_exact(double x) {
        return 1.0 - (1.0 - std::exp(-10.0)) * x - std::exp(-10.0 * x);
    }

int main() {

    const int n = 10;
    const double h = 1.0 / (n + 1);
    const int N = n + 2;

    std::vector<double> x(N);
        for (int i = 0; i < N; ++i) x[i] = i * h;

    std::vector<double> u(N);
        for (int i = 0; i < N; ++i) u[i] = u_exact(x[i]);

    std::string filename = "output.txt";

    std::ofstream ofile;
    ofile.open("output.txt");

    ofile << std::scientific << std::setprecision(8);

    for (std::size_t i = 0; i < x.size(); ++i) {        
    ofile << x[i] << " " << u[i] << '\n';
    }

    ofile.close();

}

