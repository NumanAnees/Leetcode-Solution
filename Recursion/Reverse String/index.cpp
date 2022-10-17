//---------------------------------With 2 Pointers---------------------------------
void reverse(string& str, int i, int j ) {

    //base case
    if(i>j)
        return ;

    swap(str[i], str[j]);
    i++;
    j--;

    //Recursive call
    reverse(str,i,j);

}

string reverseString(string str)
{
 	reverse(str, 0 , str.length()-1 );
	return str;
}

//---------------------------------With Single Pointer---------------------------------
void reverse(string &str, int e) {
    static int i = 0;
    if(i>=e/2) {
        return;
    }
    swap(str[i],str[e-i-1]);
    i++;
    reverse(str,e);
    i = 0;
}

string reverseString(string str)
{
	reverse(str,str.length());
    return str;
}