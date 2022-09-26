#include <iostream>
#include <cstdlib>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) 
{
char ans1,ans2,dec;
char name[10];
int x,y,z;
x= 1000;
y = x * 2;
z = 0;
int op,life,ch,num;

cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ "<<endl;
cout<<"$ $ "<<endl;
cout<<"$-------------------Who Wants To Be A Millionaire------------------$ "<<endl;
cout<<"$ $ "<<endl;
cout<<"$ $ "<<endl;
cout<<"$--------------------------Programmed By---------------------------$ "<<endl;
cout<<"$ $ "<<endl;
cout<<"$ $ "<<endl;
cout<<"$ $ "<<endl;
cout<<"$ $ "<<endl;
cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ "<<endl<<endl;
cout<<"_____________________________________________________________________"<<endl<<endl;
cout<<"Welcome to Who wants to be a Millionaire!"<<endl;
cout<<"Enter your Name: ";
cin>>name;

cout<<"Okay "<<name<<", Here's the mechanics: ";
cout<<"There is 15 questions and each question have\ntheir corresponding amount. You have 3 lifelines that may save you."<<endl<<endl;
po:

cout<<"***************************************************************************"<<endl;
cout<<"Lifeline no.1: Ask the Audience - You will ask the opinion of the audience."<<endl;
cout<<"Lifeline no.2: 50:50 - The two right answers will remain."<<endl;
cout<<"Lifeline no.3: Call a Friend - You may call a friend to help you\n\t to the said question."<<endl;
cout<<"***************************************************************************"<<endl<<endl;

cout<<"So, Mr. "<<name<<" Let's start?"<<endl;
po1:
cout<<"Press 'Y' to start: "<<endl;
cin>>dec;
system("cls");

if(dec == 'y' && 'Y')
{
goto po2;
}
else if(dec != 'y' && 'Y')
{
cout<<"Just press 'Y' whenever your ready :)"<<endl;
goto po1;
}  


po2:
cout<<"For P1000:\n"<<endl;
cout<<"What is the Capital of the Philippines?\n";
cout<<"a.)Manila \t b.)Recto\nc.)Quezon City \t d.)Quiapo\n"<<endl;
cout<<"Want to use your Lifeline?"<<endl;
cout<<"[1]Yes \t[2]No"<<endl;
cin>>ch;

if(ch == 1)
{
goto po3;
}
else if(ch == 2)
{
goto po4;
}

po3:
cout<<"***************************************************************************"<<endl;
cout<<"[1]: Ask the Audience - You will ask the opinion of the audience."<<endl;
cout<<"[2]: 50:50 - The two right answers will remain."<<endl;
cout<<"[3]: Call a Friend - You may call a friend to help you\n\t to the said question."<<endl;
cout<<"***************************************************************************"<<endl;
cin>>life;
if(life == 1)
{
cout<<"a.)******************"<<endl;
cout<<"b.)*****"<<endl;
cout<<"c.)*************"<<endl;
cout<<"d.)********"<<endl;
}
else if(life == 2)
{
cout<<"a.)Manila \t b.)------\nc.)------ \t d.)Quiapo"<<endl;
}
else if(life == 3)
{
cout<<"Enter phone number: "<<endl;
cin>>num;
cout<<"CALLING . . ."<<endl;
getch();
cout<<"Friend: Hello? "<< name <<" What's up dude?"<<"Need Help?"<<endl;
getch();
cout<<name<<": Yes dude. What is the Capital of the Philippines?"<<endl;
getch();
cout<<"Friend: I think it's Manila!"<<endl;
getch();
cout<<name<<": How sure are you?"<<endl;
getch();
cout<<"Friend: I'm 100% sure about this."<<endl;
getch();
cout<<name<<": Okay thanks!"<<endl;
getch();
cout<<"Friend: Okay! Keep Rockin' the Free world!"<<endl<<endl;

}

po4:
cout<<"Choose Your Answer: "<<endl;
cin>>ans1;
cout<<"Is that your final answer?"<<endl;
cout<<"[Y]Yes, That's my final answer \t [N]Not yet"<<endl;
cin>>dec;

if(dec == 'y' && 'Y')
{
goto po5;  
}
else if(dec != 'y' && 'Y')
{
system("cls");
goto po2;  
}

po5:
switch(ans1)
{  
case 'a' :
cout<<"\nCongrats! You answered right!"<<endl;
break;
case 'b' :
cout<<"\nYou answered wrong! You Lose!"<<endl;
break;
case 'c' :
cout<<"\nYou answered wrong! You Lose!"<<endl;
break;
case 'd' :
cout<<"\nYou answered wrong! You Lose!"<<endl;
break;
default :
cout<<"\nInvalid Input";  
}
switch(ans1)
{
case 'a':
cout<<"You just won: P"<<x<<endl;
break;
case 'b':
cout<<"I'm sorry, you will take home: P"<<z<<endl;
break;
case 'c':
cout<<"I'm sorry, you will take home: P"<<z<<endl;
break;
case 'd':
cout<<"I'm sorry, you will take home: P"<<z<<endl;
break;
default :
system("cls");
cout<<"Invalid input! Choose between the choices!\n"<<endl;
goto po2;
}
if(ans1 == 'a')
{
cout<<"Proceed to the next Question? Or You will now go home with P"<<x<<"\n[1]Proceed \t[2]Go Home"<<endl;
cin>>op;
}
else if(ans1 != 'a')
{
cout<<"Thank you for playing! :)"<<endl;
return 0;
}

switch(op)
{
case 1:
cout<<"_____________________________________________________________________"<<endl<<endl;
break;
case 2:
cout<<"Alright! "<<name<<" You'll take home P"<<x<<"\nThank you for playing! :)"<<endl;
return 0;
break;
default :
cout<<"Invalid Input!"<<endl;
}
cout<<"What is the color of an Apple?"<<endl;
cout<<"a.)Black \t b.)Rainbow \nc.)Red \t\t d.)Colorless"<<endl;
cout<<"\nChoose Your Answer: "<<endl;
cin>>ans2;
switch(ans2)
{
case 'a':
cout<<"\nYou answered wrong! You Lose!"<<endl;
break;
case 'b':
cout<<"\nYou answered wrong! You Lose!"<<endl;
break;
case 'c':
cout<<"\nCongrats! You answered right!"<<endl;
break;
case 'd':
cout<<"\nYou answered wrong! You Lose!"<<endl;
break;
default :
cout<<"\nInvalid Input";
}  
switch(ans2)
{
case 'a':
cout<<"I'm sorry, you will take home: P"<<z<<endl;
break;
case 'b':
cout<<"I'm sorry, you will take home: P"<<z<<endl;
break;
case 'c':
cout<<"You have now: P"<<y<<endl;
break;
case 'd':
cout<<"I'm sorry, you will take home: P"<<z<<endl;
break;
default :
cout<<" "<<endl;
}
if(ans2 == 'c')
{
cout<<"Proceed to the next Question? Or You will now go home with P"<<y<<"\n[1]Proceed \t[2]Go Home"<<endl;
cin>>op;
}
else if(ans2 != 'c')
{
cout<<"Thank you for playing! :)"<<endl;
return 0;
}
switch(op)
{
case 1:
cout<<"_____________________________________________________________________"<<endl<<endl;
cout<<"Question no.3:"<<endl;
break;
case 2:
cout<<"Alright! You'll take home P"<<y<<"\nThank you for playing! :)"<<endl;
return 0;
break;
}





system("pause");  


return 0;
}
