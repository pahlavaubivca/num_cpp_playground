#include <iostream>
#include "norms_eigen_decomposition.h"
#include "NumCpp.hpp"
#include "eigen3/Eigen/Eigenvalues"
//#include <Eigen/Eigenvalues>

using namespace std;
using namespace nc;

namespace NormAndEigenDecomposition {
    void eigenDecomposition() {
        //Av=lamda v
    }

    void playWithEigenVectorAndValues(NdArray<int> arr) {
        cout << "find eigen vv, original matrix:" << arr << endl;
        auto diagonal = diag(arr);
        cout << "find eigen vv diagonal:" << diagonal << endl;
        Eigen::EigenSolver<Eigen::MatrixXf> eigensolver;
        Eigen::MatrixXi:: eArr = {{1,2,3},{4,5,6},{7,8,9}};
        eigensolver.compute(arr);
        auto eigenvalues = Eigen::ComplexEigenSolver.eigenvalues()
    }

    void playWithNorms() {
        NdArray<int> A = {{1, 2},
                          {3, 4},
                          {5, 6}};
        cout << "NdArray " << A;

        NdArray<int> B = arange<int>(9) - 3;
        cout << "arange " << B;

        NdArray<int> C = B.reshape(3, 3);
        cout << "reshape " << C;

        // euclidean (L2) norm default
        auto bNormalized = norm(B);
        NdArray cNormalized = norm(C);
        cout << "B normalized " << bNormalized << endl << " C normalized " << cNormalized;
    }

    void neDecompostion::run() {
        NdArray<int> forFindEValues = arange<int>(5);//.reshape(3,3);

        playWithEigenVectorAndValues(forFindEValues);
    }
}