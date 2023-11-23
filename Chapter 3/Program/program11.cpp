// This program tracks the innventory of three widget stores
// that opened at the seame tiem. Enach store started wuth the
// same number if widgets in inventory. By subtracting the 
// number if wudgets each store has sold from its inventory,
// the current inventory can be calculated.
#include <iostream>
using namespace std;

int main()
{
    int begInv,
        sold,
        store1,
        store2,
        store3;

// Get the beginning inventory for all the stores.
cout << " One week ago, 3 new widget stores opened\n";
cout << " at he same time with the same beginning\n" ;
cout << " inventory. What was the beginning inventory?";
cin >> begInv;

// Set each store's inventory.
store1 = store2 = store3 = begInv;

// Get the number of widgets sold at store 1.
cout << " How many widgets has store 1's inventory?";
cin >> sold;
store1 -= sold;     // Adjust store 1's inventory.

// Get the number of widgets sold at store 2.
cout << " How many widgets has store 2's inventory?";
cin >> sold;
store2 -= sold;     // Adjust store 2's inventory.

// Get the number of widgets sold at store 3.
cout << " How many widgets has store 3's inventory?";
cin >> sold;
store3 -= sold;     // Adjust store 3's inventory.

// Dispaly each store's current inventory.
cout << " \nThe current inventory of each store:\n";
cout << " Store 1: " <<store1 << endl;
cout << " Store 2: " << store2 <<endl;
cout << " Store 3: " << store3 << endl;
return 0;
}