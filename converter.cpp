#include<iostream>
using namespace std;
class time_converter{               
	public:
		void hours_to_minutes(){
		float time;
		float newtime;
		cout<<"enter the time in hours to convert into minutes"<<endl;
		cin>>time;
		newtime=time*60;
		cout<<"your time in minutes is = "<<newtime<<endl;
		}
		void hours_to_seconds(){
		float time;
		float newtime;
		cout<<"enter the time in hours to convert into seconds"<<endl;
		cin>>time;
		newtime=time*60*60;
		cout<<"your time in seconds is = "<<newtime<<endl;
		}
		void minutes_to_hours(){
		float time;
		float newtime;
		cout<<"enter the time in minutes to convert into hours"<<endl;
		cin>>time;
		newtime=time/60;
		cout<<"your time in hours is = "<<newtime<<endl;
		}
		void seconds_to_hours(){
		float time;
		float newtime;
		cout<<"enter the time in seconds to convert into hours"<<endl;
		cin>>time;
		newtime=time/3600;
		cout<<"your time in seconds is = "<<newtime<<endl;
		}
		void seconds_to_minutes(){
		float time;
		float newtime;
		cout<<"enter the time in seconds to convert into minutes"<<endl;
		cin>>time;
		newtime=time/60;
		cout<<"your time in minutes is = "<<newtime<<endl;
		}
		void minutes_to_seconds(){
		float time;
		float newtime;
		cout<<"enter the time in minutes to convert into seconds"<<endl;
		cin>>time;
		newtime=time*60;
		cout<<"your time in seconds is = "<<newtime<<endl;
		}
};

class distance_converter{
	public:
		void miles_to_kms(){
			float distance;
			float newdistance;
			cout<<"enter the distance in miles to convert into kms"<<endl;
			cin>>distance;
			newdistance=distance*1.60934;
			cout<<"your distance in kms is ="<<newdistance<<endl;
		}
		void miles_to_meters(){
			float distance;
			float newdistance;
			cout<<"enter the distance in miles to convert into meters"<<endl;
			cin>>distance;
			newdistance=distance*1609.344;
			cout<<"your distance in meters is ="<<newdistance<<endl;
		}
		void kms_to_miles(){
			float distance;
			float newdistance;
			cout<<"enter the distance in kms to convert into miles"<<endl;
			cin>>distance;
			newdistance=distance*0.621;
			cout<<"your distance in miles is ="<<newdistance<<endl;
		}
		void meters_to_miles(){
			float distance;
			float newdistance;
			cout<<"enter the distance in meters to convert into miles"<<endl;
			cin>>distance;
			newdistance=distance*0.000621;
			cout<<"your distance in miles is ="<<newdistance<<endl;
		}
		void kms_to_meters(){
			float distance;
			float newdistance;
			cout<<"enter the distance in kms to convert into meters"<<endl;
			cin>>distance;
			newdistance=distance*1000;
			cout<<"your distance in meters is ="<<newdistance<<endl;
		}
		void meters_to_kms(){
			float distance;
			float newdistance;
			cout<<"enter the distance in meters to convert into kms"<<endl;
			cin>>distance;
			newdistance=distance/1000;
			cout<<"your distance in kms is ="<<newdistance<<endl;
		}
};
class currency_converter{
		public:
		float value;
		float newvalue;
	void dollar_to_inr(){
		cout<<"enter the currency in dollar to convert into inr"<<endl;
		cin>>value;
		newvalue=value*88.39;
		cout<<"your currency in inr is ="<<newvalue<<endl;	
	}
	void inr_to_dollar(){
		cout<<"enter the currency in inr to convert into dollar"<<endl;
		cin>>value;
		newvalue=value/88.39;
		cout<<"your currency in dollar is ="<<newvalue<<endl;
	}
	void euro_to_inr(){
		cout<<"enter the currency in euro to convert into inr"<<endl;
		cin>>value;
		newvalue=value*103.57;
		cout<<"your currency in dollar ="<<newvalue<<endl;
	}
	void inr_to_euro(){
		cout<<"enter the currency in inr to convert into euro"<<endl;
		cin>>value;
		newvalue=value/103.57;
		cout<<"your currency in euro ="<<newvalue<<endl;
	}	
	void yen_to_inr(){
		cout<<"enter the currency in yen to convert into inr"<<endl;
		cin>>value;
		newvalue=value*0.60;
		cout<<"your currency in inr is="<<newvalue<<endl;
	}
	void inr_to_yen(){
		cout<<"enter the currency in inr  to convert into yen"<<endl;
		cin>>value;
		newvalue=value/0.60;
		cout<<"your currency in yen is="<<newvalue<<endl;
	}
};

