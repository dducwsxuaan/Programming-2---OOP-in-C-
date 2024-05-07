// #include <iostream>

// int main() {
//     // Using a for loop to print numbers from 1 to 10
//     for (int i = 1; i <= 10; ++i) {
//         std::cout << i << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

// #include <iostream>

// // Function to compute factorial
// unsigned long long factorial(int n) {
//     unsigned long long result = 1;
//     for (int i = 1; i <= n; ++i) {
//         result *= i;
//     }
//     return result;
// }

// int main() {
//     int number;
//     std::cout << "Enter a number: ";
//     std::cin >> number;

//     // Check if the number is non-negative
//     if (number < 0) {
//         std::cout << "Factorial is not defined for negative numbers." << std::endl;
//     } else {
//         unsigned long long fact = factorial(number);
//         std::cout << "Factorial of " << number << " is: " << fact << std::endl;
//     }

//     return 0;
// }

// #include <iostream>

// int main() {
//     int x = 5;
//     int y = 0;
//     int z;

//     // Attempting to divide by zero, which will cause a runtime error
//     z = x / y;

//     std::cout << "Result: " << z << std::endl;

//     return 0;
// }

#include <iostream>

// Function to find the maximum number in an array
int findMax(int arr[], int size) {
    // Check if the array is empty
    if (size == 0) {
        // Return an appropriate value or handle error
        return 0; 
    }

    // Initialize maxNum to the first element of the array
    int maxNum = arr[0];

    // Iterate through the array starting from the second element
    for (int i = 1; i < size; ++i) {
        // If the current element is greater than maxNum, update maxNum
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }

    // Return the maximum number
    return maxNum;
}

int main() {
    // Example array of IDs
    int idArray[] = {10, 25, 6, 48, 32, 18, 40};

    // Calculate the size of the array
    int size = sizeof(idArray) / sizeof(idArray[0]);

    // Find the maximum number in the array
    int maxNumber = findMax(idArray, size);

    // Print the maximum number
    std::cout << "The maximum number in the array is: " << maxNumber << std::endl;

    return 0;
}


