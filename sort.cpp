#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

/**
\fn linearSearch
\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/

void selectionSort(auto & data){
for (int location=0; location<data.size();location++)
{
	int min = location;
	for (int j=min; j<data.size(); j++)
	{
		if (data[j] < data[min])
		min = j; //update min index
	}
	swap(data[location], data[min]);
}
}

int main()
{
  vector<string> inputs;
  string  input;

   cout<<"Welcome to \"sort it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
 
selectionSort(inputs);
cout<<"List of sorted data"<<endl;
for(int i=0; i < inputs.size(); i++){
cout<<inputs[i]<<endl;
}
 

 
   cout<<endl<<"Program \"sort it\" is now finished."<<endl<<endl;

    return 0;
}
