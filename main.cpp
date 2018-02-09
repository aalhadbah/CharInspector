//Author: abdulaziz alhadbah
#include<iostream>

using namespace std;

int main()
{
    
     char AlphaLetter;


  cout<<"What character do you want to know about?\n";
cin>> AlphaLetter;
          
          
  if(AlphaLetter>='A' && AlphaLetter<='Z')
 {
 cout<<AlphaLetter<<" is an upper case letter!\n";
  }


 else if(AlphaLetter>='a' && AlphaLetter<='z')
{
  cout<<AlphaLetter<<" is a lower case letter!\n";
}
 

else{
  cout<<AlphaLetter<<"?! Pssh. What are you talking about?\n";
  
}

  //no matter what they enter...
  cout<<"The ASCII value is: "<<(int)AlphaLetter<<endl;

  return 0;
}
