#include<iostream>
using namespace std;


class Box{
	
	private:
		
		float lenght;
		float width;
		float height;
		float volume;
    
    public:
    	
      void	setDimentions (float lenght , float widht ,float height)
      {
      	volume  = lenght*widht*height;
	  }
		
	//  void getVolume()
	//  {
	  //	return volume;
	 // }
	  
	  void displayVolume()
	  {
	  	cout<<"Volume:"<<volume<<endl;
	  }
	
};





int main()
{
	Box b1;
	b1.setDimentions(45,22,34);
	b1.displayVolume();
	
}