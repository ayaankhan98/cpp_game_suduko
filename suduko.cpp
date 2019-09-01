/**************************************************************************
*                                                                         *
*    *****************CODE FOR CREATING SUDUKO GAME***************        *
*                               BY AYAAN KHAN                             *
***************************************************************************/
/*****************  HEADER FILES USED IN THE PROGRAM   *******************/
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<iomanip.h>
#include<process.h>
#include<stdlib.h>
#include<dos.h>
#include<time.h>
/* *****************FUNCTIONS USED IN THE PROGRAM*************************/
void main_design();
void design();         // ******FUNCTION USED FOR DESIGNING
void select();         // ******FUNCTION USED FOR MAIN MENU SELECTION
void sudoko_board();   // ******FUNCTION USED FOR GENERATING BOARD AND LOGIC
void play();            // ******FUNCTION USED FOR PLAYER NAME INPUT
void help();          //  *******FUNCTION FOR USER HELP
void about();		//*******FUNCTION CONTAIN INFORMATION ABOUT THE DEVELOPER
void get();
void win_lose();
int matrix1(int n);
int matrix2(int n);
int matrix3(int n);
int matrix4(int n);
int matrix5(int n);
int matrix6(int n);
int matrix7(int n);
int matrix8(int n);
int matrix9(int n);
int h_row1(int n);
int h_row2(int n);
int h_row3(int n);
int h_row4(int n);
int h_row5(int n);
int h_row6(int n);
int h_row7(int n);
int h_row8(int n);
int h_row9(int n);
int v_row1(int n);
int v_row2(int n);
int v_row3(int n);
int v_row4(int n);
int v_row5(int n);
int v_row6(int n);
int v_row7(int n);
int v_row8(int n);
int v_row9(int n);
/*  ****************   GLOBLAL VARIABLES USED    ************************/
char p_name[10];
int board[9][9];        // *******BOARD ARRAY DECELERATION
/*  ****************  MAIN CODE START FROM HERE   ***********************/
void main()
{
	clrscr();
	main_design();
	design();
	select();
	getch();
}
/*      *******************DESIGN FUNCTION BEGAN HERE********************/
void main_design()
{
	cout<<endl;
	textcolor(BLUE);
	clrscr();
	gotoxy(35,12);
	cout<<"S";
	delay(500);
	textcolor(RED);
	clrscr();
	gotoxy(35,12);
	cout<<"SU";
	delay(500);
	textcolor(GREEN);
	clrscr();
	gotoxy(35,12);
	cout<<"SUD";
	delay(500);
	textcolor(WHITE);
	clrscr();
	gotoxy(35,12);
	cout<<"SUDO";
	delay(500);
	textcolor(YELLOW);
	clrscr();
	gotoxy(35,12);
	cout<<"SUDOK";
	delay(500);
	textcolor(BLUE);
	clrscr();
	gotoxy(35,12);
	cout<<"SUDOKU";
	delay(500);
	cout<<endl<<endl;
	textcolor(WHITE);
	clrscr();
}
void design()
{
	gotoxy(35,2);
	cout<<"SUDOKU";
	cout<<endl<<endl;
	for(int i=0;i<40;i++)   // LOOP FOR UNDERLINE AT ABOVE
	{
		cout<<"*";
		cout<<"-";
	}

}
/*    ************** SELECT FUNCTION START HERE***********************/
void select()
{
	int choice;
	char re_choice;
	cout<<endl;
	gotoxy(35,10);
	cout<<"1. PLAY GAME "<<endl;
	gotoxy(35,12);
	cout<<"2. HELP "<<endl;
	gotoxy(35,14);
	cout<<"3. ABOUT US"<<endl;
	gotoxy(35,16);
	cout<<"4. EXIT "<<endl;
	again:
	cout<<"Enter Your Choice : ";
	cin>>choice;
	if(choice==1)
	{
		clrscr();
		design();
		play();
		clrscr();
		design();
		sudoko_board();
	}
	else if(choice==2)
	{
		clrscr();
		help();
	}
	else if(choice==3)
	{
		clrscr();
		about();
	}
	else if(choice==4)
		exit(1);
	else
	{
		cout<<"Wrong Choice "<<endl;
		again2:
		cout<<"Do You Want To Enter Again Y/N : ";
		cin>>choice;
		if((choice==1)||(choice==2))
			goto again;
		else
		{
			cout<<"Again Wrong Choice : "<<endl;
			goto again2;
		}

	}

}
void play()
{
	gotoxy(5,7);
	cout<<"Enter player Name : "<<endl;
	gotoxy(25,7);
	gets(p_name);

}
void help()
{
	int choice;
	gotoxy(33,5);
	cout<<"HOW TO PLAY";
	cout<<endl<<endl<<endl;
	cout<<"use A D S W keys to move left right down and up in Sudoko Board";
	cout<<endl<<"Rules For Filling the Sudoko Puzzel are :-";
	cout<<endl;
	cout<<"1 . in any vertical Row same elements must not be filld";
	cout<<endl;
	cout<<"2 . In any horizontal Row same elements must not be filled";
	cout<<endl;
	cout<<"3 . In any 3x3 columns Same elements must not be filled";
	cout<<endl<<endl;
	again2:
	cout<<"To Go Back Press 0  :  ";
	cin>>choice;
	if(choice==0)
	{
		clrscr();
		design();
		select();
	}
	else
	{
		cout<<"Wrong Input Try again"<<endl;
		goto again2;
       }


}
void about()
{
	int choice;
	gotoxy(12,12);
	cout<<"DEVELPPER           :       AYAAN KHAN";
	cout<<endl;
	gotoxy(12,14);
	cout<<"SPECIAL THANKS To   :       Mr.SHAKTIRISH KUMAR AGARWAL";
	cout<<endl<<endl;
	again3:
	cout<<"To go back press 0  :  ";
	cin>>choice;
	if(choice==0)
	{
		clrscr();
		design();
		select();
	}
	else
	{
		cout<<"Wrong Input Try again"<<endl;
		goto again3;
       }

}
int matrix1(int n)
{
	int check=0;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
		       if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int matrix2(int n)
{
	int check=0;
	for(int i=0;i<3;i++)
		for(int j=3;j<6;j++)
		       if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int matrix3(int n)
{
	int check=0;
	for(int i=0;i<3;i++)
		for(int j=6;j<9;j++)
		       if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int matrix4(int n)
{
	int check=0;
	for(int i=3;i<6;i++)
		for(int j=0;j<3;j++)
		       if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int matrix5(int n)
{
	int check=0;
	for(int i=3;i<6;i++)
		for(int j=3;j<6;j++)
		       if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int matrix6(int n)
{
	int check=0;
	for(int i=3;i<6;i++)
		for(int j=6;j<9;j++)
		       if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int matrix7(int n)
{
	int check=0;
	for(int i=6;i<9;i++)
		for(int j=0;j<3;j++)
		       if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int matrix8(int n)
{
	int check=0;
	for(int i=6;i<9;i++)
		for(int j=3;j<6;j++)
		       if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int matrix9(int n)
{
	int check=0;
	for(int i=6;i<9;i++)
		for(int j=6;j<9;j++)
		       if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int h_row1(int n)
{
	int check=0;
	for(int i=0;i<1;i++)
		for(int j=0;j<9;j++)
			if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int h_row2(int n)
{
	int check=0;
	for(int i=1;i<2;i++)
		for(int j=0;j<9;j++)
			if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int h_row3(int n)
{
	int check=0;
	for(int i=2;i<3;i++)
		for(int j=1;j<9;j++)
			if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int h_row4(int n)
{
	int check=0;
	for(int i=3;i<4;i++)
		for(int j=0;j<9;j++)
			if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int h_row5(int n)
{
	int check=0;
	for(int i=4;i<5;i++)
		for(int j=0;j<9;j++)
			if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int h_row6(int n)
{
	int check=0;
	for(int i=5;i<6;i++)
		for(int j=0;j<9;j++)
			if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int h_row7(int n)
{
	int check=0;
	for(int i=6;i<7;i++)
		for(int j=0;j<9;j++)
			if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int h_row8(int n)
{
	int check=0;
	for(int i=7;i<8;i++)
		for(int j=0;j<9;j++)
			if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int h_row9(int n)
{
	int check=0;
	for(int i=8;i<9;i++)
		for(int j=0;j<9;j++)
			if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int v_row1(int n)
{
	int check=0;
	for(int i=0;i<9;i++)
		for(int j=0;j<1;j++)
			if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int v_row2(int n)
{
	int check=0;
	for(int i=0;i<9;i++)
		for(int j=1;j<2;j++)
			if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int v_row3(int n)
{
	int check=0;
	for(int i=0;i<9;i++)
		for(int j=2;j<3;j++)
			if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int v_row4(int n)
{
	int check=0;
	for(int i=0;i<9;i++)
		for(int j=3;j<4;j++)
			if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int v_row5(int n)
{
	int check=0;
	for(int i=0;i<9;i++)
		for(int j=4;j<5;j++)
			if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int v_row6(int n)
{
	int check=0;
	for(int i=0;i<9;i++)
		for(int j=5;j<6;j++)
			if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int v_row7(int n)
{
	int check=0;
	for(int i=0;i<9;i++)
		for(int j=6;j<7;j++)
			if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int v_row8(int n)
{
	int check=0;
	for(int i=0;i<9;i++)
		for(int j=7;j<8;j++)
			if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
int v_row9(int n)
{
	int check=0;
	for(int i=0;i<9;i++)
		for(int j=8;j<9;j++)
			if(n==board[i][j])
				check++;
	if(check!=0)
		return 0;
	else
		return 1;
}
void get()
{
	char move;
	int x=42,y=7,i,j;
	gotoxy(x,y);
	get:
	i=(y/2)-3;
	j=(x/4)-32+22;
	move=getch();
	if(move=='a'||move=='A')
		gotoxy(x-=4,y);
	else if(move=='s'||move=='S')
		gotoxy(x,y+=2);
	else if(move=='d'||move=='D')
		gotoxy(x+=4,y);
	else if(move=='w'||move=='W')
		gotoxy(x,y-=2);
	else if((move=='1')||(move=='2')||(move=='3')||(move=='4')||(move=='5')||(move=='6')||(move=='7')||(move=='8')||(move=='9'))
	{
		board[i][j]=(move-48);
		cout<<board[i][j];
	}
	else if(move==27)
	{
		clrscr();
		gotoxy(33,12);
		cout<<"PLEASE WAIT...";
		delay(1000);
		exit(0);
	}
	else if(move==13)
		win_lose();
	goto get;

}
void win_lose()
{
	int sum=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0,sum9=0;
	for(int i=0;i<9;i++)
		for(int j=0;j<9;j++)
			sum+=board[i][j];
	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
		{
			if(i==0)
				sum1+=board[i][j];
			if(i==1)
				sum2+=board[i][j];
			if(i==2)
				sum3+=board[i][j];
			if(i==3)
				sum4+=board[i][j];
			if(i==4)
				sum5+=board[i][j];
			if(i==5)
				sum6+=board[i][j];
			if(i==6)
				sum7+=board[i][j];
			if(i==7)
				sum8+=board[i][j];
			if(i==8)
				sum9+=board[i][j];
		}
		if((sum==405)&&(sum1=45)&&(sum2==45)&&(sum3==45)&&(sum4==45)&&(sum6==45)&&(sum7==45)&&(sum8==45)&&(sum9==45))
		{
			clrscr();
			gotoxy(33,12);
			cout<<"YOU WIN";
			delay(5000);
			main();
		}
		else
		{
			clrscr();
			gotoxy(33,12);
			cout<<"YOU LOSE";
			delay(5000);
			main();
		}

}
void sudoko_board()
{
	gotoxy(5,7);
	cout<<"Player Name : ";
	cout<<p_name;
	gotoxy(5,9);
	cout<<"To Quit Press Esc";
	gotoxy(5,11);
	cout<<"To check Press ENTER";
/************  BOARD DESIGN GENERATED HERE   *********************/
	gotoxy(40,6);
	cout<<"�����������������������������������Ŀ";
	cout<<endl;
	gotoxy(40,7);
	cout<<"�   �   �   �   �   �   �   �   �   �";
	cout<<endl;
	gotoxy(40,8);
	cout<<"���ĳ��ĳ������ĳ��ĳ������ĳ��ĳ��ĳ";
	cout<<endl;
	gotoxy(40,9);
	cout<<"�   �   �   �   �   �   �   �   �   �";
	cout<<endl;
	gotoxy(40,10);
	cout<<"���ĳ��ĳ������ĳ��ĳ������ĳ��ĳ��ĳ";
	cout<<endl;
	gotoxy(40,11);
	cout<<"�   �   �   �   �   �   �   �   �   �";
	cout<<endl;
	gotoxy(40,12);
	cout<<"���ĳ��ĳ������ĳ��ĳ������ĳ��ĳ��ĳ";
	cout<<endl;
	gotoxy(40,13);
	cout<<"�   �   �   �   �   �   �   �   �   �";
	cout<<endl;
	gotoxy(40,14);
	cout<<"���ĳ��ĳ������ĳ��ĳ������ĳ��ĳ��ĳ";
	cout<<endl;
	gotoxy(40,15);
	cout<<"�   �   �   �   �   �   �   �   �   �";
	cout<<endl;
	gotoxy(40,16);
	cout<<"���ĳ��ĳ������ĳ��ĳ������ĳ��ĳ��ĳ";
	cout<<endl;
	gotoxy(40,17);
	cout<<"�   �   �   �   �   �   �   �   �   �";
	cout<<endl;
	gotoxy(40,18);
	cout<<"���ĳ��ĳ������ĳ��ĳ������ĳ��ĳ��ĳ";
	cout<<endl;
	gotoxy(40,19);
	cout<<"�   �   �   �   �   �   �   �   �   �";
	cout<<endl;
	gotoxy(40,20);
	cout<<"���ĳ��ĳ������ĳ��ĳ������ĳ��ĳ��ĳ";
	cout<<endl;
	gotoxy(40,21);
	cout<<"�   �   �   �   �   �   �   �   �   �";
	cout<<endl;
	gotoxy(40,22);
	cout<<"���ĳ��ĳ������ĳ��ĳ������ĳ��ĳ��ĳ";
	cout<<endl;
	gotoxy(40,23);
	cout<<"�   �   �   �   �   �   �   �   �   �";
	cout<<endl;
	gotoxy(40,24);
	cout<<"�������������������������������������";
	gotoxy(3,6);

/*********************DESIGN END**************************/

	cout<<"��������������������������Ŀ";
	for(int k=7;k<23;k++)  //LOOP LEFT STRAIGHT LINE
	{
		gotoxy(3,k);
		cout<<"�"<<endl;                           //side window generated
	}
	gotoxy(3,23);
	cout<<"����������������������������";
	for(k=7;k<23;k++)      //LOOP RIGHT STRAIGHT LINE
	{
		gotoxy(30,k);
		cout<<"�"<<endl;
	}
	int rndm3[90];
	time_t t;
	time(&t);
	srand((unsigned int)t);
	int ar[10];
	int n=0;
	for(int i=0;i<90;i++)
	{
			rndm3[i]=rand()%10;     //Random number for board are generated
			if(rndm3[i]==0)
				rndm3[i]==1;
	}
	int r,j,re;
	for(i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			r=0;
			if((i==0)&&(j==0))
			{
				board[i][j]=rndm3[r];
				gotoxy(42,7);
				cout<<board[i][j];
			}
			r=1;
			int check=0;
			if((i==0)&&(j==1))
			{
				re=matrix1(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row1(rndm3[r]);
				if(re==1)
					check++;
				re=v_row2(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(46,7);
					cout<<" ";
				}
				else
				{
					gotoxy(46,7);
					cout<<board[i][j];
				}
			}
			r=2;
			check=0;
			if((i==0)&&(j==2))
			{
				re=matrix1(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row1(rndm3[r]);
				if(re==1)
					check++;
				re=v_row3(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(50,7);
					cout<<" ";
				}
				else
				{
					gotoxy(50,7);
					cout<<board[i][j];
				}
			}
			r=3;
			check=0;
			if((i==0)&&(j==3))
			{
				re=matrix2(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row1(rndm3[r]);
				if(re==1)
					check++;
				re=v_row4(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(54,7);
					cout<<"";
				}
				else
				{
					gotoxy(54,7);
					cout<<board[i][j];
				}
			}
			r=4;
			check=0;
			if((i==0)&&(j==4))
			{
				re=matrix2(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row1(rndm3[r]);
				if(re==1)
					check++;
				re=v_row5(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(58,7);
					cout<<" ";
				}
				else
				{
					gotoxy(58,7);
					cout<<board[i][j];
				}
			}
			r=5;
			check=0;
			if((i==0)&&(j==5))
			{
				re=matrix2(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row1(rndm3[r]);
				if(re==1)
					check++;
				re=v_row6(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(62,7);
					cout<<" ";
				}
				else
				{
					gotoxy(62,7);
					cout<<board[i][j];
				}
			}
			r=6;
			check=0;
			if((i==0)&&(j==6))
			{
				re=matrix3(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row1(rndm3[r]);
				if(re==1)
					check++;
				re=v_row7(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(66,7);
					cout<<" ";
				}
				else
				{
					gotoxy(66,7);
					cout<<board[i][j];
				}
			}
			r=7;
			check=0;
			if((i==0)&&(j==7))
			{
				re=matrix3(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row1(rndm3[r]);
				if(re==1)
					check++;
				re=v_row8(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(70,7);
					cout<<" ";
				}
				else
				{
					gotoxy(70,7);
					cout<<board[i][j];
				}
			}
			r=8;
			check=0;
			if((i==0)&&(j==8))
			{
				re=matrix3(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row1(rndm3[r]);
				if(re==1)
					check++;
				re=v_row9(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(74,7);
					cout<<" ";
				}
				else
				{
					gotoxy(74,7);
					cout<<board[i][j];
				}
			}
			r=9;
			check=0;
			if((i==1)&&(j==0))
			{
				re=matrix1(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row2(rndm3[r]);
				if(re==1)
					check++;
				re=v_row1(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(42,9);
					cout<<" ";
				}
				else
				{
					gotoxy(42,9);
					cout<<board[i][j];
				}
			}
			r=10;
			check=0;
			if((i==1)&&(j==1))
			{
				re=matrix1(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row2(rndm3[r]);
				if(re==1)
					check++;
				re=v_row2(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(46,9);
					cout<<" ";
				}
				else
				{
					gotoxy(46,9);
					cout<<board[i][j];
				}
			}
			r=11;
			check=0;
			if((i==1)&&(j==2))
			{
				re=matrix1(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row2(rndm3[r]);
				if(re==1)
					check++;
				re=v_row3(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(50,9);
					cout<<" ";
				}
				else
				{
					gotoxy(50,9);
					cout<<board[i][j];
				}
			}
			r=12;
			check=0;
			if((i==1)&&(j==3))
			{
				re=matrix2(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row2(rndm3[r]);
				if(re==1)
					check++;
				re=v_row4(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(54,9);
					cout<<" ";
				}
				else
				{
					gotoxy(54,9);
					cout<<board[i][j];
				}
			}
			r=13;
			check=0;
			if((i==1)&&(j==4))
			{
				 re=matrix2(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row2(rndm3[r]);
				if(re==1)
					check++;
				re=v_row5(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(58,9);
					cout<<" ";
				}
				else
				{
					gotoxy(58,9);
					cout<<board[i][j];
				}
			}
			r=14;
			check=0;
			if((i==1)&&(j==5))
			{
				re=matrix2(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row2(rndm3[r]);
				if(re==1)
					check++;
				re=v_row6(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(62,9);
					cout<<" ";
				}
				else
				{
					gotoxy(62,9);
					cout<<board[i][j];
				}
			}
			r=15;
			check=0;
			if((i==1)&&(j==6))
			{
				re=matrix3(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row2(rndm3[r]);
				if(re==1)
					check++;
				re=v_row7(rndm3[r]);
				if(re==1)
					check++;
				if(check==2)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(66,9);
					cout<<" ";
				}
				else
				{
					gotoxy(66,9);
					cout<<board[i][j];
				}
			}
			r=16;
			check=0;
			if((i==1)&&(j==7))
			{
				re=matrix3(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row2(rndm3[r]);
				if(re==1)
					check++;
				re=v_row8(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(70,9);
					cout<<" ";
				}
				else
				{
					gotoxy(70,9);
					cout<<board[i][j];
				}
			}
			r=17;
			check=0;
			if((i==1)&&(j==8))
			{
				re=matrix3(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row2(rndm3[r]);
				if(re==1)
					check++;
				re=v_row9(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(74,9);
					cout<<" ";
				}
				else
				{
					gotoxy(74,9);
					cout<<board[i][j];
				}
			}
			r=18;
			check=0;
			if((i==2)&&(j==0))
			{
				re=matrix1(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row3(rndm3[r]);
				if(re==1)
					check++;
				re=v_row1(rndm3[r]);
				if(re==1)
					check++;
				if(check==2)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				gotoxy(42,11);
				cout<<board[i][j];
				if(board[i][j]==0)
				{
					gotoxy(42,11);
					cout<<" ";
				}
				else
				{
					gotoxy(42,11);
					cout<<board[i][j];
				}
			}
			r=19;
			check=0;
			if((i==2)&&(j==1))
			{
				re=matrix1(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row3(rndm3[r]);
				if(re==1)
					check++;
				re=v_row2(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(46,11);
					cout<<" ";
				}
				else
				{
					gotoxy(46,11);
					cout<<board[i][j];
				}
			}
			r=20;
			check=0;
			if((i==2)&&(j==2))
			{
				re=matrix1(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row3(rndm3[r]);
				if(re==1)
					check++;
				re=v_row3(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(50,11);
					cout<<" ";
				}
				else
				{
					gotoxy(50,11);
					cout<<board[i][j];
				}
			}
			r=21;
			check=0;
			if((i==2)&&(j==3))
			{
				re=matrix2(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row3(rndm3[r]);
				if(re==1)
					check++;
				re=v_row4(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(54,11);
					cout<<" ";
				}
				else
				{
					gotoxy(54,11);
					cout<<board[i][j];
				}
			}
			r=22;
			check=0;
			if((i==2)&&(j==4))
			{
				re=matrix2(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row3(rndm3[r]);
				if(re==1)
					check++;
				re=v_row5(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;;
				if(board[i][j]==0)
				{
					gotoxy(58,11);
					cout<<" ";
				}
				else
				{
					gotoxy(58,11);
					cout<<board[i][j];
				}
			}
			r=23;
			check=0;
			if((i==2)&&(j==5))
			{
				re=matrix2(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row3(rndm3[r]);
				if(re==1)
					check++;
				re=v_row6(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(62,11);
					cout<<" ";
				}
				else
				{
					gotoxy(62,11);
					cout<<board[i][j];
				}
			}
			r=24;
			check=0;
			if((i==2)&&(j==6))
			{
				re=matrix3(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row3(rndm3[r]);
				if(re==1)
					check++;
				re=v_row7(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(66,11);
					cout<<" ";
				}
				else
				{
					gotoxy(66,11);
					cout<<board[i][j];
				}
			}
			r=25;
			check=0;
			if((i==2)&&(j==7))
			{
				re=matrix3(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row3(rndm3[r]);
				if(re==1)
					check++;
				re=v_row8(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(70,11);
					cout<<" ";
				}
				else
				{
					gotoxy(70,11);
					cout<<board[i][j];
				}
			}
			r=26;
			check=0;
			if((i==2)&&(j==8))
			{
				re=matrix3(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row3(rndm3[r]);
				if(re==1)
					check++;
				re=v_row9(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(74,11);
					cout<<" ";
				}
				else
				{
					gotoxy(74,11);
					cout<<board[i][j];
				}
			}
			r=27;
			check=0;
			if((i==3)&&(j==0))
			{
				re=matrix4(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row4(rndm3[r]);
				if(re==1)
					check++;
				re=v_row1(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(42,13);
					cout<<" ";
				}
				else
				{
					gotoxy(42,13);
					cout<<board[i][j];
				}
			}
			r=28;
			check=0;
			if((i==3)&&(j==1))
			{
				re=matrix4(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row4(rndm3[r]);
				if(re==1)
					check++;
				re=v_row2(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(46,13);
					cout<<" ";
				}
				else
				{
					gotoxy(46,13);
					cout<<board[i][j];
				}
			}
			r=29;
			check=0;
			if((i==3)&&(j==2))
			{
				re=matrix4(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row4(rndm3[r]);
				if(re==1)
					check++;
				re=v_row3(rndm3[r]);
				if(re==1)
					check++;
				if(check==2)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(50,13);
					cout<<" ";
				}
				else
				{
					gotoxy(50,13);
					cout<<board[i][j];
				}
			}
			r=30;
			check=0;
			if((i==3)&&(j==3))
			{
				re=matrix5(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row4(rndm3[r]);
				if(re==1)
					check++;
				re=v_row4(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(54,13);
					cout<<" ";
				}
				else
				{
					gotoxy(54,13);
					cout<<board[i][j];
				}
			}
			r=31;
			check=0;
			if((i==3)&&(j==4))
			{
				re=matrix5(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row4(rndm3[r]);
				if(re==1)
					check++;
				re=v_row5(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(58,13);
					cout<<" ";
				}
				else
				{
					gotoxy(58,13);
					cout<<board[i][j];
				}
			}
			r=32;
			check=0;
			if((i==3)&&(j==5))
			{
				re=matrix5(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row4(rndm3[r]);
				if(re==1)
					check++;
				re=v_row6(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(62,13);
					cout<<" ";
				}
				else
				{
					gotoxy(62,13);
					cout<<board[i][j];
				}
			}
			r=33;
			check=0;
			if((i==3)&&(j==6))
			{
				re=matrix6(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row4(rndm3[r]);
				if(re==1)
					check++;
				re=v_row7(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(66,13);
					cout<<" ";
				}
				else
				{
					gotoxy(66,13);
					cout<<board[i][j];
				}

			}
			r=34;
			check=0;
			if((i==3)&&(j==7))
			{
				re=matrix6(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row4(rndm3[r]);
				if(re==1)
					check++;
				re=v_row8(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(70,13);
					cout<<" ";
				}
				else
				{
					gotoxy(70,13);
					cout<<board[i][j];
				}
			}
			r=35;
			check=0;
			if((i==3)&&(j==8))
			{
				re=matrix6(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row4(rndm3[r]);
				if(re==1)
					check++;
				re=v_row9(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(74,13);
					cout<<" ";
				}
				else
				{
					gotoxy(74,13);
					cout<<board[i][j];
				}
			}
			r=36;
			check=0;
			if((i==4)&&(j==0))
			{
				re=matrix4(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row5(rndm3[r]);
				if(re==1)
					check++;
				re=v_row1(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(42,15);
					cout<<" ";
				}
				else
				{
					gotoxy(42,15);
					cout<<board[i][j];
				}
			}
			r=37;
			check=0;
			if((i==4)&&(j==1))
			{
				re=matrix4(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row5(rndm3[r]);
				if(re==1)
					check++;
				re=v_row2(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(46,15);
					cout<<" ";
				}
				else
				{
					gotoxy(46,15);
					cout<<board[i][j];
				}
			}
			r=38;
			check=0;
			if((i==4)&&(j==2))
			{
				re=matrix4(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row5(rndm3[r]);
				if(re==1)
					check++;
				re=v_row3(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(50,15);
					cout<<" ";
				}
				else
				{
					gotoxy(50,15);
					cout<<board[i][j];
				}
			}
			r=39;
			check=0;
			if((i==4)&&(j==3))
			{
				re=matrix5(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row5(rndm3[r]);
				if(re==1)
					check++;
				re=v_row4(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(54,15);
					cout<<" ";
				}
				else
				{
					gotoxy(54,15);
					cout<<board[i][j];
				}
			}
			r=40;
			check=0;
			if((i==4)&&(j==4))
			{
				re=matrix5(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row5(rndm3[r]);
				if(re==1)
					check++;
				re=v_row5(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(58,15);
					cout<<" ";
				}
				else
				{
					gotoxy(58,15);
					cout<<board[i][j];
				}
			}
			r=41;
			check=0;
			if((i==4)&&(j==5))
			{
				re=matrix5(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row5(rndm3[r]);
				if(re==1)
					check++;
				re=v_row6(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(62,15);
					cout<<" ";
				}
				else
				{
					gotoxy(62,15);
					cout<<board[i][j];
				}
			}
			r=42;
			check=0;
			if((i==4)&&(j==6))
			{
				re=matrix6(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row5(rndm3[r]);
				if(re==1)
					check++;
				re=v_row7(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(66,15);
					cout<<" ";
				}
				else
				{
					gotoxy(66,15);
					cout<<board[i][j];
				}
			}
			r=43;
			check=0;
			if((i==4)&&(j==7))
			{
				re=matrix6(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row5(rndm3[r]);
				if(re==1)
					check++;
				re=v_row8(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(70,15);
					cout<<" ";
				}
				else
				{
					gotoxy(70,15);
					cout<<board[i][j];
				}
			}
			r=44;
			check=0;
			if((i==4)&&(j==8))
			{
				re=matrix6(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row5(rndm3[r]);
				if(re==1)
					check++;
				re=v_row9(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(74,15);
					cout<<" ";
				}
				else
				{
					gotoxy(74,15);
					cout<<board[i][j];
				}
			}
			r=45;
			check=0;
			if((i==5)&&(j==0))
			{
				re=matrix4(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row6(rndm3[r]);
				if(re==1)
					check++;
				re=v_row1(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(42,17);
					cout<<" ";
				}
				else
				{
					gotoxy(42,17);
					cout<<board[i][j];
				}
			}
			r=46;
			check=0;
			if((i==5)&&(j==1))
			{
				re=matrix4(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row6(rndm3[r]);
				if(re==1)
					check++;
				re=v_row2(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(46,17);
					cout<<" ";
				}
				else
				{
					gotoxy(46,17);
					cout<<board[i][j];
				}
			}
			r=47;
			check=0;
			if((i==5)&&(j==2))
			{
				re=matrix4(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row6(rndm3[r]);
				if(re==1)
					check++;
				re=v_row3(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(50,17);
					cout<<" ";
				}
				else
				{
					gotoxy(50,17);
					cout<<board[i][j];
				}
			}
			r=48;
			check=0;
			if((i==5)&&(j==3))
			{
				re=matrix5(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row6(rndm3[r]);
				if(re==1)
					check++;
				re=v_row4(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(54,17);
					cout<<" ";
				}
				else
				{
					gotoxy(54,17);
					cout<<board[i][j];
				}
			}
			r=49;
			check=0;
			if((i==5)&&(j==4))
			{
				re=matrix5(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row6(rndm3[r]);
				if(re==1)
					check++;
				re=v_row5(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(58,17);
					cout<<" ";
				}
				else
				{
					gotoxy(58,17);
					cout<<board[i][j];
				}
			}
			r=50;
			check=0;
			if((i==5)&&(j==5))
			{
				re=matrix5(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row6(rndm3[r]);
				if(re==1)
					check++;
				re=v_row6(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(62,17);
					cout<<" ";
				}
				else
				{
					gotoxy(62,17);
					cout<<board[i][j];
				}
			}
			r=51;
			check=0;
			if((i==5)&&(j==6))
			{
				re=matrix6(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row6(rndm3[r]);
				if(re==1)
					check++;
				re=v_row7(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(66,17);
					cout<<" ";
				}
				else
				{
					gotoxy(66,17);
					cout<<board[i][j];
				}
			}
			r=52;
			check=0;
			if((i==5)&&(j==7))
			{
				re=matrix6(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row6(rndm3[r]);
				if(re==1)
					check++;
				re=v_row8(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(70,17);
					cout<<" ";
				}
				else
				{
					gotoxy(70,17);
					cout<<board[i][j];
				}
			}
			r=53;
			check=0;
			if((i==5)&&(j==8))
			{
				re=matrix6(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row6(rndm3[r]);
				if(re==1)
					check++;
				re=v_row9(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(74,17);
					cout<<" ";
				}
				else
				{
					gotoxy(74,17);
					cout<<board[i][j];
				}
			}
			r=54;
			check=0;
			if((i==6)&&(j==0))
			{
				re=matrix7(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row7(rndm3[r]);
				if(re==1)
					check++;
				re=v_row1(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(42,19);
					cout<<" ";
				}
				else
				{
					gotoxy(42,19);
					cout<<board[i][j];
				}
			}
			r=55;
			check=0;
			if((i==6)&&(j==1))
			{
				re=matrix7(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row7(rndm3[r]);
				if(re==1)
					check++;
				re=v_row2(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(46,19);
					cout<<" ";
				}
				else
				{
					gotoxy(46,19);
					cout<<board[i][j];
				}
			}
			r=56;
			check=0;
			if((i==6)&&(j==2))
			{
				re=matrix7(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row7(rndm3[r]);
				if(re==1)
					check++;
				re=v_row3(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(50,19);
					cout<<" ";
				}
				else
				{
					gotoxy(50,19);
					cout<<board[i][j];
				}
			}
			r=57;
			check=0;
			if((i==6)&&(j==3))
			{
				re=matrix8(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row7(rndm3[r]);
				if(re==1)
					check++;
				re=v_row4(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(54,19);
					cout<<" ";
				}
				else
				{
					gotoxy(54,19);
					cout<<board[i][j];
				}
			}
			r=58;
			check=0;
			if((i==6)&&(j==4))
			{
				re=matrix8(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row7(rndm3[r]);
				if(re==1)
					check++;
				re=v_row5(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(58,19);
					cout<<" ";
				}
				else
				{
					gotoxy(58,19);
					cout<<board[i][j];
				}
			}
			r=59;
			check=0;
			if((i==6)&&(j==5))
			{
				re=matrix8(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row7(rndm3[r]);
				if(re==1)
					check++;
				re=v_row6(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(62,19);
					cout<<" ";
				}
				else
				{
					gotoxy(62,19);
					cout<<board[i][j];
				}
			}
			r=60;
			check=0;
			if((i==6)&&(j==6))
			{
				re=matrix9(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row7(rndm3[r]);
				if(re==1)
					check++;
				re=v_row7(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(66,19);
					cout<<" ";
				}
				else
				{
					gotoxy(66,19);
					cout<<board[i][j];
				}
			}
			r=61;
			check=0;
			if((i==6)&&(j==7))
			{
				re=matrix9(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row7(rndm3[r]);
				if(re==1)
					check++;
				re=v_row8(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(70,19);
					cout<<" ";
				}
				else
				{
					gotoxy(70,19);
					cout<<board[i][j];
				}
			}
			r=62;
			check=0;
			if((i==6)&&(j==8))
			{
				re=matrix9(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row7(rndm3[r]);
				if(re==1)
					check++;
				re=v_row9(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(74,19);
					cout<<" ";
				}
				else
				{
					gotoxy(74,19);
					cout<<board[i][j];
				}
			}
			r=63;
			check=0;
			if((i==7)&&(j==0))
			{
				re=matrix7(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row8(rndm3[r]);
				if(re==1)
					check++;
				re=v_row1(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(42,21);
					cout<<" ";
				}
				else
				{
					gotoxy(42,21);
					cout<<board[i][j];
				}
			}
			r=64;
			check=0;
			if((i==7)&&(j==1))
			{
				re=matrix7(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row8(rndm3[r]);
				if(re==1)
					check++;
				re=v_row2(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(46,21);
					cout<<" ";
				}
				else
				{
					gotoxy(46,21);
					cout<<board[i][j];
				}
			}
			r=65;
			check=0;
			if((i==7)&&(j==2))
			{
				re=matrix7(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row8(rndm3[r]);
				if(re==1)
					check++;
				re=v_row3(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(50,21);
					cout<<" ";
				}
				else
				{
					gotoxy(50,21);
					cout<<board[i][j];
				}
			}
			r=66;
			check=0;
			if((i==7)&&(j==3))
			{
				re=matrix8(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row8(rndm3[r]);
				if(re==1)
					check++;
				re=v_row4(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(54,21);
					cout<<" ";
				}
				else
				{
					gotoxy(54,21);
					cout<<board[i][j];
				}
			}
			r=67;
			check=0;
			if((i==7)&&(j==4))
			{
				re=matrix8(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row8(rndm3[r]);
				if(re==1)
					check++;
				re=v_row5(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(58,21);
					cout<<" ";
				}
				else
				{
					gotoxy(58,21);
					cout<<board[i][j];
				}
			}
			r=68;
			check=0;
			if((i==7)&&(j==5))
			{
				re=matrix8(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row8(rndm3[r]);
				if(re==1)
					check++;
				re=v_row6(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(62,21);
					cout<<" ";
				}
				else
				{
					gotoxy(62,21);
					cout<<board[i][j];
				}
			}
			r=69;
			check=0;
			if((i==7)&&(j==6))
			{
				re=matrix9(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row8(rndm3[r]);
				if(re==1)
					check++;
				re=v_row7(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(66,21);
					cout<<"";
				}
				else
				{
					gotoxy(66,21);
					cout<<board[i][j];
				}
			}
			r=70;
			check=0;
			if((i==7)&&(j==7))
			{
				re=matrix9(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row8(rndm3[r]);
				if(re==1)
					check++;
				re=v_row8(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(70,21);
					cout<<" ";
				}
				else
				{
					gotoxy(70,21);
					cout<<board[i][j];
				}
			}
			r=71;
			check=0;
			if((i==7)&&(j==8))
			{
				re=matrix9(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row8(rndm3[r]);
				if(re==1)
					check++;
				re=v_row9(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(74,21);
					cout<<" ";
				}
				else
				{
					gotoxy(74,21);
					cout<<board[i][j];
				}
			}
			r=72;
			check=0;
			if((i==8)&&(j==0))
			{
				re=matrix7(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row9(rndm3[r]);
				if(re==1)
					check++;
				re=v_row1(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(42,23);
					cout<<" ";
				}
				else
				{
					gotoxy(42,23);
					cout<<board[i][j];
				}
			}
			r=73;
			check=0;
			if((i==8)&&(j==1))
			{
				re=matrix7(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row9(rndm3[r]);
				if(re==1)
					check++;
				re=v_row2(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(46,23);
					cout<<" ";
				}
				else
				{
					gotoxy(46,23);
					cout<<board[i][j];
				}
			}
			r=74;
			check=0;
			if((i==8)&&(j==2))
			{
				re=matrix7(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row9(rndm3[r]);
				if(re==1)
					check++;
				re=v_row3(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(50,23);
					cout<<" ";
				}
				else
				{
					gotoxy(50,23);
					cout<<board[i][j];
				}
			}
			r=75;
			check=0;
			if((i==8)&&(j==3))
			{
				re=matrix8(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row9(rndm3[r]);
				if(re==1)
					check++;
				re=v_row4(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(54,23);
					cout<<" ";
				}
				else
				{
					gotoxy(54,23);
					cout<<board[i][j];
				}
			}
			r=76;
			check=0;
			if((i==8)&&(j==4))
			{
				re=matrix8(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row9(rndm3[r]);
				if(re==1)
					check++;
				re=v_row5(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(58,23);
					cout<<" ";
				}
				else
				{
					gotoxy(58,23);
					cout<<board[i][j];
				}
			}
			r=77;
			check=0;
			if((i==8)&&(j==5))
			{
				re=matrix8(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row9(rndm3[r]);
				if(re==1)
					check++;
				re=v_row6(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(62,23);
					cout<<" ";
				}
				else
				{
					gotoxy(62,23);
					cout<<board[i][j];
				}
			}
			r=78;
			check=0;
			if((i==8)&&(j==6))
			{
				re=matrix9(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row9(rndm3[r]);
				if(re==1)
					check++;
				re=v_row7(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(66,23);
					cout<<" ";
				}
				else
				{
					gotoxy(66,23);
					cout<<board[i][j];
				}
			}
			r=79;
			check=0;
			if((i==8)&&(j==7))
			{
				re=matrix9(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row9(rndm3[r]);
				if(re==1)
					check++;
				re=v_row8(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(70,23);
					cout<<" ";
				}
				else
				{
					gotoxy(70,23);
					cout<<board[i][j];
				}
			}
			r=80;
			check=0;
			if((i==8)&&(j==8))
			{
				re=matrix9(rndm3[r]);
				if(re==1)
				      check++;
				re=h_row9(rndm3[r]);
				if(re==1)
					check++;
				re=v_row9(rndm3[r]);
				if(re==1)
					check++;
				if(check==3)
					board[i][j]=rndm3[r];
				else
					board[i][j]=0;
				if(board[i][j]==0)
				{
					gotoxy(74,23);
					cout<<" ";
				}
				else
				{
					gotoxy(74,23);
					cout<<board[i][j];
				}
			}
		}
	}
	get();
}
