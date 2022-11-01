#include <iostream>
#include <sstream>
#include <unordered_set>
#include <string>
#include <algorithm>

using namespace std;
//-------------------------------------Give Characters-------------------------------------------------
string giveChars(int index1, int index2, int index3, int index4, char arr[5][5])
{
    string res;
    res.push_back(arr[index1 % 5][index2 % 5]);
    res.push_back(arr[index3 % 5][index4 % 5]);
    return res;
}
//-------------------------------------Give Character Indexes------------------------------------------
string giveIndexWithChars(char char1, char char2, char arr[5][5], string type)
{
    int index1, index2;
    int index3, index4;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == char1)
            {
                index1 = i;
                index2 = j;
            }
            else if (arr[i][j] == char2)
            {
                index3 = i;
                index4 = j;
            }
        }
    }
    if (type == "encryption")
    {
        if (index1 == index3)
        {
            string char1 = giveChars(index1, index2 + 1, index3, index4 + 1, arr);
            return char1;
        }
        else if (index2 == index4)
        {
            string char1 = giveChars(index1 + 1, index2, index3 + 1, index4, arr);
            return char1;
        }
        else
        {
            string char1 = giveChars(index1, index4, index3, index2, arr);
            return char1;
        }
    }
    else if (type == "decryption")
    {
        if (index1 == index3)
        {
            string char1 = giveChars(index1, index2 + 4, index3, index4 + 4, arr);
            return char1;
        }
        else if (index2 == index4)
        {
            string char1 = giveChars(index1 + 4, index2, index3 + 4, index4, arr);
            return char1;
        }
        else
        {
            string char1 = giveChars(index1, index4, index3, index2, arr);
            return char1;
        }
    }
}
//------------------------------------Check J-----------------------------------------------------------
bool checkJ(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'j')
        {
            return true;
        }
    }
    return false;
}
//------------------------------Remove duplicates from string--------------------------------------------

string removeDuplicate(string key)
{
    for (int i = 0; i < key.length(); i++)
    {
        key.erase(remove(key.begin() + i + 1, key.end(), key[i]), key.end());
    }
    return key;
}
//-------------------------------------------playFairHandler--------------------------------------------------------------
string playFairHandler(string inp, char arr[5][5], string type)
{
    cout << endl
         << endl
         << "<-------------------------->" << endl
         << endl;
    string res = "";
    int i = 0;
    int j = 1;
    if (type == "encryption")
    {
        while (j <= inp.length())
        {

            if (!inp[i + 1])
            {
                string char1 = giveIndexWithChars(inp[i], 'x', arr, type);
                res = res + char1;
                break;
            }
            else if (inp[i] == inp[i + 1] && inp[i] == 'x')
            {
                string char1 = giveIndexWithChars('x', 'z', arr, type);
                res = res + char1;
                if (i + 1 < inp.length() && j + 1 < inp.length())
                {
                    i++;
                    j++;
                }
                else if (i + 1 < inp.length() && !j + 1 < inp.length())
                {
                    i++;
                }
                else if (j + 1 >= inp.length())
                {
                    break;
                }
            }
            else if (inp[i] == inp[i + 1])
            {
                string char1 = giveIndexWithChars(inp[i], 'x', arr, type);
                res = res + char1;
                if (i + 1 < inp.length() && j + 1 < inp.length())
                {
                    i++;
                    j++;
                }
                else if (i + 1 < inp.length() && !j + 1 < inp.length())
                {
                    i++;
                }
                else if (j + 1 >= inp.length())
                {
                    break;
                }
            }
            else if (inp[i] != inp[i + 1])
            {
                string char1 = giveIndexWithChars(inp[i], inp[i + 1], arr, type);
                res = res + char1;
                if (i + 2 < inp.length() && j + 2 < inp.length())
                {
                    i = i + 2;
                    j = j + 2;
                }
                else if (j + 1 < inp.length() && !j + 2 < inp.length())
                {
                    i = i + 2;
                }
                else if (j + 2 >= inp.length() || j + 1 >= inp.length())
                {
                    break;
                }
            }
        }
    }
    else if (type == "decryption")
    {
        for (int i = 0; i < inp.length(); i = i + 2)
        {
            string char1 = giveIndexWithChars(inp[i], inp[i + 1], arr, type);
            res = res + char1;
        }
    }
    //--------------------------------- print matrix-----------------------------------
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    return res;
}

