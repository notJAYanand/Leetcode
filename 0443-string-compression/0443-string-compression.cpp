class Solution {
public:
    int compress(vector<char>& chars) {
		if(chars.size() < 2)
			return chars.size();

		int  i = 0;
		int  j = 0;

		while(i < chars.size()) {
			chars[j] = chars[i];
			int cnt = 0;
			while(i < chars.size() && chars[i] == chars[j]) {
				cnt++;
				i++;
			}

			if(cnt == 1) {
				j++;
			} else {
				string str = to_string(cnt);
				for(auto ch: str)
					chars[++j] = ch;
				j++;
			}
		}

		return j;
	}
//     int compress(vector<char>& chars) {
//         int n=chars.size();
//         if(n==1) {
//             return 1;
//         }
        
//         sort(chars.begin(),chars.end());
        
//         // string s="";
//         int j=1;
//         for(int i=0;i<n;i++) {
//             int count=1;
//             while(chars[i]!=chars[j]) {
//                 count++;
//                 j++;
//             }
//             i=j;
//             if(count==1) {
//                 // s+=chars[i];
//                 // s[i-1]=
//             }
//             if(count<10 && count>1) {
//                 // s+=chars[i];
//                 chars[i-1]='0'+count;
//             }
//             if(count>10) {
//                 s+=chars[i];
//                 s+=to_string(count);
                
//             }
//             j++;
//         }
//         return s.size();
//     }
};