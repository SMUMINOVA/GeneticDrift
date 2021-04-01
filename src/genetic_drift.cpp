#include <cstdlib>
#include <cmath>
#include <random_gen.h>
#include "genetic_drift.h"

std::pair<double, double> calculate_drift_probabilities(const unsigned long runs, const unsigned N, const unsigned K, const double p)
{
    unsigned int count_A = 0;
    unsigned int count_B = 0;
    unsigned int count;
    for (unsigned long long i = 0; i < runs; i++) {
        double A = p;
        for (size_t k = 0; k < K; k++) {
            count = 0;
            for (unsigned long long j = 0; j < 2 * N; j++-) {
                double ran = get_random_number();
                if (ran >= 0 && ran < A)
                    count++;
            }
            A = count * 1.0 / (2u * N);
            if (A == 0)
                break;
        }
        if (A == 0)
            count_A++;
        if (A == 1)
            count_B++;
    }
    double res_A = 0;
    double res_B = 0;
    if (runs > 0) {
        res_A = count_A * 1.0 / runs;
        res_B = count_B * 1.0 / runs;
    } else if (p == 1) {
        res_A = 1;
    } else if (p == 0) {
        res_B = 1;
    }
    return {res_A, res_B};
}
