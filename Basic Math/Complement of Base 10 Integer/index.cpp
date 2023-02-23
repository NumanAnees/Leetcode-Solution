class Solution {
private:
string binary(int n,string st){
    if(n==0){
        return st;
    }
    st = to_string(n%2) + st;
   return binary(n/2,st);
}
int decimal(string cm){
    int ans=0;
    int power = 0;
    for(int i=cm.length()-1;i>=0;i--){
        if(cm[i]=='0'){
            power++;
        }else
        {
            cout<<power;
            ans = ans + pow(2,power);
            power++;

        }
    }
    return ans;
}
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        string st = binary(n,"");
        string cm = "";
        for(int i=st.length()-1;i>=0;i--){
           if(st[i]=='0'){
               cm = '1' + cm;
           }else{
                cm = '0' + cm;
           }
        }

        return decimal(cm);
    }
};