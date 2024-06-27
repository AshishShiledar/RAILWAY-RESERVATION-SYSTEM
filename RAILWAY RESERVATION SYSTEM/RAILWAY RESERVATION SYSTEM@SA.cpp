#include<iostream>
#include<conio.h>
using namespace std;
class Train
{	
int Train Number;
 char TrainName[50];
 char Source[50];
 char Destination[50];
 char trainTime[10];
 	
 
        static member :
		 static int trainCount 
		 
		 
		 private data members:
          Train trains[100] 
int totalTrains
	public:
    void getData() 
	{
        cout << "Enter Train Number : ";
        cin >> Train Number;
        cout << "Enter Train Time : ";
        cin >> Train Time;
        cout << "Enter Train Name : ";
        cin >> Train Name ;
        cout << "Enter Source : ";
        cin >> Source;
        cout << "Enter Destination : ";
        cin >> Destination;
    }

    void setData()
	 {
        cout << " Train Number" <<Train Number << endl;
        cout << " Train Time" <<Train Time << endl;
        cout << " Train Name" << Train Name << endl;
        cout<<"Source"<<Source<<endl;
        cout << " Destination" << Destination << endl;
    }
};

int main()
 {
    Trains obj[4];
    int i;

  
    for(i = 0; i < 4; i++) 
	{
        cout << "Enter details for Trains " << i+1 << ":" << endl;
        obj[i].getData();
        cout << endl;
    }

  
    cout << "Trains Details Entered:" << endl;
    for(i = 0; i < 4; i++)
	 {
        cout << "Details of Trains " << i+1 << ":" << endl;
        obj[i].setData();
        cout << endl;
    }

    return 0;
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
            
				
	
	
