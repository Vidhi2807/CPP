// #include <iostream>
// #include <list>
// using namespace std;

// int main() {
//     int m, n, x;
//     list<int> L1, L2, L3;

//     cout << "L1: ";
//     cin >> m;
//     for(int i = 0; i < m; i++){
//         cin >> x;
//         L1.push_back(x);
//     }
    
//      cout << "L2: ";
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         cin >> x;
//         L2.push_back(x);
//     }
    

//  for(int val : L1)
//         L3.push_back(val);

//     for(int val : L2)
//         L3.push_back(val);

//     cout << "Merge : ";
//     for(int val : L3)
//         cout << val << " "<<endl;
        
//         L3.reverse();
//  cout << "Reverse : ";
//     for(int val : L3)
//         cout << val << " "<<endl;


    

//     return 0;
// }


// // algorithm :
// // 1.find method 


// samir singh kshatriya
// 15:27
// #include<iostream>
// #include<vector>
// #include<set>
// #include<algorithm>

// using namespace std;

// int main(){
    
//     vector <char> v1 = {'S', 'z', 'r', 'D'};
    
//     set <int> s1 = {23,-56, 78, 90, 125};
    
//     cout << "Vector Operation for Find method...." << endl;
//     auto itr = find(v1.begin(), v1.end(), 'X');
    
//     if(itr != v1.end()){
//         cout << "Element exist:  " << *itr << endl;
//     }
//     else{
//         cout << "Element doesn't exist" << endl;
//     }
    
//     cout << "Set operation  for Find method..." << endl;
    
//     auto itr1 = find(s1.begin(), s1.end(), -56);
    
//     if(itr1 != s1.end()){
//         cout << "Element exist:  " << *itr1 << endl;
//     }
//     else{
//         cout << "Element doesn't exist" << endl;
//     }

    
//     return 0;
// }


// //2. sort method : 


// #include<iostream>
// #include<vector>
// #include<list>
// #include<algorithm>

// using namespace std;

// int main(){
    
//     vector <char> v1 = {'S', 'z', 'r', 'D'};
    
//     list <int> s1 = {23,-56, 78, 90, 125};
    
//     cout << "Vector Operation for Sort method...." << endl;
    
//     sort(v1.begin(), v1.end());
    
//     for(const auto& value : v1){
//         cout << "After performing sort operation in v1:  " << value<< endl;
//     }
    
//     cout << "List operation  for Sort method..." << endl;
    
//     sort(s1.begin(), s1.end());
    
//     for(const auto& value1 : s1){
//         cout << "After performing sort operation in s1:  " << value1<< endl;
//     }
    
    
    
//     return 0;
// }



// // 3. reverse method 


// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// // sort -> method :: vector, array and deque........

// int main(){
    
//     vector <char> v1 = {'S', 'z', 'r', 'D'};
    
    
//     cout << "Vector Operation for Sort method...." << endl;
    
//     sort(v1.begin(), v1.end());
    
//     for(const auto& value : v1){
//         cout << "After performing sort operation in v1:  " << value<< endl;
//     }
    
//     reverse(v1.begin(), v1.end());
    
//     cout << "Reverse Operation......" << endl;
    
//        for(const auto& value : v1){
//         cout << "After performing sort operation in v1:  " << value<< endl;
//     }
 
    
    
//     return 0;
// }


// // 4 . accumulate method 

// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<numeric>
// using namespace std;

// // sort -> method :: vector, array and deque........

// int main(){
    
//     vector <int> v1 = {10,20,35};
    
    
//    cout << "Performing accumulate operation..." << endl;
   
//    int result = accumulate(v1.begin(), v1.end(),0);
    
    
//     cout << "The total sum is:  " << result << endl;
//     return 0;
// }

// //5. binary search 

// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<numeric>
// using namespace std;

// // sort -> method :: vector, array and deque........

// int main(){
    
//     vector <int> v1 = {45, -76, 80, 12, 56};
    
//     cout<< "Sort Operation is excecuting..." << endl;
    
//     sort(v1.begin(), v1.end());
    
//     cout<< "Soretd element are:  " << endl;
    
//     for(const auto& value : v1){
        
//         cout << "Value are:  " << value << endl;
//     }
    
//    cout << "Performing Binary operation..." << endl;
   
//    bool result = binary_search(v1.begin(), v1.end(), -12);
   
//    if(result){
//        cout << "Particvular Elementn is exist" << endl;
//    }
//    else{
//        cout << "Element doesn't exist" << endl;
//    }
   
//     return 0;
// }

// // 6.copyy  method 

// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<numeric>
// using namespace std;

// // sort -> method :: vector, array and deque........

// int main(){
    
//     vector <int> v1 = {45, -76, 80, 12, 56};
//     vector <int> v2(v1.size());
    
//     copy(v1.begin(), v1.end(), v2.begin());
    
//     for(const auto& value : v2){
//         cout << "Copied element from the ooriginal vector is:  " << value << endl;
//     }
   
//     return 0;
// }


// //7. partial sort method 

// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<numeric>
// using namespace std;

// // sort -> method :: vector, array and deque........

// int main(){
    
//     vector <int> v1 = {45, -76, 80, 12, 56};
    
//     partial_sort(v1.begin(), v1.begin() + 3, v1.end());
    

//     for(const auto& value : v1){
//         cout << "Sorted element from the ooriginal vector is:  " << value << endl;
//     }
   
//     return 0;
// }