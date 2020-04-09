class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int i=0;
        while(i<S.size()){
            if(S[i]=='#'){
                if(i==0){
                    S.erase(S.begin());
                }
                else{
                  S.erase(S.begin()+i);
                //cout<<i<<endl;
                i--;
                //cout<<i<<endl;
                if(i>=0)
                    S.erase(S.begin()+i);
                }
                
            }
            else{
                if(S[i]!='#')
                    i++; 
            }
        }
        int j=0;
         while(j<T.size()){
            if(T[j]=='#'){
                if(j==0){
                    T.erase(T.begin());
                }
                else{
                  T.erase(T.begin()+j);
                //cout<<j<<endl;
                j--;
                //cout<<j<<endl;
                if(j>=0)
                    T.erase(T.begin()+j);
                }
                
            }
            else{
                if(T[j]!='#')
                    j++; 
            }
        }
       // cout<<S<<endl<<T;
        return S==T;
    }
};
