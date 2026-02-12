#include <iostream>

// functions for calculator
double addition(double a, double b){
    return a + b;
}
double subtraction(double a, double b){
    return a - b;
}
double multiply(double a, double b){
    return a * b;
}
double divide(double a, double b){
    return a / b;
}


int main() {
    double x = 0.0, y = 0.0, result = 0.0;
    int choice = 0;

    std::cout << "Testing\n";
    std::cout << "Select your choice:\n1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division\n";

    if (!(std::cin >> choice)){
        std::cout << "Invalid choice\n";
        return 1;
    }

    if (choice < 1 || choice > 4){
        std::cout << "Choice must be between 1 and 4.";
        return 1;
    }

    std::cout << "Selected: " << choice << "\n";
    std::cout << "Select 2 numbers X/Y\n";
    if (!(std::cin >> x >> y)) {
        std::cout << "Only input numbers\n";
        return 1;
    }

    switch (choice){
        case 1:
          result = addition(x,y);
          break;
        case 2:
          result = subtraction(x,y);
          break;
        case 3:
          result = multiply(x,y);
          break;
        case 4:
          if (y == 0) {
              std::cout << "Cannot divide by zero\n";
              return 1;
        }
          result = divide(x,y);
          break;
        default:
          std::cout << "Errored\n";
          return 1;
    }

    std::cout << "Result: " << result << "\n";
    return 0;
}
