class Solution
{
  public:
    char firstRep (string s)
    {
        //code here.
        unordered_map<char,int>map;
        for(int i=0; i<s.length(); i++){
            map[s[i]]++;
        }
        
        for(int i=0; i<s.length(); i++){
            if(map[s[i]]>1) {
                return s[i];
            }
        }
        return '#';
    }
};