class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool res=true;
        int n1=s.size();
        int n2=t.size();
        int j=0;
        for( int i=0;i<n2 && j<n1;i++){// running the two loop simultaneously
            if(s[j]==t[i]){
                j++;
            }
            else{
                continue;
            }
        }
        if(j==n1){//number of incremention j made should be equal to the size of s
            return true;
        }
        else{// if any one increment gets missing due to inequal condition 
            return false;
        }

    }
};
