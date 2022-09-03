                                                       /* Spell Check 
                                                       time limit per test1 second
                                                       memory limit per test256 megabytes
                                                       inputstandard input
                                                       outputstandard output
                                                       */

                            /* Timur likes his name. As a spelling of his name, he allows any permutation of the letters of the name.
                            For example, the following strings are valid spellings of his name: Timur, miurT, Trumi, mriTu.
                            Note that the correct spelling must have uppercased T and lowercased other letters.
                            Today he wrote string s of length n consisting only of uppercase or lowercase Latin letters.
                            He asks you to check if s is the correct spelling of his name 
                            .*/ 

// Explain :- 
 /* given a condition for string e correct spelling must have uppercased T and lowercased other letters. we want to write a 
    one string and store a Timur; int res= Timur; and sort the string. and also write a second str for checking.
    int s;
    and compare both start to end ; 
    
    
    Test Case: 
    
    Input :- 
    10
        5
        Timur
        5
        miurT
        5
        Trumi
        5
        mriTu
        5
        timur
        4
        Timr
        6
        Timuur
        10
        codeforces
        10
        TimurTimur
        5
        TIMUR
        
  Output:- 
     YES
     YES
     YES
     YES
     NO
     NO
     NO
     NO
     NO
     NO
    
     Test case 5:-  timur  
           
           check string and a given conditon are match or not 
           
           timur :- 1st codition is Uppercase so uppercase letter are not found 1st test case are falil .
                    cahck 2nd all a lowercase 2nd are passed.
                     
                     spelling are not match;
             ans :- NO; 
              in that way check every string :- 
              
 */
/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------*/

//Code :- 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
        
    string Str1;
    cin>>Str1;
     sort(Str1.begin(),Str1.end());
        
    string Str2 ="Timur";
 //   cin>>Str2;
    
    sort(Str2.begin(),Str2.end());
    
    if(Str1==Str2)
    
        cout<<"YES"<<endl;
    
    else
        cout<<"NO"<<endl;
    
    }
    
    
    
} 

//

                    
            
            
     
// code by :- Chinmay Songirkar


