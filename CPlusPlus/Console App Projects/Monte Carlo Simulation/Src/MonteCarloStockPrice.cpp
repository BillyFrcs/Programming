#include <algorithm>
#include <iomanip>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <vector>

// Calculates the mean of a vector of values
double VecMean(std::vector<double> x)
{
     int n = x.size();

     double sum = 0.0;

     for (int i = 0; i <= n - 1; i++)
          sum += x[i];

     double xbar = sum / n;

     return xbar;
}

// N(0,1) density
double f(double x)
{
     double pi = 4.0 * atan(1.0);

     return exp(-x * x * 0.5) / sqrt(2 * pi);
}

// Boole's Rule
double Boole(double StartPoint, double EndPoint, int n)
{
     std::vector<double> X(n + 1, 0.0);

     std::vector<double> Y(n + 1, 0.0);

     double delta_x = (EndPoint - StartPoint) / double(n);

     for (int i = 0; i <= n; i++)
     {

          X[i] = StartPoint + i * delta_x;

          Y[i] = f(X[i]);
     }

     double sum = 0;

     for (int t = 0; t <= (n - 1) / 4; t++)

     {

          int ind = 4 * t;

          sum += (1 / 45.0) * (14 * Y[ind] + 64 * Y[ind + 1] + 24 * Y[ind + 2] + 64 * Y[ind + 3] + 14 * Y[ind + 4]) * delta_x;
     }

     return sum;
}

// N(0,1) cdf by Boole's Rule
double N(double x)
{

     return Boole(-10.0, x, 240);
}

// Black Scholes closed form price
double BS(double S, double K, double v, double T, double r, double q, char PutCall)
{

     double d1 = (log(S / K) + (r - q + 0.5 * v * v) * T) / v / sqrt(T);

     double d2 = d1 - v * sqrt(T);

     double Call = S * exp(-q * T) * N(d1) - K * exp(-r * T) * N(d2);

     if (PutCall == 'C')
          return Call;

     else
          return Call - S * exp(-q * T) + K * exp(-r * T);
}

int main()
{

     srand(time(0)); // Set the seed for random number generation

     double S = 100.0; // Spot Price

     double K = 100.0; // Strike Price

     double T = 1; // Maturity in Years

     double r = 0.05; // Interest Rate

     double q = 0; // Dividend yeild

     double v = 0.2; // Volatility

     int Nsims = 1e5; // Number of simulations

     double Z; // Random standard normal Z(0,1)

     std::vector<double> ST(Nsims, 0.0); // Initialize terminal prices S(T)

     std::vector<double> ST_K(Nsims, 0.0); // Initialize call payoff

     std::vector<double> K_ST(Nsims, 0.0); // Initialize put payoff

     double u1, u2;

     double pi = 3.141592653589793;

     for (int i = 0; i <= Nsims - 1; i++)

     {

          // Independent uniform random variables

          u1 = ((double)rand() / ((double)(RAND_MAX) + (double)(1)));

          u2 = ((double)rand() / ((double)(RAND_MAX) + (double)(1)));

          // Floor u1 to avoid errors with log function

          u1 = std::max(u1, 1.0e-10);

          // Z ~ N(0,1) by Box-Muller transformation

          Z = sqrt(-2.0 * log(u1)) * sin(2 * pi * u2);

          ST[i] = S * exp((r - q - 0.5 * v * v) * T + v * sqrt(T) * Z); // Simulated terminal price S(T)

          ST_K[i] = std::max(ST[i] - K, 0.0); // Call payoff

          K_ST[i] = std::max(K - ST[i], 0.0); // Put payoff
     }

     // Simulated prices as discounted average of terminal prices
     double BSCallSim = exp(-r * T) * VecMean(ST_K);

     double BSPutSim = exp(-r * T) * VecMean(K_ST);

     // Closed form prices
     double BSCall = BS(S, K, v, T, r, q, 'C');

     double BSPut = BS(S, K, v, T, r, q, 'P');

     // Errors
     double CallError = BSCall - BSCallSim;

     double PutError = BSPut - BSPutSim;

     // Output the results
     std::cout << std::setprecision(4) << std::fixed;

     std::cout << "Using " << Nsims << " simulations..." << std::endl;

     std::cout << " " << std::endl;

     std::cout << "Method CallPrice PutPrice " << std::endl;

     std::cout << "----------------------------------" << std::endl;

     std::cout << "Simulation " << BSCallSim << " " << BSPutSim << std::endl;

     std::cout << "Closed Form " << BSCall << " " << BSPut << std::endl;

     std::cout << "Error " << CallError << " " << PutError << std::endl;

     std::cout << "----------------------------------\n";

     std::cout << " \n";

     system("clear");

     return 0;
}