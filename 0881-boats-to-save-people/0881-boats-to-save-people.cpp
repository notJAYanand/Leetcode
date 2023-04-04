class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        // int k=limit;
        // float sum=0;
        int count=0;
        sort(people.begin(),people.end());
        int i=0;
        int j=n-1;
        
        while(i<=j) {
            if(people[i]+people[j]<=limit) {
                i++; //if sum of lightest man and heaviest woman is under or 
                j--;         //equal to the limit, they can go together in a single boat  
            }
            else {
                j--;  //else only heavy woman will go
            }
            count++;  // get new boat after every judgement
        }
        return count;
    }
};