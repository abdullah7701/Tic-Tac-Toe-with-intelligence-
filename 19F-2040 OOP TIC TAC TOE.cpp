#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<cctype>
#include<cmath>
#include<iomanip>
#include<stdio.h>
#include<windows.h>
using namespace std;
char a1='1',a2='2',a3='3',a4='4',a5='5',a6='6',a7='7',a8='8',a9='9';
int count=150;
int countx=0;
void Color(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}
void score()
{
cout<<"YOU PLAYED GAME "<<count<<"TIMES"<<endl;	
}
void times()
{
	char option;
	 count++;
   cout<<"DO YOU WANTED TO CHEAK HOW MANY TIME YOU PLAYED THE GAME "<<endl;
   cout<<"***************for cheaking press y or Y*****************"<<endl;
   cin>>option;
   if ((option=='y')||(option=='Y'))
   {
   	score();
   	
   }
}

void cheaker()
{

	
    if (a1 =='X'&& a2 =='X'&& a3 == 'X')
        {
        cout<<"Player 2 has WON!"<<endl;
        times();
       
       	exit(0);
        }
    else if (a4=='X'&& a5=='X'&& a6=='X')
        {
        cout<<"Player 2 has WON!"<<endl;
        times();
        	exit(0);
        }
    else if (a7=='X'&&a8=='X'&& a9=='X')
        {
        cout<<"Player 2 has WON!"<<endl;
        times();
        	exit(0);
        }
    else if (a1=='X'&& a4=='X'&&a7=='X')
        {
        cout<<"Player 2 has WON!"<<endl;
        times();
        	exit(0);
        }
    else if (a2=='X'&&a5=='X'&&a8=='X')
        {
        cout<<"Player 2 has WON!"<<endl;
        times();
       	exit(0);
        }
    else if (a3=='X'&&a6=='X'&&a9=='X')
        {
        cout<<"Player 2 has WON!"<<endl;
        times();
       	exit(0);
        }
    else if (a1=='X'&&a5=='X'&&a9=='X')
        {
        cout<<"Player 2 has WON!"<<endl;
        times();
       	exit(0);
        }
    else if (a3=='X'&&a5=='X'&&a7=='X')
        {
        cout<<"Player 2 has WON!"<<endl;
        times();
       	exit(0);
        }
 else if (a1 =='O'&& a2 =='O'&& a3 =='O')
        {
        cout<<"Player 1 has WON"<<endl;
        times();
       	exit(0);
        }
    else if (a4=='O'&&a5=='O'&&a6=='O')
        {
        cout<<"Player 1 has WON"<<endl;
        times();
       	exit(0);
        }
    else if (a7=='O'&&a8=='O'&&a9=='O')
        {
        cout<<"Player 1 has WON"<<endl;
        times();
      	exit(0);
        }
    else if (a1=='O'&&a5=='O'&&a9=='O')
        {
        cout<<"Player 1 has WON!"<<endl;
        times();
       	exit(0);
       }
    else if (a1=='O'&&a4=='O'&&a7=='O')
        {
        cout<<"Player 1 has WON"<<endl;
        times();
       	exit(0);
        }
    else if (a2=='O'&&a5=='O'&&a8=='O')
        {
        cout<<"Player 1 has WON"<<endl;
        times();
       	exit(0);
        }
    else if (a3=='O'&&a6=='O'&&a9=='O')
        {
        cout<<"Player 1 has WON"<<endl;
        times();
      	exit(0);
        }
    else if (a3=='O'&&a5=='O'&&a7=='O')
        {
        cout<<"Player 1 has WON"<<endl;
        times();
        	exit(0);
        }
    else if((((a1 =='X')||(a1=='O')))&&(((a2=='X')||(a2=='O')))&&(((a3=='X')||(a3=='O')))&&(((a4=='X')||(a4=='O')))&&(((a5=='X')||(a5=='O')))&&(((a6=='X')||(a6=='O')))&&(((a7=='X')||(a7=='O')))&&(((a8=='X')||(a8=='O')))&&(((a9=='X')||(a9=='O'))))
        {
        
			     cout<<"****************************GAME DRAW RESTART THE GAME****************************";
		       	exit(0);
        }

		
}
void game()
{
 	system("CLS");
	      cout<<"\t\t\t\t\t      |         |      "<<endl;
	      cout<<"\t\t\t\t\t "<<a1<< "    |    "<<a2 <<"    |     "<<a3<<endl;
	      cout<<"\t\t\t\t\t ---------------------- "<<endl;
	      cout<<"\t\t\t\t\t      |         |       "<<endl;
	      cout<<"\t\t\t\t\t "<<a4<< "    |    "<<a5 <<"    |     "<<a6<<endl;
	      cout<<"\t\t\t\t\t ---------------------- "<<endl;
	      cout<<"\t\t\t\t\t      |         |       "<<endl;
	      cout<<"\t\t\t\t\t "<<a7<< "    |    "<<a8<<"    |     "<<a9<<"\n\n\n\n"<<endl;
	     
	      
}
void machine_player(int i)
{
		int player1,player2;
	 
		if(i%2==0)
		{		cout<<"Player 1 Enter Your choise"<<endl;
	            cin>>player1;
	            
	           	
    if(player1 == 1)
    {
    	if(a1!='X'&&a1!='O')
       {
		 a1 = 'O';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 machine_player(i);
     	}
    }
    else if(player1 == 2)
    {
    	if(a2!='X'&&a2!='O')
         {
		 a2 = 'O';
        }
      else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 machine_player(i);
     	}
    }
    else if(player1 == 3)
    {
    	if(a3!='X'&&a3!='O')
        {
		 a3 = 'O';
        }
      else
        {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	  machine_player(i);
     	}
    }
    else if(player1 == 4)
    {
    	if(a4!='X'&&a4!='O')
        {
		 a4 = 'O';
        }
      else
        {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 machine_player(i);
     	}
    }
    else if(player1 == 5)
    {
    	if(a5!='X' && a5!='O')
        {
		    a5 = 'O';
        }
      else
        {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	  machine_player(i);
    	}
    }
    else if(player1 == 6)
    {
    	if(a6!='X'&&a6!='O')
        {
		 a6 = 'O';
        }
      else
        {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 machine_player(i);
    	}
    }
    else if(player1 == 7)
    {
    	if(a7!='X'&&a7!='O')
         {
		 a7 = 'O';
        }
      else
        {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 machine_player(i);
     	}
    }
    else if(player1 == 8)
    {
    	if(a8!='X'&&a8!='O')
        {
		 a8 = 'O';
         }
      else
        {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 machine_player(i);
     	}
    }
    else if(player1 == 9)
    {
    	if(a9!='X'&&a9!='O')
         {
		 a9 = 'O';
        }
      else
        {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 machine_player(i);
    	}
    }
    game();
	      cheaker();

    }
    //player 2 machine 
   
	 else
    {
    	 countx++;
    	 cout<<"Player 2 turn"<<endl;
     if(countx>=2 ||  countx<=5)
       {
    	 	goto label2;
       }
	else
	{
		
      	
	srand(time(0));
	player2 =((rand()%9)+1);
	cout<<player2<<endl;
	Sleep(500);
	
	if(player2 == 1)
    {
    	if(a1!='X' && a1!='O')
       {
		 a1 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 machine_player(i);
     	}
    }
    else if(player2 == 2)
    {
       	if(a2!='X' && a2!='O')
       {
		 a2 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 machine_player(i);
     	}
    }
    else if(player2 == 3)
    {
        	if(a3!='X'&&a3!='O')
       {
		 a3 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 machine_player(i);
     	}
    }
    else if(player2 == 4)
    {
       	if(a4!='X'&&a4!='O')
       {
		 a4 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 machine_player(i);
     	}
    }
    else if(player2 == 5)
    {
        	if(a5!='X'&&a5!='O')
       {
		 a5 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 machine_player(i);
     	}
    }
    else if(player2 == 6)
    {
       	if(a6!='X'&&a6!='O')
       {
		 a6 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	  machine_player(i);
     	}
    }
    else if(player2 == 7)
    {
        	if(a7!='X'&&a7!='O')
       {
		 a7 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 machine_player(i);
     	}
    }
    else if(player2 == 8)
    {
        	if(a8!='X'&&a8!='O')
       {
		 a8 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	  machine_player(i);
     	}
    }
    else if(player2 == 9)
    {
        	if(a9!='X'&&a9!='O')
       {
		 a9 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	  machine_player(i);
     	}
    
    }
    
    
    game();
	cheaker();
	
	}
	if(countx>=2 || countx<=5)
    {
    	label2:
    	if(a1=='X' && a5=='X' || a1=='O' && a5=='O')
    	{
    		if(a9!='X'||a9!='O')
    		{
    			a9='X';
			}
			else
            {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	  machine_player(i);
     	    }
    		
		}
		else if(a3=='X' && a5=='X' || a3=='O' && a5=='O')
		{
			if(a7!='X' ||a7!='O')
    		{
    			a7='X';
			}
			else
            {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	  machine_player(i);
     	    }
			
		}
		else if(a4=='X' && a5=='X' || a4=='O' && a5=='O')
		{
			if(a6!='X' || a6!='O')
    		{
    			a6='X';
			}
			else
            {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	  machine_player(i);
     	    }
			
		}
		else if(a6=='X' && a5=='X' || a6=='O' && a5=='O')
		{
			if(	a4!='X' ||a4!='O')
    		{
    				a4='X';
			}
			else
            {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	  machine_player(i);
     	    }
		
		}
		else if(a2=='X' && a5=='X' || a2=='O' && a5=='O')
		{
			if(a8!='X'||a8!='O')
    		{
    		a8='X';	
			}
			else
            {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	  machine_player(i);
     	    }
			
		}
		else if(a8=='X' && a5=='X' || a8=='O' && a5=='O')
		{
			if(a2!='X' || a2!='O')
    		{
    			a2='X';
			}
			else
            {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	  machine_player(i);
     	    }
			
		}
		else if(a1=='X' && a2=='X' || a1=='O' && a2=='O')
		{
			if(a3!='X'||a3!='O')
    		{
    			a3='X';
			}
			else
            {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	  machine_player(i);
     	    }
			
		}
		else if(a1=='X' && a3=='X' || a1=='O' && a3=='O')
		{
			if(a2!='X'||a2!='O')
    		{
    			a2='X';
			}
			else
            {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	  machine_player(i);
     	    }
			
		}
		else if(a3=='X' && a2=='X' || a3=='O' && a2=='O')
		{
			if(a1!='X'||a1!='O')
    		{
    			a1='X';
			}
			else
            {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	  machine_player(i);
     	    }
			
		}
		else if(a4=='X' && a6=='X' || a4=='O' && a6=='O')
		{
			if(a5!='X'||a5!='O')
    		{
    			a5='X';
			}
			else
            {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	  machine_player(i);
     	    }
			
		}
		else if(a7=='X' && a8=='X' || a7=='O' && a8=='O')
		{
			if(a9!='X'||a9!='O')
    		{
    			a9='X';
			}
			else
            {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	  machine_player(i);
     	    }
			
		}
		else if(a7=='X' && a9=='X' || a7=='O' && a9=='O')
		{
			if(a8!='X'||a8!='O')
    		{
    			a8='X';
			}
			else
            {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	  machine_player(i);
     	    }
			
		}
		else if(a9=='X' && a8=='X' || a9=='O' && a8=='O')
		{
			if(a7!='X'||a7!='O')
    		{
    			a7='X';
			}
			else
            {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	  machine_player(i);
     	    }
			
		}
		else
		{
			srand(time(0));
	player2 =((rand()%9)+1);
	cout<<player2<<endl;
	Sleep(500);
	
	if(player2 == 1)
    {
    	if(a1!='X' && a1!='O')
       {
		 a1 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 machine_player(i);
     	}
    }
    else if(player2 == 2)
    {
       	if(a2!='X' && a2!='O')
       {
		 a2 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 machine_player(i);
     	}
    }
    else if(player2 == 3)
    {
        	if(a3!='X'&&a3!='O')
       {
		 a3 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 machine_player(i);
     	}
    }
    else if(player2 == 4)
    {
       	if(a4!='X'&&a4!='O')
       {
		 a4 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 machine_player(i);
     	}
    }
    else if(player2 == 5)
    {
        	if(a5!='X'&&a5!='O')
       {
		 a5 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 machine_player(i);
     	}
    }
    else if(player2 == 6)
    {
       	if(a6!='X'&&a6!='O')
       {
		 a6 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	  machine_player(i);
     	}
    }
    else if(player2 == 7)
    {
        	if(a7!='X'&&a7!='O')
       {
		 a7 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 machine_player(i);
     	}
    }
    else if(player2 == 8)
    {
        	if(a8!='X'&&a8!='O')
       {
		 a8 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	  machine_player(i);
     	}
    }
    else if(player2 == 9)
    {
        	if(a9!='X'&&a9!='O')
       {
		 a9 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	  machine_player(i);
     	}
    
    }
		}
		  
    game();
	cheaker();
	}
	   
		 
}

}
void machine()
{
	float turner,random,x;
	cout<<"           \t\t TO CHOICE HEAD PRESS 1 0R 0 FOR TAIL  \n\n\n\n"<<endl;
	cin>>x;
    turner=x;
	while((turner!=1)||(turner!=0))
{
	
	if((turner==1 )||(turner==0))
	{
	srand(time(0));
	random=(rand()%2);
		cout<<"\t\t\t\t   ************* AFTER TOSSING *************"<<endl;
	if (turner==random) 
    	{
		cout<<"\t\t\t\t\t first  player play first [0] "<<endl;
		int i=0;
		for(;i<9;i++)
        {
	machine_player(i);

		
        }
	
     	}
	else 
	{
		cout<<"\t\t\t\t\t machine  play first[X] "<<endl;
		int i=1;
    	for(;i<9;i++)
            {
       machine_player(i);
		
        	}
	}	
	}
	else 
{
	cout<<"INVALID INPUT "<<endl;
	cin>>turner;
	if((turner==1 )||(turner==0))
	{
		system("CLS");
	}
	else {
		exit(0);
	}
}
}
	
}



