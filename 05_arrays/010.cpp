#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> nums;
    nums.assign(10,1);

    nums[0] = 7;
    nums[9] = 7;
	
	nums.erase(nums.begin() + 4);
	cout << "\n" << nums.size() << endl;

    for(auto n: nums)
    {
        cout << n << " ";
    }

    return 0;
}
