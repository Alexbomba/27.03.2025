#include <iostream>
#include <algorithm>
#include <windows.h>
using namespace std;

//Exercise 1

//int main() {
//    const int SIZE = 10;
//    int arr[SIZE] = { 5, -12, 8, 0, 20, -3, 7, -19, 13, 2 }; 
//    int sum = 0;
//
//    cout << "Massif: ";
//    for (int i = 0; i < SIZE; ++i) {
//        cout << arr[i] << " ";
//        sum += arr[i];
//    }
//
//    double average = sum / SIZE; 
//
//    int minVal = *min_element(arr, arr + SIZE);
//    int maxVal = *max_element(arr, arr + SIZE);
//
//    cout << "\nSum: " << sum << "\n";
//    cout << "Arithmetic mean: " << average << "\n";
//    cout << "Minimal element: " << minVal << "\n";
//    cout << "Maximum element: " << maxVal << "\n";
//
//}


//Exercise 2

//int main() {
//    const int SIZE = 100;
//    int arr[SIZE];
//
//    Sleep(1);
//    srand(GetTickCount());
//
//    for (int i = 0; i < SIZE; i++) {
//        arr[i] = rand() % 100; 
//    }
//
//    cout << "Array of random numbers: ";
//    for (int i = 0; i < SIZE; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << "\n";
//
//    int num;
//    cout << "Enter a number to search for: ";
//    cin >> num;
//
//    int count = 0;
//    for (int i = 0; i < SIZE; i++) {
//        if (arr[i] == num) {
//            count++;
//        }
//    }
//
//    cout << "The number " << num << " appears " << count << " time(s) in the array." << "\n";
//}


//Exercise 3

//int main() {
//    const int SIZE = 20;
//    int arr[SIZE];
//
//    Sleep(1);
//    srand(GetTickCount());
//
//    for (int i = 0; i < SIZE; i++) {
//        arr[i] = rand() % 101 - 50;
//    }
//
//    cout << "Array of random numbers: ";
//    for (int i = 0; i < SIZE; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << "\n";
//
//    int minVal = arr[0], maxVal = arr[0];
//    int minIndex = 0, maxIndex = 0;
//
//    for (int i = 1; i < SIZE; i++) {
//        if (arr[i] < minVal) {
//            minVal = arr[i];
//            minIndex = i;
//        }
//        if (arr[i] > maxVal) {
//            maxVal = arr[i];
//            maxIndex = i;
//        }
//    }
//
//    cout << "Minimum element: " << minVal << ", index: " << minIndex << "\n";
//    cout << "Maximum element: " << maxVal << ", index: " << maxIndex << "\n";
//}


//Exercise 4

//int main() {
//    const int SIZE = 200;
//    int arr[SIZE];
//
//    srand(GetTickCount());
//
//    for (int i = 0; i < SIZE; i++) {
//        arr[i] = rand() % 201; 
//    }
//
//    int one_digit_count = 0, two_digit_count = 0, three_digit_count = 0;
//
//    for (int i = 0; i < SIZE; i++) {
//        if (arr[i] < 10) {
//            one_digit_count++;
//        }
//        else if (arr[i] < 100) {
//            two_digit_count++;
//        }
//        else {
//            three_digit_count++;
//        }
//    }
//
//    double one_digit_percentage = (one_digit_count * 100.0) / SIZE;
//    double two_digit_percentage = (two_digit_count * 100.0) / SIZE;
//    double three_digit_percentage = (three_digit_count * 100.0) / SIZE;
//
//    cout << "Percentage of one-digit numbers: " << one_digit_percentage << "%" << "\n";
//    cout << "Percentage of two-digit numbers: " << two_digit_percentage << "%" << "\n";
//    cout << "Percentage of three-digit numbers: " << three_digit_percentage << "%" << "\n";
//}
