#include <iostream>
using namespace std;

// Task : 1 

// int main() {
//     int num;

//     cout << "Enter a num : ";
//     cin >> num;

//     if (num > 0) {
//         cout << "Num : Positive" << endl;
//     }
//     else if (num < 0) {
//         cout << "Num : Negative" << endl;
//     }
//     else {
//         cout << "Num : ero" << endl;
//     }

//     if (num % 2 == 0) {
//         cout << "Num : Even" << endl;
//     }
//     else {
//         cout << "Num : Odd" << endl;
//     }

//     return 0;
// }

//task : 2

// int main() {
//     int n, a = 0, b = 1, next;

//     cout << "Enter no.'s: ";
//     cin >> n;

//     cout << "Fibonacci : ";

//     for (int i = 1; i <= n; i++) {
//         cout << a << "  ";
//         next = a + b;
//         a = b;
//         b = next;
//     }

//     return 0;
// }

//task : 3 
// #include <string>

// int main() {
    
//     string input;
//     cout << "Enter no.: ";
//     cin >> input;

//     string reversed = "";
    
//     for (int i = input.length() - 1; i >= 0; i--) {
//         reversed += input[i];
//     }

//     if (input == reversed) {
//         cout <<  " palindrome." << endl;
//     } else {
//         cout << " not a palindrome." << endl;
//     }

//     return 0;
// }

// //task : 4
#include <iostream>
using namespace std;

// int main() {
//     int arr[5];
//     int sum = 0;
//     int avg;

//     cout << " 5 elements:" << endl;
//     for (int i = 0; i < 5; i++) {
//         cin >> arr[i];
//         sum += arr[i];
//     }

//     avg = sum / 5;

//     cout << "Average = " << avg << endl;

//     cout << "Index numbers where average >= array element:" << endl;
//     for (int i = 0; i < 5; i++) {
//         if (avg >= arr[i]) {
//             cout << "Index: " << i << endl;
//         }
//     }

//     return 0;
// }

#include<string>
struct Employee{
    int ID;
    string name;
    int salary;
};


int main(){
    
    int size = 0;
    
    cout<< "enter the size of array:  " << endl;
    cin >> size;
    
    Employee emp[size];
    
    for(int i=0; i<2; i++){
        cout<< "Enter you're id:  " << endl;
        cin >> emp[i].ID;
        cout << "enter you're name:  " << endl;
        cin >> emp[i].name;
        cout<<"enter you valid salary:  " << endl;
        cin >> emp[i].salary;
    }
    
    for(int i=0; i< 2; i++){
        cout<< "current index number is:  " << i << " empyee id is: " << emp[i].ID << " Employee name is: " << emp[i].name << endl;
    }
    
    int max = 0;
    
    for (int i = 1; i < size; i++) {
        if (emp[i].salary > emp[max].salary) {
            max = i;
        }
    }
    
    cout << "\nEmployee with highest salary:\n";
    cout << "ID: " << emp[max].ID << endl;
    cout << "Name: " << emp[max].name << endl;
    cout << "Salary: " << emp[max].salary << endl;

    return 0;
}