int main()
{
    bool ans;
    cout << "What do you want to do? Type 0 for encryption and 1 for decryption: ";
    cin >> ans;
    //-----------------------------------------Encryption------------------------------------------
    if (!ans)
    {
        string key;
        cout << "You have choosed encryption" << endl;
    keyAgain:
        cout << "Enter the key: " << endl;
        cin >> key;
        bool checkJInKey = checkJ(key);
        if (checkJInKey)
        {
            cout << "Please Enter the key again without J" << endl;
            goto keyAgain;
        }
        string setKey = removeDuplicate(key);
    msgAgain:
        string msg = "", input, output = "";
        cout << "Enter the message you want to encrypt: ";
        cin.clear();
        cin.ignore();
        getline(cin, msg);
        bool checkJInMsg = checkJ(msg);
        if (checkJInMsg)
        {
            cout << "Please Enter the message again without J:" << endl;
            goto msgAgain;
        }
        stringstream X(msg);
        //-----------------------------------------Filler Matrix------------------------------------------------------
        char arr[5][5];
        int Keycount = 0;
        string ABC = "abcdefghiklmnopqrstuvwxyz";
        int abcCount = 0;

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (Keycount < setKey.length())
                {
                    arr[i][j] = setKey[Keycount];
                    ABC.erase(remove(ABC.begin(), ABC.end(), setKey[Keycount]), ABC.end());
                    Keycount++;
                }
                else
                {
                    if (abcCount < ABC.length())
                    {
                        arr[i][j] = ABC[abcCount];
                        abcCount++;
                    }
                }
            }
        }
        // Parsing the message word by word....
        while (getline(X, input, ' '))
        {
            string res = playFairHandler(input, arr, "encryption");
            output = output + " " + res;
        }
        cout << endl
             << "Your encrypted message is : "
             << output;
    }
    //---------------------------------------------Decryption-------------------------------------------
    else
    {
        string key1;
        string msg1, input1, output1 = "";
        cout << "You have choosed decryption" << endl;
    keyAgain1:
        cout << "Enter the key: " << endl;
        cin >> key1;
        bool checkJInKey1 = checkJ(key1);
        if (checkJInKey1)
        {
            cout << "Please Enter the key again without J" << endl;
            goto keyAgain1;
        }
        string setKey1 = removeDuplicate(key1);
    msgAgain1:
        cout << "Enter the message you want to decrypt: ";
        cin.clear();
        cin.ignore();
        getline(cin, msg1);
        bool checkJInMsg1 = checkJ(msg1);
        if (checkJInMsg1)
        {
            cout << "Please Enter the message again without J:" << endl;
            goto msgAgain1;
        }
        stringstream X1(msg1);
        //-----------------------------------------Filler Matrix------------------------------------------------------
        char arr1[5][5];
        int Keycount1 = 0;
        string ABC1 = "abcdefghiklmnopqrstuvwxyz";
        int abcCount1 = 0;

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (Keycount1 < setKey1.length())
                {
                    arr1[i][j] = setKey1[Keycount1];
                    ABC1.erase(remove(ABC1.begin(), ABC1.end(), setKey1[Keycount1]), ABC1.end());
                    Keycount1++;
                }
                else
                {
                    if (abcCount1 < ABC1.length())
                    {
                        arr1[i][j] = ABC1[abcCount1];
                        abcCount1++;
                    }
                }
            }
        }
        // Parsing the message word by word....
        while (getline(X1, input1, ' '))
        {
            string res1 = playFairHandler(input1, arr1, "decryption");
            output1 = output1 + " " + res1;
        }
        cout << endl
             << "Your decrypted message is : "
             << output1;
    }

    return 0;
}
