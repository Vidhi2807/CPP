// #include <iostream>
// #include <set>
// using namespace std;

// int main(){

//    set<char> s1;
//    set<char> s2 = {'a','b','c','d'};  //maintain order

  
//    for(char value : s2){
//     cout << value << endl;
//    }

//    //insert
//    s1.insert('G');
//    for(char value : s1){
//     cout << "s1 variable value: " << value << endl;
//    }


//      //erase
//    s2.erase('b');
   
//    for(char value : s2){
//     cout << value << endl;
//    }
   
//    //find operation..
//    auto itr = s2.find('f'); // kuch bhi find krne ke liye

//    if(itr != s2.end()){
//     cout << "Founded the element: " << *itr << endl;
//    }
//    else{
//     cout << "Element doesn't exit" << endl;
//    }


//     return 0;
// }


 //2nd  

// #include <iostream>
// #include <set>
// using namespace std;

// int main(){

//    multiset<int> s1;
//    multiset<int> s2 = {34,-78,56,32,78,34,-78};  //maintain a order and duplicate element
    
//    for(int value : s2){
//     cout << value << endl;
//    }
 
//    //Erase
//    s2.erase(32);

//    cout << endl;
   
//        for(int value : s2){
//     cout << value << endl;
//    }

//    //count
//    cout << s2.count(-78) << endl;
//    cout << s2.count(34) << endl;


//    auto itr = s2.find(-76);

//    if(itr != s2.end()){
//         cout << "Element got:  " << *itr << endl;
//     }
//     else{
//         cout << "Given element is not exist" << endl;
//     }


//     return 0;
// }



//3rd 

// #include <iostream>
// #include <string>
// #include <map>
// using namespace std;

// int main(){
 
//     //m1 

//   map<string,char>m1;

//   m1.insert({"april",'A'});
//   m1.insert({"april",'G'});

//   //erase
//   m1.erase("april");

//    for(auto& [key,value] : m1){
//     cout << "Current Key is: " << key << " and the value is: " << value << endl;
//     }



//   m1["Dharmi"] = 'A';
//   m1["Vishwa"] = 'o';
//   m1["VishwaJ"] = 'B';

//   for(auto& [key,value] : m1){
//     cout << "Current Key is: " << key << " and the value is: " << value << endl;
//     }

//     //m2 

//     map<int,string> m2;

//     m2[5] ="Dharmi";
//     m2[-89] = "Vishwa";
//     m2[0]="VishwaJ";

//     cout << endl;

//     for(auto& [key,value] : m1){
//     cout << "Current Key is: " << key << " and the value is: " << value << endl;
//     }


//     cout << endl;

//     m2[0]="Dharmi";
//     //at 

//     cout << m2.at(5) << endl;



//     return  0;
// }


//4th

#include <iostream>
#include <unordered_set>
#include <string>
#include <map>
using namespace std;

int main(){


    unordered_set<int>s1 ={4,67,89,-98,34};

    for(int value: s1){
        cout << value << endl;
    }

    return 0;
}


// HEAPPP :


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

  vector<int> v1 = {23,64,1,31,20,-5,0};
  cout<<"normal element before performing heap (max-heap) operations: "<<endl;
  for(const auto & value: v1){
    cout<<"value are ......: "<<value<<endl;
  }
  cout<<"normal element before performing heap (max-heap) operations: "<<endl;

  make_heap(v1.begin(),v1.end());
  for(const auto & value: v1){
    cout<<"value are ......: "<<value<<endl;
  }


  
  cout << " using vector template pop_back metod to delete the last eleemnt which was actually the root element ";
  v1.pop_back();
  for(const auto & value: v1){
    cout<<"value are ......: "<<value<<endl;
  }
  
  cout << " for insertion purpose us etemplate prebuild methid , so for vector we will use push_back"<< endl;
  v1.push_back(49);
  for(const auto & value: v1){
    cout<<"value are ......: "<<value<<endl;
  }
  
  cout << " for balanacing use HEAP (push_heap)method " << endl;
  
  push_heap(v1.begin(),v1.end());
  for(const auto & value: v1){
    cout<<"value are ......: "<<value<<endl;
  }
  
  
  return 0;
}
