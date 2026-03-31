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

// ###################### Queue #########################3
void explainQueue() {
    queue<int> q;
    // PUSH/EMPLACE: Adding elements to the end (back) of the queue
    q.push(1);       // Queue: {1}
    q.push(2);       // Queue: {1, 2}
    q.emplace(4);    // Queue: {1, 2, 4}

    // BACK: Access the last element and modify it
    q.back() += 5;   // Adds 5 to the last element (4 + 5 = 9)
    cout << q.back(); // Output: 9 (Queue is now {1, 2, 9})

    // FRONT: Access the first element (the one that arrived first)
    cout << q.front(); // Output: 1

    //  POP: Removes the element from the front (the first element)
    q.pop();         // Removes 1 -> Queue is now {2, 9}

    // 6. AFTER POP: Checking the new front element
    cout << q.front(); // Output: 2

    // 7. OTHER FUNCTIONS: Same behavior as Stack
    // q.size();  -> Returns number of elements
    // q.empty(); -> Returns true (1) if empty
    // q.swap(q2); -> Swaps content with another queue
}

// ############### Priority Queue ###################################

void explainPQ() {
    //  MAX HEAP: By default, the largest element is at the top
    priority_queue<int> pq;

    //  PUSH/EMPLACE: Adding elements (they are automatically sorted)
    pq.push(5);        // pq: {5}
    pq.push(2);        // pq: {5, 2}
    pq.push(8);        // pq: {8, 5, 2}
    pq.emplace(10);    // pq: {10, 8, 5, 2}

    // TOP: Access the largest element (the top)
    cout << pq.top();  // Output: 10

    // 4. POP: Removes the largest element (the top)
    pq.pop();          // pq looks like: {8, 5, 2}

    // 5. AFTER POP: Checking the new top element
    cout << pq.top();  // Output: 8

    //        --- MINIMUM HEAP ---
    // MIN HEAP: Syntax to keep the SMALLEST element at the top
    priority_queue<int, vector<int>, greater<int>> min_pq;

    min_pq.push(5);       // min_pq: {5}
    min_pq.push(2);       // min_pq: {2, 5}
    min_pq.push(8);       // min_pq: {2, 5, 8}
    min_pq.emplace(10);   // min_pq: {2, 5, 8, 10}

    // 7. TOP: Access the smallest element
    cout << min_pq.top(); // Output: 2

    // size, swap, empty functions are the same as others

}
// ################## Set  ##########################

void explainSet() {
    // 1. INITIALIZATION: Stores unique elements in sorted order
    set<int> st;
    st.insert(1);  // {1}
    st.emplace(2); // {1, 2}
    st.insert(2);  // {1, 2} (2 is already present, so it won't be added again)
    st.insert(4);  // {1, 2, 4}
    st.insert(3);  // {1, 2, 3, 4} (Automatically sorted)

    // 2. FIND: Returns an iterator pointing to the element if found
    auto it = st.find(3);  // Points to 3
    auto it = st.find(6);  // Not found, so it points to st.end()

    // 3. ERASE: Removes elements from the set
   st.erase(5); // Erases '5' if it exists (takes logarithmic time)

    // 4. COUNT: Returns 1 if element exists, 0 if not (since elements are unique)
    int cnt = st.count(1); 

    // 5. ERASE BY ITERATOR:
    auto it = st.find(3);
    st.erase(it); // Deletes the element pointed by the iterator (takes constant time)

    // 6. ERASE BY RANGE: Erases everything between two iterators [first, last)
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // Erases elements from 2 up to 4 (4 is not included)

    // lower_bound() and upper_bound() function work in the same way
    // as per in vector it does.

    // This is syntax
    auto it =st.lower_bound(2);

    auto it =st.lower_bound(3);
}

// ##########################  Multiset ###################################33

void explainMultiSet() {
    // Everything is same as set but stores duplicate elements also
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    // ERASE ALL: This erases ALL occurrences of the value 1
    ms.erase(1); 

    // COUNT: Returns the number of times 1 appears
    int cnt = ms.count(1);

    // ERASE SINGLE: To erase only one instance of '1', use an iterator
    ms.erase(ms.find(1)); 

    // ERASE RANGE: Erase multiple instances using iterators
    ms.erase(ms.find(1), next(ms.find(1), 2)); 
}
 
// ###############  UnorderedSet ######################################

// An unordered_set stores unique elements, but they are not sorted (random order)

void explainUSet() {
    unordered_set<int> st;

    // 1. CHARACTERISTICS:
    // - Elements are unique (no duplicates).
    // - Elements are NOT stored in any particular order.
    // - It has better time complexity (O(1) average) than set.

    // 2. LIMITATIONS:
    // - lower_bound() and upper_bound() functions do NOT work.
    
    // All other functions like insert, find, size, empty, swap are same as set.
}

// #####################  Map ##################################

/* map<int, string> mpp; // Key is int, Value is string

mpp[1] = "Apple";
mpp[2] = "Banana";

// To access:
cout << mpp[1]; // Prints "Apple" */


