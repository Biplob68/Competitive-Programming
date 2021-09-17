// Set is a  C++ STL container used to store the unique elements,
// and all the elements are stored in a sorted manner.
// Sets are implemented using Binary search trees. so
// Insertions, deletions,and searches on the ordered set require O(log n) time

set < int > s;

// Insert element on set
s.insert(1); // [1]
s.insert(15); // [1,15]
s.insert(9); // [1,9,15]
s.insert(2); // [1,2,9,15]
s.insert(5); // [1,2,5,9,15]

// Print all element of set
set<int >::iterator it, it1, it2 ;
for (it = s.begin() ; it != s.end() ; it++ )
{
        cout << *it<<" "; // output - [1 2 5 9 15]
}

// set.find(val)
// Returns an iterator pointing to the element, if the element is found
// else return an iterator pointing to the end of the set.
it1 = s.find(2); // it will search 2 on set and return pointer
if(s.find(2) != s.end()) // that's means the value 2 contains in the set


// Remove element from set
s.erase(5) // [1,2,9,15]
s2.erase(s2.begin(), s2.find(9)); // [9,15] // remove from begin position to less than 9


// Upper bound and lower bound
// [1,2,5,9,14]
cout << *s.upper_bound(9) // 14 // upper bound return greater than 9
cout << *s.upper_bound(7) // 9 // upper bound return greater than 7
cout << *s.lower_bound(9) // 9 // lower bound return equal or greater than 5
cout << *s.lower_bound(7) // 9



// assigning the elements from s1 to s2
set<int> s2(s1.begin(), s1.end());

// set count
s.count(5) // return 1 if the element if found otherwise return 0


// multiset store element in s sorted order but store same values many times
multiset < int > ms;
