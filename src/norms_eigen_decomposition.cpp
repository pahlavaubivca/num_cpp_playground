#include <iostream>
#include "norms_eigen_decomposition.h"
#include "NumCpp.hpp"

using namespace std;
using namespace nc;

void NormAndEigenDecomposition::run() {
    NdArray<int> A = {{1, 2},
                      {3, 4},
                      {5, 6}};
    cout << "NdArray " << A;

    NdArray<int> B = arange<int>(9) - 3;
    cout << "arange " << B;

    NdArray<int> C = B.reshape(3, 3);
    cout << "reshape " << C;

//    euclidean norm default
    auto bNormalized = norm(B);
    NdArray cNormalized = norm(C);
    cout << "B normalized " << bNormalized << endl << " C normalized " << cNormalized;


}