int main()
{
	time_converter s1;
	distance_converter s2;
	currency_converter s3;
	cout << "\n=====================================\n";
        cout << "       CONVERTER SYSTEM\n";
        cout << "=====================================\n";
		cout << "1. choose 1 to convert time\n";
        cout << "2. choose 2 to convert distance\n";
        cout << "3. choose 3 to convert currency\n";
        cout << "4. choose it for exit\n";
        cout << "=====================================\n";
	int choice;
	int n=10;
	 
	for(int i=0;i<=n;i++){
        cout << "Enter your choice: ";
        cin >> choice;
       
	
		
	switch(choice){
		case 1: {
		cout << "\n=====================================\n";
        cout << "       CONVERTER SYSTEM\n";
        cout << "=====================================\n";
		cout << "1. convert from hours to minutes\n";
        cout << "2. convert from hours to seconds\n";
        cout << "3. convert from minutes to hours\n";
        cout << "4. convert from seconds to hours\n";
        cout << "5. convert from seconds to minutes\n";
        cout << "6. convert from minutes to seconds\n";
        cout << "7. for exit click here !\n";
        cout << "=====================================\n";
        int choice2;
	int m=100;
	 if(choice2==7){
				cout<<"thank you !"<<endl;
				break;
			//	continue;
			}
	for(int i=0;i<=m;i++){
        cout << "Enter your choice again : "<<endl;
        cin >> choice2;
        switch(choice2){
        	case 1: {
        		s1.hours_to_minutes();
				break;
			}
			case 2: {
				s1.hours_to_seconds();
				break;
			}
			case 3: {
				s1.minutes_to_hours();
				break;
			}
			case 4: {
				s1.seconds_to_hours();
				break;
			}
			case 5: {
				s1.seconds_to_minutes();
				break;
			}
			case 6: {
				s1.minutes_to_seconds();
				break;
			}
		
			default :{
				cout<<"invalid entry please try again !"<<endl;
				break;
			}
			}
		}
		if(choice==4){
        	cout<<"thank you !"<<endl;
        	break;
		}
		break;
		}
		case 2:{
		cout << "\n=====================================\n";
        cout << "       CONVERTER SYSTEM\n";
        cout << "=====================================\n";
		cout << "1. convert from miles to kms\n";
        cout << "2. convert from miles to meters\n";
        cout << "3. convert from kms to miles\n";
        cout << "4. convert from meters to miles\n";
        cout << "5. convert from kms to meters\n";
        cout << "6. convert from meters to kms\n";
        cout << "7. for exit click here !\n";
        cout << "=====================================\n";
    int choice2;
	int m=100;
	for(int i=0;i<=m;i++){
        cout << "Enter your choice again : "<<endl;
        cin >> choice2;
         		if(choice2==7){
		cout<<"thank you !"<<endl;
		break;
	}
        switch(choice2){
        
        	case 1: {
        		s2.miles_to_kms();
				break;
			}
			case 2: {
				s2.miles_to_meters();
				break;
			}
			case 3: {
				s2.kms_to_miles();
				break;
			}
			case 4: {
				s2.meters_to_miles();
				break;
			}
			case 5: {
				s2.kms_to_meters();
				break;
			}
			case 6: {
				s2.meters_to_kms();
				break;
			}
			default :{
				cout<<"invalid entry please try again !"<<endl;
				break;
			}
		}
		}
		break;
	}
		case 3:{
		cout << "\n=====================================\n";
        cout << "       CONVERTER SYSTEM\n";
        cout << "=====================================\n";
		cout << "1. convert from doller to inr\n";
        cout << "2. convert from inr to dollar\n";
        cout << "3. convert from euro to inr\n";
        cout << "4. convert from inr to euro\n";
        cout << "5. convert from yen to inr\n";
        cout << "6. convert from inr to yen\n";
        cout << "7. for exit click here !\n";
        cout << "=====================================\n";
    int choice2;
	int m=100;
	for(int i=0;i<=m;i++){
        cout << "Enter your choice again : "<<endl;
        cin >> choice2;
         		if(choice2==7){
		cout<<"thank you !"<<endl;
		break;
	}
        switch(choice2){
       
        	case 1: {
        		s3.dollar_to_inr();
				break;
			}
			case 2: {
				s3.inr_to_dollar();
				break;
			}
			case 3: {
				s3.euro_to_inr();
				break;
			}
			case 4: {
				s3.inr_to_euro();
				break;
			}
			case 5: {
				s3.yen_to_inr();
				break;
			}
			case 6: {
				s3.inr_to_yen();
				break;
			}
			default :{
				cout<<"invalid entry please try again !"<<endl;
				break;
			}
		}
		}
		break;
	}
	default:{
		cout<<"invalid entry please try again !"<<endl;
		break;
	}
}
}
}
   
