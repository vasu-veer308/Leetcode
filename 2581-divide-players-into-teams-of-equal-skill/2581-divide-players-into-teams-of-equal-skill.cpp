class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        std::sort(skill.begin(), skill.end());
        int total_skill = skill.front()+skill.back();
        int len=skill.size();
        long long chemistry=0;
        for(int i=0;i< len/2;i++){
            if ((skill[i]+skill[len-i-1])!=total_skill){
                return -1;
            }
            else{
                chemistry+=skill[i]*skill[len-i-1];
            }
        }
        return chemistry;
    }
};