#include<iostream>
using namespace std;
char square[10]={'0','1','2','3','4','5','6','7','8','9'};
void DrawBoard()
{
	system("cls");
	cout<<"\n\n\tTIC TAC TOE\n";
	cout<<"PLAYER 1(X)-PLAYER 2(O)\n";
	cout<<"     |     |     "<<endl;
	cout<<"  "<<square[1]<<"  |  "<<square[2]<<"  |  "<<square[3]<<endl;
	cout<<"-----|-----|-----"<<endl;
	cout<<"  "<<square[4]<<"  |  "<<square[5]<<"  |  "<<square[6]<<endl;
	cout<<"-----|-----|-----"<<endl;
	cout<<"  "<<square[7]<<"  |  "<<square[8]<<"  |  "<<square[9]<<endl;
	cout<<"     |     |     "<<endl;
	
}
int check()
{
	if(square[1]==square[2]&&square[2]==square[3])
	return 1;
	else if(square[4]==square[5]&&square[5]==square[6])
	return 1;
	else if(square[7]==square[8]&&square[8]==square[9])
	return 1;
	else if(square[1]==square[5]&&square[5]==square[9])
	return 1;
	else if(square[3]==square[5]&&square[5]==square[7])
	return 1;
	else if(square[1]==square[4]&&square[4]==square[7])
	return 1;
	else if(square[2]==square[5]&&square[5]==square[8])
	return 1;
	else if(square[3]==square[6]&&square[6]==square[9])
	return 1;
	else if(square[1]!='1'&&square[2]!='2'&&square[3]!='3'&&square[4]!='4'&&square[5]!='5'&&square[6]!='6'&&square[7]!='7'&&square[8]!='8'&&square[9]!='9')
	return 0;
	else
	return -1;
}
 main()
{
	int player,choice,i;
	 char mark;
	 player=1;
	do
	{
	
	 DrawBoard();
	 player=(player%2)?1:2;
	 cout<<"Player "<<player<<"Enter the position for your mark:";
	 cin>>choice;
	 mark=(player==1)?'X':'O';
	 if(choice==1 && square[1]=='1')
	 square[1]=mark;
	 else if(choice==2 && square[2]=='2')
	 square[2]=mark;
	 else if(choice==3 && square[3]=='3')
	 square[3]=mark;
	 else if(choice==4 && square[4]=='4')
	 square[4]=mark;
	 else if(choice==5 && square[5]=='5')
	 square[5]=mark;
	 else if(choice==6 && square[6]=='6')
	 square[6]=mark;
	 else if(choice==7 && square[7]=='7')
	 square[7]=mark;
	 else if(choice==8 && square[8]=='8')
	 square[8]=mark;
	 else if(choice==9 && square[9]=='9')
	 square[9]=mark;
	 else
	 {
	 cout<<"Invalid Choice";
	 player--;
	 }
	 i=check();
	 player++;
	}while(i==-1);
	 DrawBoard();
	 if(i==1)
	 cout<<"Wooooooh! Player "<<--player<<" wins"<<endl;
	 else
	 cout<<"Match Draw";
}
