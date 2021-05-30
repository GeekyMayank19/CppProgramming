class Solution {
public:
    int countGoodSubstrings(string s) {
        int j,k;
        int cnt=0;
        if(s.size()==1){
            return 0;
        }
        for(int i=0;i<s.size()-2;i++){
            j=i+1;
            k=i+2;
            char a,b,c;
            a=s[i];
            b=s[j];
            c=s[k];
            // cout<<a<<" "<<b<<" "<<c<<endl;
           if(a!=b){
               if(a!=c){
                   if(b!=c){
                       cnt++;
                   }
               }
           }
        }
        if(cnt!=0){
            return cnt;
        }
         return 0;
    }
   
};