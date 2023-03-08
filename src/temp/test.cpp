#include <vector>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;
#include "test.h"
int Some::count_numbers(const vector<int> &vec) {
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int count = 0;
    cout << vec.at(0);
    bool done = false;
    while (!done || count >= vec.size()) {
        int v = vec.at(count);
        cout << v;
        if (v == -99) {
            done = true;
            break;
        }
        count++;
    }
    return count;
}

void Some::test() {
    int int_arr[4];
    int_arr[0] = 2;
    int_arr[2] = 66;
    int_arr[6] = 1;
    for (int i = 0; i < 7; ++i) {
        std::cout << int_arr[i] << std::endl;
    }
    int matrix[3][3]{
            {1, 2,  3},
            {3, 55, 3}
    };

    vector<int> vecc{2, 4, 6, 8};
    int result = 0;
    for (int i = 0; i < vecc.size() - 1; i++) {
        for (int j = i + 1; j < vecc.size(); j++) {

            int m = vecc[i] * vecc[j];
            result += m;
        }
    }
    int asdf;
    cout << result;
    cin >> asdf;

    int sum = 0;
    for (int i = 1; i <= 15; i++) {
        if (i % 2 == 0)
            sum += i;
    }
    cout << sum;


    int day_code = 1;
    string day;

    switch (day_code) {
        case 0:
            day = "Sunday";
            break;
        default:
            day = "";
    }
    int just_num = 6;
    float converted = static_cast<float>(just_num);
    vector<int> some;
    vector<int> vec{10, 20, 30, 40, 50};
    vec.at(0) = 100;
    vec.at(vec.size() - 1) = 1000;
    for (auto s: vec) {
        cout << s;
    }
    //    std::cout << sizeof(long double) << std::endl;
//    std::cout << INT_MAX << std::endl;
//        std::cout << "Hello, World! " << std::endl;
//        std::cin >> asd >> qwe;
//        std::cout << "You enter " << asd << qwe << std::endl;
//        int asdd{3};
}

void Some::playWithCChar() {
    char some_name[5];
    char some_name_copy[12];

    cout << "print some name" << endl;
    cin >> some_name;
    cout << "You print - " << some_name << " length is " << strlen(some_name) << endl;
    strcpy(some_name_copy, some_name);
    cout << "name copy is " << some_name_copy << " length is " << strlen(some_name_copy) << endl;
    strcat(some_name_copy, some_name);
    cout << "name concat - " << some_name_copy << endl;
}