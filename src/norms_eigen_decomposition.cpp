#include <iostream>
#include "norms_eigen_decomposition.h"
#include "NumCpp.hpp"
#include "eigen3/Eigen/Eigenvalues"
//#include <Eigen/Eigenvalues>

using namespace std;
using namespace nc;

namespace NormAndEigenDecomposition {
    Eigen::MatrixXf convert_to_eigen_matrix(NdArray<int> arr);

    void eigenDecomposition() {
        //Av=lamda v
    }

    void playWithEigenVectorAndValues(NdArray<int> arr) {
        cout << "find eigen vv, original matrix:" << arr << endl;
        auto diagonal = diag(arr);
        cout << "find eigen vv diagonal:" << diagonal << endl;

        Eigen::MatrixXf eArr = convert_to_eigen_matrix(arr);// = {{1,2,3},{4,5,6},{7,8,9}};
        Eigen::SelfAdjointEigenSolver<Eigen::MatrixXf> eigensolver;//(eArr);//(eArr);
        eigensolver.compute(eArr);
        auto eValues = eigensolver.eigenvalues();
        auto eVector = eigensolver.eigenvectors();
        cout << "eigen values:" << eValues << endl << "eigen vector:" << eVector << endl;

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
        NdArray<int> forFindEValues = arange<int>(9).reshape(3, 3);
        playWithEigenVectorAndValues(forFindEValues);
    }

    //todo check why eigen decomposition do not as expected with int but with float only
    Eigen::MatrixXf convert_to_eigen_matrix(NdArray<int> arr) {
        int rows = arr.numRows();
        int cols = arr.size() / rows;
        Eigen::MatrixXf result(rows, cols  );
        int getIndex = 0;
        for (int j = 0; j < rows; j++) {
            for (int i = 0; i < cols; i++) {
                float value = static_cast<float>(arr[getIndex++]);
                result(j, i) = value;
            }
        }
        cout << result << endl;
        return result;
    }
}