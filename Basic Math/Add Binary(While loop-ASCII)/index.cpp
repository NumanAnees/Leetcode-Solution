class Solution
{
public:
    string addBinary(string a, string b)
    {
        string s = ""; //result string
        
        int carry = 0, i = a.size() - 1, j = b.size() - 1; //c=carry, i=last index of string a, j=last index of string b
        while(i >= 0 || j >= 0 || carry == 1)  // i==0 || j==0 means run loop till we cover both strings completely and c==1 states even if we covered both strings but carry still remains
        {
           if (i >= 0) {  // carry=carry+ int value of a[i] (subtracting ascii value of '0' from a[i] gives integer value of carry)
                carry += a[i] - '0';
                i--;
            }
            if (j >= 0) { // carry=carry + int value of b[j]
                carry += b[j] - '0';
                j--;
            }
            s+= ((carry % 2) + '0');  //  c%2 means insert 0 if carry==0  or carry==2 (1+1) because ('1'+'1'=0 in binary) else insert 1 ('0'+'1'=1). Adding '0' to convert in ascii from integer 
            carry =carry/ 2; //if c==2 or 3, there is a carry i.e 1 otherwise no carry (3 in case if prev c=1 and a[i]=1 and b[i]=1)
        }
        // reverse it in the end bcoz we added in last.....
        reverse(s.begin(),s.end());
        return s;
    }
};
