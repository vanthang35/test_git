#include <iostream>
#include <vector>
using namespace std;

class solution
{
    public:
    int trap1(const vector<int> &height ) // brute force
    {
        if(height.empty()) return 0;
        for(int i = 0 ; i< height.size() - 1; i++)
        {
            
        }
    } 
    int trap2(const vector<int> &height) // 2 pointer 
    {
        if(height.empty()) return 0;
        int left =0, right = height.size()-1;
        int maxleft = 0; 
        int maxright = 0;
        int value =0;
        while(left < right)
        {
            if(height[left] < height[right])
            {
                if(height[left] > maxleft)
                {
                    maxleft = height[left];
                }else
                {
                    value += maxleft - height[left];
                }
                ++left;
            }else{
                if(height[right ] > maxright)
                {
                    maxright = height[right];
                }else
                {
                    value += maxright - height[right];
                }
                --right;
            }
        }
        return value;       
    }
};
int main()
{
    vector<int> height = {0, 1, 0, 2, 1, 0, 3, 1, 0, 1, 2};
    solution sol;
    int value = sol.trap2(height);
    cout << value << endl;
    return 0;

}