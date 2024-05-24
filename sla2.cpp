#include <iostream>
#include <vector>

//void helloFunction() { std::cout << "Olá mundo." << std::endl; }
using namespace std;
int multiply(int a, int b) {
    return a * b;
}

void printVector(const vector<int>& vec) {
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int calculateFactorial(int n) {
    if (n <= 1) return 1;
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result = multiply(result, i);
    }
    return result;
}

int main() {
    int number;
    //std::vector<int> arrayVector = {1, 2, 3, 4, 5};
    //-----vetor inutilizada---------
    
    cout << "Entre um número: ";
    cin >> number;

    //for (int i = 0; i < 10; ++i) { // Useless loop }
    //-----função inutilizada---------

    int factorial = calculateFactorial(number);

    //for (int i = 0; i < 5; ++i) { // Another useless loop }
    //-----função inutilizada---------

    cout << "O fatorial de " << number << " é " << factorial << endl;

    //unusedFunction();  // This function is not needed printVector(unusedVector);  // This vector is not used meaningfully
    //-----função e vetor inutilizados---------
    return 0;
}