void stop()
{
//	system("CLS");
   cout<<"  \t\t\t\t\t\t thanks for visiting ";
   
}

void player(int i)
{
	int player1=0,player2=0;
	
	if(i%2==0)
	{		cout<<"Player 1 Enter Your choise"<<endl;
	            cin>>player1;
	           	
    if(player1 == 1)
    {
    	if(a1!='X'&&a1!='O')
       {
		 a1 = 'O';
    }
    else
    {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 player(i);
	}
    }
    else if(player1 == 2)
    {
    	if(a2!='X'&&a2!='O')
         {
		 a2 = 'O';
    }
      else
    {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 player(i);
	}
    }
    else if(player1 == 3)
    {
    	if(a3!='X'&&a3!='O')
        {
		 a3 = 'O';
    }
      else
    {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 player(i);
	}
    }
    else if(player1 == 4)
    {
    	if(a4!='X'&& a4!='O')
        {
		 a4 = 'O';
    }
      else
    {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 player(i);
	}
    }
    else if(player1 == 5)
    {
    	if(a5!='X'&&a5!='O')
        {
		 a5 = 'O';
    }
      else
    {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 player(i);
	}
    }
    else if(player1 == 6)
    {
    	if(a6!='X'&&a6!='O')
        {
		 a6 = 'O';
    }
      else
    {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 player(i);
	}
    }
    else if(player1 == 7)
    {
    	if(a7!='X'&&a7!='O')
         {
		 a7 = 'O';
    }
      else
    {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 player(i);
	}
    }
    else if(player1 == 8)
    {
    	if(a8!='X'&&a8!='O')
        {
		 a8 = 'O';
    }
      else
    {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 player(i);
	}
    }
    else if(player1 == 9)
    {
    	if(a9!='X'&&a9!='O')
         {
		 a9 = 'O';
    }
      else
    {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 player(i);
	}
    }
    game();
	      cheaker();

    }   
	//player 2
    else
    {
	
    cout<<"Player 2 Enter Your choise"<<endl;
	cin>>player2;
	  if(player2 == 1)
    {
    	if(a1!='X'&&a1!='O')
       {
		 a1 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
         player(i);
     	}
    }
    else if(player2 == 2)
    {
       	if(a2!='X'&&a2!='O')
       {
		 a2 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 player(i);
     	}
    }
    else if(player2 == 3)
    {
        	if(a3!='X'&&a3!='O')
       {
		 a3 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 player(i);
     	}
    }
    else if(player2 == 4)
    {
       	if(a4!='X'&&a4!='O')
       {
		 a4 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 player(i);
     	}
    }
    else if(player2 == 5)
    {
        	if(a5!='X'&&a5!='O')
       {
		 a5 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 player(i);
     	}
    }
    else if(player2 == 6)
    {
       	if(a6!='X'&&a6!='O')
       {
		 a6 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	  player(i);
     	}
    }
    else if(player2 == 7)
    {
        	if(a7!='X'&&a7!='O')
       {
		 a7 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	 player(i);
     	}
    }
    else if(player2 == 8)
    {
        	if(a8!='X'&&a8!='O')
       {
		 a8 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	  player(i);
     	}
    }
    else if(player2 == 9)
    {
        	if(a9!='X'&&a9!='O')
       {
		 a9 = 'X';
        }
    else
       {
    	 cout<<"ALREADY MARKED DO PLEASE TRY AGAIN  "<<endl;
    	  player(i);
     	}
    }
    game();
	      cheaker();

}
}

