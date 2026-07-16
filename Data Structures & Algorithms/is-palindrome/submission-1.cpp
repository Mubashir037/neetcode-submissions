class Solution {
public:
    bool isPalindrome(string s) {
        //int j=s.size()-1;
        for(int i=0;i<s.size();i++)
        {

             s[i] = toupper(s[i]);
        }
      // cout<<s;
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if (s[i] < '0' || (s[i] > '9' && s[i] < 'A') || s[i] > 'Z')
            {
                i++;
                continue;
            }
             if (s[j] < '0' || (s[j] > '9' && s[j] < 'A') || s[j] > 'Z')
            {
                j--;
                continue;
            }

            if(s[i]!=s[j]){
                
                                return false;
            }
            i++;
            j--;
        }






       
//         for(int i=0;i<s.size()/2;i++)
//         {
//             if (s[i] < '0' || (s[i] > '9' && s[i] < 'A') || s[i] > 'Z') {
                
//                 continue;
                

// }
// if(s[j] < '0' || (s[j] > '9' && s[j] < 'A') || s[j] > 'Z') {
//     j--;
//     continue;
// }
            
//             if(s[j]!=s[i] )
//             {
//                 cout<<s[i]<<endl;
               
//                 return false;
//             }
//             j--;
//         }
        return true;
        
    }
};
