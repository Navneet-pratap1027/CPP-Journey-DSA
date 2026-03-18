#include <bits/stdc++.h>
using namespace std;

void print(){
    cout << "Navneet";
}

int sum(int a,int b){
    return a+b;
}
int main(){
    print();
    int s=sum(2,5);
    cout << s;
    return 0;
}


// #include <utility> these pair come under utlity lib..
void explainPair() {
    // 1. BASIC PAIR: Stores two related values together
    // Syntax: pair<type1, type2> name = {val1, val2};
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second; // Output: 1 3 (p.first is 1, p.second is 3)

    // 2. NESTED PAIRS: Storing 3 or more values by putting a pair inside a pair
    // Accessing uses chaining: .second.first or .second.second
    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    // p2.first -> 1
    // p2.second.second -> 4
    // p2.second.first -> 3
    cout << p2.first << " " << p2.second.second << " " << p2.second.first;

    // 3. ARRAY OF PAIRS: A list where each element is a pair
    // Useful for coordinates (x, y) or key-value pairs
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    
    // Access: arr[index].member
    cout << arr[1].second; // Output: 5 (Second element of the 2nd pair)



// #include <vector> for using vector(Dynamic array)
void explainVector() {
    // 1. INITIALIZATION: Creating an empty vector of integers (Size is 0)
    vector<int> v; 

    // 2. ADDING ELEMENTS: Both add elements to the end of the vector
    v.push_back(1);    // Adds 1 -> {1}
    v.emplace_back(2); // Adds 2 -> {1, 2} (Generally faster than push_back)

    // 3. VECTOR OF PAIRS: Storing pairs inside a dynamic array
    vector<pair<int, int>> vec; 
    vec.push_back({1, 2});    // Standard insert using curly braces
    vec.emplace_back(1, 2);   // Automatically assumes it's a pair (No braces needed)

    // 4. PRE-DEFINED SIZE: Creates a vector with 5 elements (Default value is 0)
    // Result: {0, 0, 0, 0, 0}
    vector<int> v_sized(5); 

    // 5. SIZE + DEFAULT VALUE: Creates 5 elements, all initialized to 100
    // Result: {100, 100, 100, 100, 100}
    vector<int> v1(5, 100); 

    // 6. COPYING VECTORS: Creates a new vector 'v2' as an exact copy of 'v1'
     vector<int> v1(5, 20);
    vector<int> v2(v1); 


//  ITERATORS: Acts like a pointer to access memory locations

vector<int>::iterator it = v.begin(); // v.begin() =>Technically, it points to the memory address of the first element.
it++;                                 // Moves 'it' to the 2nd element.
cout << *(it) << " ";                 // Prints the value at 2nd element.

it = it + 2;                          // Moves 'it' forward by 2 positions.
cout << *(it) << " ";                 // Prints the value at that new position.

vector<int>::iterator it = v.end();    // Points AFTER the last element (empty space).
vector<int>::iterator it = v.rend();   // Reverse End: Points BEFORE the first element.
vector<int>::iterator it = v.rbegin(); // Reverse Begin: Points at the LAST element.

cout << v[0] << " " << v.at(0); // Both print the 1st element.
cout << v.back() << " ";        // Directly prints the LAST element's value.

for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    cout << *(it) << " ";
} // older and long method toh print all vector element

for(auto it = v.begin(); it != v.end(); it++){
    cout << *(it) << " ";
}

for(auto it : v){
    cout << it <<" ";
}

// {10,20,12,23}
v.erase(v.begin()+1);// after deletion {10,12,23}

// {10,20,12,23,35}
v.erase(v.begin()+2,v.begin()+4);// {10,20,35} [start, end)=> include start index but not end index.


// Insert function

vector<int>v(2,100);// {100,100}  Creates a vector of size 2, where both elements are initialized to 100
// INSERT: Adds 300 at the very beginning
v.insert(v.begin(), 300); // {300,100,100}

// INSERT MULTIPLE: Adds the value '10' two times starting at index 1
v.insert(v.begin() + 1, 2, 10); // {300,10,10,100,100}

// INSERT VECTOR: Insert an entire vector 'copy' into vector 'v'
v.insert(v.begin(), copy.begin(), copy.end()); 

// SIZE: Returns the number of elements
cout << v.size(); 

// POP_BACK: Removes the last element
v.pop_back();

// 1. SWAP: Exchanges the contents of two vectors
// v1=>{10,30}
// v2=>{50,60}
v1.swap(v2); // v1=>{50,60},v2=> {10,30}

// 2. CLEAR: Removes all elements from the vector at once (Size becomes 0)
v.clear(); 

// 3. EMPTY: Checks if the vector has no elements
// Returns 'true' (1) if size is 0, else returns 'false' (0)
cout << v.empty();
}

// #################  LIST ##########################################

void explainList(){
    list<int>ls;

    ls.push_back(2); //{2}
    ls.emplace_back(4);// {2,4}

    ls.push_front(5); // {5,2,4}
    ls.emplace_front();// same work but faster then front

// Rest function same as vector 
// begin,end,rbegin,rend,clear,insert,size,swap
}

// ############ Deque ##############################################

void explainDeque(){
    deque<int>dq;

    dq.push_back(2); //{2}
    dq.emplace_back(4);// {2,4}

    dq.push_front(5); // {5,2,4}
    dq.emplace_front();// same work but faster then front

    dq.pop_back(); // {5,2}
    dq.pop_front(); //{2,4}

    dq.back(); // BACK: Returns the value of the LAST element (Does NOT delete it)

    dq.front(); // // FRONT: Returns the value of the FIRST element (Does NOT delete it)

// Rest function same as vector 
// begin,end,rbegin,rend,clear,insert,size,swap
}

// ################ Stack ###################################

void explainStack() {
    stack<int> st;
    //  PUSH/EMPLACE: Adding elements to the top of the stack
    st.push(1);        // Stack: {1}
    st.push(2);        // Stack: {2, 1}
    st.push(3);        // Stack: {3, 2, 1}
    st.push(3);        // Stack: {3, 3, 2, 1}
    st.emplace(5);     // Stack: {5, 3, 3, 2, 1} (Similar to push, but faster)

    //  TOP: Access the element at the very top (the last one added)
    // Note: st[2] is INVALID. You can ONLY access the top element in a stack.
    cout << st.top();  // Output: 5
    
    //  POP: Removes the element from the very top
    st.pop();          // Stack now looks like: {3, 3, 2, 1}

    // 5. AFTER POP: Checking the new top element
    cout << st.top();  // Output: 3

    // 6. SIZE: Returns the number of elements in the stack
    cout << st.size(); // Output: 4

    // 7. EMPTY: Returns 'true' (1) if the stack is empty, otherwise 'false' (0)
    cout << st.empty(); 

    // 8. SWAP: Exchanges contents of two stacks
    stack<int> st1, st2;
    st1.swap(st2);
}




