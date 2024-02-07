#include<iostream>

using namespace std;

int main()
{
    
  int i=0;
  int alicescore=0;
  int bobscore=0;
  int size;
  cout<<"enter size of  arrays  "<<endl;
  cin >> size;
  int *alice = new int[size];
  int *bob = new int[size];
  
  for(i=0;i<size;i++)
  {
    cout<<"enter for alice ith element "<< +i<<endl;
    cin>>alice[i];  
  }
for(i=0;i<size;i++)
{
    cout<<"enter for bob ith element "<< +i<<endl;
    cin>>bob[i];
}
for(i=0;i<size;i++)
{
    if(alice[i]>bob[i])
    {
        alicescore+=1;
    }
    
    else if(alice[i]<bob[i])
  {
       bobscore+=1;
  }
   
    else 
    alicescore+=0;
    bobscore+=0;
  
    
}


  if(alicescore>bobscore)
  {
       cout<<alicescore<<" "<<bobscore<<endl;
  }
    
  else 
    cout<<bobscore<<" "<<alicescore<<endl;
      
  return 0;
}
