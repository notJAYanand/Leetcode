class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        
        /*
        int i=0;
        int j=numbers.size()-1;
        
        while(i<j)
        {
            int x=numbers[i]+numbers[j];
            
            if(x>target)
            {
                j--;
            }
            else if(x<target)
            {
                ++i;
            }
            else
            {
                res.push_back(i+1);
                res.push_back(j+1);
            }
            
        }

        return res;
        */
        
        
       int n = numbers.size();
//         int j=n/2;
        
//         if(target<numbers[j])
//         {
//             for(int i=0;i<j;i++)
//             {
//                 for(int k=i+1;k<j;k++)
//                 {
//                     if(numbers[i]+numbers[k]==target)
//                     {
//                         res.push_back(i+1);
//                         res.push_back(k+1);
//                     }
//                 }
//             }
//         }
//         else //if(target>=numbers[j])
//         {
//             for(int i=0;i<n;i++)
//             {
//                 for(int k=i+1;k<n;k++)
//                 {
//                     if(numbers[i]+numbers[k]==target)
//                     {
//                         res.push_back(i+1);
//                         res.push_back(k+1);
//                     }
//                 }
//             }
//         }
        
        int l=0;
        int h=n-1;
        while(l<h)
        {
            if(numbers[l]+numbers[h]==target)
            {
                res.push_back(l+1);
                res.push_back(h+1);
                l++;h--;
            }
            else if(numbers[l]+numbers[h]>target)
            {
                h--;
            }
            else
            {
                l++;
            }
            
        }
        return res;
      
    }
};