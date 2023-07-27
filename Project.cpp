 #include<iostream>
 #include<string.h>
 using namespace std;
 
 void login();
 void registration();
 void forgot();
 void harsha();
 
 
 int main()
 {
 	int c;
 	cout<<"\t\t\t____________________________________________\n\n\n";
 	cout<<"\t\t\t            Welcome to the Login Page       \n\n\n";
 	cout<<"\t\t\t_________________   Menu  __________________\n\n\n";
 	cout<<"";
 	cout<<"\t| Press 1 to Login    |"<<endl;
 	cout<<"\t| Press 2 to REGISTER |"<<endl;
 	cout<<"\t| Press 3 to FORGOT   |"<<endl;
 	cout<<"\t| Press 4 to EXIT     |"<<endl;
 	cout<<"ENTER YOUR CHOICE : ";
 	cin>>c;
 	cout<<endl;
 	
 	switch(c)
 	{
 		case 1:
 		  login();
 		  break;
	 
	 	case 2:
	 	  registration();
	 	  break;
	 	case 3:
	   	  forgot();
	 	  break;
	 	case 4:
	 	   cout<<"\t\t\t______________\n\n";
	 	   cout<<"\t\t\t   Thank You  \n\n";
	 	   cout<<"\t\t\t______________\n\n";
	 	break;
	 	default:
	 	    system("cls");
	 	    cout<<"\t\t\t  Please enter above options only \n"<<endl;
	 	    main();
	 }
	 
}
	 
 	void login()
 	{
  		string ui;
  		int pass;
 		system("cls");
		 cout<<"\t\t\t Please enter the username and password : "<<endl;
		 cout <<"\t\t\t USERNAME :";
		 cin>>ui;
		 cout<<"\t\t\t PASSWORD :";
		 cin >> pass;
		 if(ui.length()<6&&pass<100000)
		 {
		 	cout<<"\n LONGIN ERROR \n Please check your username and password";
		 	main();
		 }
		 else
		 {
		 	cout<<"\n LOGIN SUCCESFUL \n Thanks for logging in \n";
		 	main();
		 }
	 }
	 
	 
	 void registration()
	 {
	 	 string rui;
	 	 int rpass;
 		 system("cls");
		 cout<<"\t\t\t Please enter the new username and password for register : "<<endl;
		 cout <<"\t\t\t USERNAME :";
		 cin>>rui;
		 cout<<"\t\t\t PASSWORD :";
		 cin >> rpass;
		 if(rui.length()<6&&rpass<100000)
		 {
		 	cout<<"\n LONGIN ERROR \n Please check your username and password";
		 	main();
		 }
		 else
		 {
		 	cout<<"\n Registered Sucessful \n Thanks for logging in \n";
		 	main();
		 }
	 }
 
 
 void forgot()
 {
 	system("cls");
 	int ch;
 	cout<<"\t\t\t YOu forgot your user name or password?\n";
 	cout<<"Press 1 to forgot userid and password \n"<<endl;
 	cout<<"Press 2 to go back to the main menu \n"<<endl;
 	cout<<"Enter your choice :";
 	cin>>ch;
 	switch(ch)
 	{
 		case 1:
 			int no;
 			long long int op;
			 cout<<"\t\t\t Enter your mobile number : ";
 			cin>>no;
 			cout<<"\t\t\t Check your otp which is send to your mobile \n";
 			cout<<"\t\t\t Enter OTP : ";
 			cin>>op;
 			harsha();
			 
 		case 2:
		 main();	
	 }
 	
 }
 
 void harsha()
 {
 	     string fui;
	 	 int fpass;
 		 system("cls");
		 cout<<"\t\t\t Please enter the new password : "<<endl;
		 cout<<"\t\t\t PASSWORD :";
		 cin >> fpass;
		 if(fpass<1000)
		 {
		 	cout<<"\n LONGIN ERROR \n Please check your username and password\n";
		 	main();
		 }
		 else
		 {
		 	cout<<"\n Password Renewaled\n Thanks for logging in \n";
		 	main();
		 }
 }
 
 
 
 
 
 
 
 
 
 
 