#include<iostream>
#include<cstring>

using namespace std;






class Solution {
public:
    bool checkInclusion(string s1, string s2) {
   int a[26]={0};
   if(s2.size()<s1.size())return false;

   for(int i=0;i<s1.size();i++){
       a[int(s1[i])-97]++;
   }
   
   string temp="";
   int b[26]={0};
   int  size_a=s1.size();
   for(int i=0;i<size_a;i++)b[int(s2[i])-97]++;
   for(int i=0;i<26;i++){
           if(a[i]!=b[i])break;
           if(i==26-1)return true;
    }

   for(int i=size_a;i<s2.size();i++){
       b[int(s2[i-size_a])-97]--;
       b[int(s2[i])-97]++;
       
       

       for(int i=0;i<26;i++){
           if(a[i]!=b[i])break;
           if(i==26-1)return true;
       }
   

   }
   return false;

        
    }
};