void options()
{
	string str;
	cout<<"\n \t\t\t\t\t enter your name(player 1) \t\t "<<endl;
	cin>>str;
}
void turn()
{
	float turner,random,x;
	cout<<"           \t\t TO CHOICE HEAD PRESS 1 0R 0 FOR TAIL  \n\n\n\n"<<endl;
	cin>>x;
    turner=x;
	while((turner!=1)||(turner!=0))
{
	
	
	if((turner==1 )||(turner==0))
	{
	srand(time(0));
	random=(rand()%2);
	cout<<"\t\t\t\t   ************* AFTER TOSSING *************"<<endl;
	if (turner==random) 
	{
		cout<<"\t\t\t\t\t first  player play first [0] "<<endl;
		int i=0;
		for(;i<9;i++)
            {
		player(i);

		
        	}
	
	}
	else 
	{
		cout<<"\t\t\t\t\t second  player play first[X] "<<endl;
		int i=1;
    	for(;i<9;i++)
    {
	player(i);
		
	}
	}
}
else 
{
	cout<<"INVALID INPUT "<<endl;
	cin>>turner;
	if((turner==1 )||(turner==0))
	{
		system("CLS");
	}
	else {
		exit(0);
	}
}
}
}


void instruction()
{
	cout<<"\t\t\t\t   THIS GAME NEED TWO PLAYERS FOR PLAY "<<endl;
	cout<<"\t\t\t\t   ONE MUST YOU AND SECOND ONE MAY BE  "<<endl;
	cout<<"\t\t\t\t           MACHINE OR PLAYER2 \n\n"<<endl;
}

