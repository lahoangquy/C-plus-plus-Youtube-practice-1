
// Problem : We need to find the sum of all naturals numbers which can divide by 3 or 5. 3/3 = 1 but 1 can not divide by 3

// Solution is : We need to loop all number from 3 and we will not include 1 and 2 as these numbers can not divide by 3.
//                We will use the modulo operator to check that the rest of the division of a number by 3 and 5 is 0
//                  But if we make the upper limit is too large , it will result in an overflow.
#include <iostream>
using namespace std;

int main()
{
    unsigned int limit = 0;
    cout << "Upper limit: ";
    cin >> limit;

    unsigned long long sum = 0;
    for (unsigned int i = 3; i < limit; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i; // sum = sum+i
        }
    }
    cout << "Sum is " << sum << endl;
}