void explainMap() {
    // 1. INITIALIZATION: Different ways to declare a map
    map<int, int> mpp;                    // Key is int, Value is int
    map<int, pair<int, int>> mpp2;        // Key is int, Value is a pair
    map<pair<int, int>, int> mpp3;        // Key is a pair, Value is int

    // 2. ADDING ELEMENTS: Using keys to assign values
    mpp[1] = 2;                           // Key 1 maps to value 2: {1, 2}
    mpp.emplace(3, 1);                    // Key 3 maps to value 1: {1, 2}, {3, 1}
    mpp.insert({2, 4});                   // Key 2 maps to value 4: {1, 2}, {2, 4}, {3, 1}

    // 3. COMPLEX KEYS: Using a pair as a key
    mpp3[{2, 3}] = 10;                    // Key {2,3} maps to value 10

    // 4. TRAVERSAL: Iterating through the map
    // Elements are automatically sorted by Key
    for(auto it : mpp) {
        // it.first = Key, it.second = Value
        cout << it.first << " " << it.second << endl;
    }

    // 5. ACCESSING VALUES: Using the Key
    cout << mpp[1];                       // Output: 2
    cout << mpp[5];                       // Output: 0 (If key doesn't exist, it returns 0)

    // 6. FINDING ELEMENTS: Returns an iterator
    auto it = mpp.find(3);                // Points to {3, 1}
    auto it = mpp.find(5);                // Points to mpp.end() (Not found)

    // size, empty, swap are same as other containers

    // 7. FINDING: Searching for a key using an iterator
    auto it = mpp.find(3);    // Finds key 3
    cout << (*it).second;     // Output: 1 (Value at key 3)

    // 8. FAILED SEARCH: If key is not found, iterator points to end()
    auto it = mpp.find(5); 

    // This is the syntax
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);
    // erase,swap,empty, are same as above
}

// #########################  Multimap ##########################

void explainMultimap() {
    // 1. CHARACTERISTICS: Same as map, but can store MULTIPLE identical keys
    // 2. SORTED: Elements are still stored in sorted order of keys
    // 3. IMPORTANT: mpp[key] cannot be used here because one key could have multiple values
    multimap<int, int> mpp;
}

void explainUnorderedMap() {
    // 1. CHARACTERISTICS: Same as Unordered_Set vs Set difference
    // 2. UNIQUE KEYS: Keys are unique, but NOT sorted (random order)
    // 3. TIME COMPLEXITY: O(1) in most cases (faster than map), O(N) in worst case
    unordered_map<int, int> mpp;
}

// CUSTOM COMPARATOR (comp): Used for custom sorting logic
// Example: Sort pairs based on the second element
bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second < p2.second) {
        return true; // p1 comes before p2
    } 
    else if (p1.second == p2.second) {
        // If second elements are equal, sort by first element in descending order
        if (p1.first > p2.second) return true; 
    }
    return false; 
}

void explainExtra() {
    // 1. SORT RANGE: Sorts only the elements from index 2 to index 3
    sort(a + 2, a + 4); 

    // 2. SORT DESCENDING: Sorts the entire array in decreasing order
    sort(a, a + n, greater<int>());

    // 3. SORT WITH COMPARATOR: Sorts using your own custom 'comp' function
    // sort(a, a + n, comp);
}


// ###################   Extra  ###################

void explainExtra() {
    // 1. SORTING: Basic sorting in ascending order
    sort(a, a + n);                    // Sorts an array 'a' from index 0 to n
    sort(v.begin(), v.end());          // Sorts a vector 'v' completely

    // 2. RANGE SORT: Sorts only a specific part
    sort(a + 2, a + 4);                // Sorts from index 2 to index 3

    // 3. DESCENDING SORT: Sorts in decreasing order
    sort(a, a + n, greater<int>());    // Uses greater<int> to reverse the order


    
    // 4. CUSTOM SORTING: Using the 'comp' function
    // Logic: Sort by second element; if same, sort by first element in descending
    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    sort(a, a + n, comp);              // Result: {{4, 1}, {2, 1}, {1, 2}}

    // 5. BUILT-IN POPCOUNT: Counts the number of set bits (1s in binary)
    int num = 7;                       // Binary of 7 is 111
    int cnt = __builtin_popcount(num); // Result: 3

    // 6. POPCOUNT FOR LONG LONG:
    long long num2 = 165786578687;
    int cnt2 = __builtin_popcountll(num2);

    // 7. NEXT PERMUTATION: Generates all possible dictionary orders
    // NOTE: For ALL permutations, the string must be SORTED first
    string s = "123";
    do {
        cout << s << endl;             // Prints: 123, 132, 213, 231, 312, 321
    } while(next_permutation(s.begin(), s.end()));

    // 8. MAX/MIN ELEMENT: Returns an iterator (use * to get value)
    // int maxi = *max_element(a, a + n);
}