int type_of_game_play()
{
	float x=0;
	int choice=0;
	cout<<" \t\t\t\t\t    enter your choice "<<endl;
	cout<<"\t\t\t\t   enter 1 to play Player Vs Player\n\n "<<endl;
		cout<<"\t\t**************************Player Vs Player**************************"<<endl;
	cout<<"\n\n\n \t\t\t\t   enter 2 to play Player Vs machine\n\n"<<endl;
	   	cout<<"\t\t**************************Player Vs machine**************************"<<endl;
	cin>>x;
	choice=x;
switch(choice)
	{
		case 1:
			{
			
		     game();
	                 turn();
	             }
			break;
		case 2:
			{
			
		
			game();
			machine();
		}
			
			break;
		default:
	   		cout<<"INVALID INPUT"<<endl;
	   		cout<<"PLEASE TRY AGAIN CAREFULLY"<<endl;
	   		 cout<<" WARNING:  LAST TIME I AM TAKING YOUR INPUT NEXT TIME I QUIET THE GAME "<<endl;
   		cin>>choice;
   		{
   				switch(choice)
        	{
		case 1:
			{
			
		     game();
	                 turn();
	        }
			break;
		case 2:
			{
			
		
			game();
			machine();
	    	}
			
			break;
		default:
	   	
	   		 cout<<" WARNING: t\t\t\t SORRY YOU LOST YOUR GAME******************************************************************************************************************  "<<endl;
   	
	   		break;
     	}

		   }
	   		break;
	}

	
	return 1;
}

