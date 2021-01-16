class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> res(encoded.size() + 1);
        
        res[0] = first;
        int previous = first;
        
        for (int i = 0; i < encoded.size(); ++i) {
            previous = encoded[i] ^ previous;
            
            res[i + 1] = previous;
        }
        
        return res;
    }
};
