#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    string s="amishaarora";
    int freq[26];// declare an array of with the size of all the letters
    for(int i=0;i<26;i++){// initialise each letter's frequency to be zero
        freq[i]=0;
    }
    for(int i=0;i<s.size();i++){// for the iteration of the string
        freq[s[i]-'a']++;// increment each count at the position of the character
    }
    char ans='a';//initialise the maximum frequency character to be a
    int maxfreq=0;//initialise the maximum frequency to be 0
    for(int i=0;i<26;i++){// iterate the frequency array of letter
        if(freq[i]>maxfreq){// if frequency of a particular character is greater than the current maximum frequency then update
            maxfreq=freq[i];
            ans=i+'a';// to update the maximum frequency character
        }
    }
    cout<<maxfreq<<" "<<ans<<endl;
    return 0;
}
