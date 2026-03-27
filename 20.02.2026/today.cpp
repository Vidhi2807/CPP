// // forward iterator :

// #include <iostream>
// #include <vector>  
// #include <list>
// #include <set>
// #include <map>
// #include <string>

// using namespace std;

// int main(){
//     cout << "Forward Iterator used in the below example ..." << endl;
//     vector<char> v1 = {'S', 'z', 'r', 'D'};

//     auto itr = v1.begin();

//     while (itr != v1.end()){
//             cout << "Current element present in vector is : " << *itr << endl;
//             ++itr;
//     }

//     list <string> l1 = {"Hello", "World", "C++", "Programming"};    
//     auto itr1 = l1.begin();

//     while (itr1 != l1.end()){
//         cout << "Current element present in list is : " << *itr1 << endl;
//         ++itr1;
//     }
 
//     set <int> s1 = {23, -56, 78, 90, 125};
//     auto itr2 = s1.begin();
//     while (itr2 != s1.end()){
//         cout << "Current element present in set is : " << *itr2 << endl;
//         ++itr2;
//     }

//     map <int, float> m1 ;
//     m1[1] = 3.14;
//     m1[2] = 2.71;       


//     auto itr3 = m1.begin();
//     while (itr3 != m1.end()){
//         cout << "Current element present in map is : " << itr3->first << " and the value is : " << itr3->second << endl;
//         ++itr3;
//     }
//     return 0;

  
    


//     }
    
    

// Bidirectional iterator :



#include <iostream>
#include <vector>  
#include <list>
#include <set>
#include <map>
#include <string>

using namespace std;

int main(){
    cout << "Forward Iterator used in the below example ..." << endl;
    vector<char> v1 = {'S', 'z', 'r', 'D'};

    auto itr = v1.end()-1;

    while (itr != v1.begin()-1){
            cout << "Current element present in vector is : " << *itr << endl;
            --itr;
    }

    list <string> l1 = {"Hello", "World", "C++", "Programming"};    
    auto itr1 = l1.end();

    while (itr1 != l1.begin()){
                --itr1;

        cout << "Current element present in list is : " << *itr1 << endl;
    }
 
    set <int> s1 = {23, -56, 78, 90, 125};
    auto itr2 = s1.end();
    while (itr2 != s1.begin()){
                --itr2;

        cout << "Current element present in set is : " << *itr2 << endl;
    }

    map <int, float> m1 ;
    m1[1] = 3.14;
    m1[2] = 2.71;       


    auto itr3 = m1.end()  ;
    while (itr3 != m1.begin()){
                --itr3;

        cout << "Current element present in map is : " << itr3->first << " and the value is : " << itr3->second << endl;
    }
    return 0;

  
    }