void menu()
{	

	double option=0;
	int x;
	
	cout<<"\n \t\t\t\t\t enter 1 for INSTRUCIONS        "<<endl;
	cout<<"\n \t\t\t\t\t enter 2 for NEW GAME        "<<endl;
	cout<<"\n \t\t\t\t\t enter 3 for credit        "<<endl;
	cout<<"\n \t\t\t\t\t enter 4 for cheaking how many time you played "<<endl;
	cout<<"\n \t\t\t\t\t enter 5 for QUIET THE GAME        "<<endl;
	
	cin>>option;
	x=option;
	label1:
	   switch(x)
       {
    	case 1:
    		{			
    		int toss,type=0,option;
    			     instruction();
    		       	 menu();
    		       	 system("CLS");
//    				 type=type_of_game_play();
//                 	 cout<<type;
                     
	                 
	            }
    			break;
    	case 2:
    		{
			
    		int type;
    		    options();
    		     system("CLS");
    				 type=type_of_game_play();
                 	 cout<<type;
//                 	 system("CLS");
//                 	  game();
//	                 turn();
	              
	           }
    		    break;
        case 3:
        	{
			
	   	        cout<<"\t\t\t\t\t  THIS GAME IS DESINED BY  ABDULLAH AWAN "<<endl;
	   	        menu();
	   	    }
	          	break;
	    case 4:
	    	score();
	    	menu();
	    	break;
	    case 5:
	    	stop();
	    	break;

	   	default:
	   		cout<<"INVALID INPUT"<<endl;
//	   		system("cls");
	   		while(!cin)
	   		{
	   			cin.clear();
	   			cin.ignore(100,'\n');
	   			cout<<" ENTER AGAIN "<<endl;
	   			cin>>x;
	   			
			   }
	   		goto label1;
	   		break;
     }
// }
      
     
}
int main()
{
	int toss,type=0,option;
	Color(1);
	cout<<"\t\t|-----------------";
    Sleep(200);
    cout<<"----------------";
    Sleep(200);
    cout<<"----------------";
    Sleep(200);
    cout<<"----------------";
    Sleep(200);
    cout<<"----------|";
    cout<<"\n\t\t|*******************************TIC TAC TOE*********************************|"<<endl;
    cout<<"\t\t|-----------------";
    Sleep(200);
    cout<<"----------------";
    Sleep(200);
    cout<<"----------------";
    Sleep(200);
    cout<<"----------------";
    Sleep(200);
    cout<<"----------|";
    cout<<"\n\n";
   menu();

   
	return 0;
}


