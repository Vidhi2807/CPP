#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a num : ";
    cin >> num;

    if (num > 0) {
        cout << "Num Positive" << endl;
    }
    else if (num < 0) {
        cout << "Num Negative" << endl;
    }
    else {
        cout << "Num Zero" << endl;
    }

    if (num % 2 == 0) {
        cout << "Num Even" << endl;
    }
    else {
        cout << "Num Odd" << endl;
    }

    return 0;
}

//task : 2
#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, next;

    cout << "Enter no.'s: ";
    cin >> n;

    cout << "Fibonacci : ";

    for (int i = 1; i <= n; i++) {
        cout << a << "  ";
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}



#include <fstream>
#include <string>


int main() {
    ofstream file;
    string data;

    file.open("example.txt"); 

    if (file.is_open()) {
        cout << "Enter text: ";
        getline(cin, data);   

        file << data << endl; 

        file.close();
       
    }

    return 0;
}

//task : 6 
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
    
    return 0;
}