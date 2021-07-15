#include"Grid.h"
Grid::Grid(){
			for(int i=0;i<139;i++){
				this->GridA[i]=commom;
				this->Grid_is_Hero[i]=0;
				this->Grid_is_Monster[i]=0;
			}
			this->GridA[0]=market;
			this->GridA[100]=market;
			this->GridA[130]=market;
			this->GridA[139]=market;
			this->GridA[45]=market;
			this->GridA[4]=nonAccessible;
			this->GridA[5]=nonAccessible;
			this->GridA[134]=nonAccessible;
			this->GridA[135]=nonAccessible;
			this->GridA[22]=nonAccessible;
			this->GridA[27]=nonAccessible;
			this->GridA[122]=nonAccessible;
			this->GridA[127]=nonAccessible;
			this->GridA[41]=nonAccessible;
			this->GridA[43]=nonAccessible;
			this->GridA[48]=nonAccessible;
			this->GridA[46]=nonAccessible;
			this->GridA[81]=nonAccessible;
			this->GridA[83]=nonAccessible;
			this->GridA[86]=nonAccessible;
			this->GridA[88]=nonAccessible;
			this->GridA[133]=nonAccessible;
			this->GridA[124]=nonAccessible;
			this->GridA[115]=nonAccessible;
//			this->GridA[106]=nonAccessible;
//			this->Grid_is_Hero[100]=1;
			this->Grid_is_Monster[2]=1;
//			this->Grid_is_Hero[10]=1;
//			this->Grid_is_Hero[90]=1;
//			this->Grid_is_Monster[10]=1;
//			this->Grid_is_Hero[80]=1;
			
		}
int Grid::getPossition(){
	return this->position;
}
void Grid::set_Monster(int pos,int f){
			this->Grid_is_Monster[pos]=f;
		}
void Grid::set_Hero(int pos,int f){
			this->Grid_is_Hero[pos]=f;
		}
int Grid::get_Monster(int pos){
			return this->Grid_is_Monster[pos];
		}
int Grid::get_Hero(int pos){
			return this->Grid_is_Hero[pos];
		}
int Grid::getFightStatus(){
	return this->fight;
}
void Grid::displayMap(){
			int k=-1;
			for(int j=0;j<140;j++){
				k++;	
				if(k==10){
					cout<<"|";
					cout<<endl;
					k=0;
				}
				if(this->GridA[j]==-3){
					cout<<"|X";
				}else if(this->GridA[j]==5){
					if(this->Grid_is_Hero[j]!=1&&this->Grid_is_Monster[j]!=1){
						cout<<"|M";
					}else if(this->Grid_is_Monster[j]==1&&this->Grid_is_Hero[j]!=1){
						cout<<"|E";
					}else if(this->Grid_is_Monster[j]!=1&&this->Grid_is_Hero[j]==1){
						cout<<"|H";
					}else{
						cout<<"|B";//B stands for Both montser and H
					}
					
				}
				else{
					if(this->Grid_is_Hero[j]!=1&&this->Grid_is_Monster[j]!=1){
						cout<<"|+";
					}else{
						if(this->Grid_is_Hero[j]!=1&&this->Grid_is_Monster[j]!=1){
						cout<<"|M";
					}else if(this->Grid_is_Monster[j]==1&&this->Grid_is_Hero[j]!=1){
						cout<<"|E";// E stands for Enemy==monsters
					}else if(this->Grid_is_Monster[j]!=1&&this->Grid_is_Hero[j]==1){
						cout<<"|H";
					}else{
						cout<<"|B";//B stands for Both montser
					}
						
					}
				}
			}
			cout<<"|";
			
		}
int Grid::getMaxHeores(){
			return this->max_Heroes;
		}
int Grid::move(signed int pos){
			int right,left,up,down,opt,posit,pl;
			bool flag=false,flag1=true;
			pl=1;
			this->fight=1;
			this->Market=0;
			int fight_flag=0;
			posit=pos;
			right=pos+1;
			left=pos-1;
			up=pos-10;
			down=pos+10;
			int tmp=0;//checking if its the 1s looop
			string option;
		//	cout<<"Up: "<<up<<" Left: "<<left<<" Down: "<<down<<" Right: "<<right<<endl;
			while(pl!=0&&fight_flag==0){
			//	up=posit-10;
			pos=this->position;
				flag1=true;
				
				if(pos==0&&tmp!=1){
					this->Market=1;
					        tmp++;
							cout<<"You've moved to a Market area"<<endl;
							cout<<"Do you want to trade?"<<endl;
							cin>>option;
							if(option=="YES"||option=="yes"){
								break;
							}
				}
			while(flag==false){
				cout<<"In Which direction do you want to move?"<<endl;
				cout<<"1->UP 2->LEFT 3->RIGHT 4->DOWN"<<endl;
				cin>>opt;
				if(opt>=1&&opt<=4){
					flag=true;
				}else{
					cout<<"Please give a valid direction"<<endl;
				}
			}
			while(flag1==true){
				
				if(opt==1){
					if(up<0||this->GridA[up]==nonAccessible){
						cout<<"You can't move up !!"<<endl;
						flag1=false;
						break;}
						this->Grid_is_Hero[up]=1;
						cout<<"You've moved upward !!"<<endl;
						this->set_Hero(posit,0);
						this->set_Hero(up,1);
						flag1=false;
						this->Market=0;
						if(this->Grid_is_Hero[up]==this->Grid_is_Monster[up]){
							fight_flag=10;
						}
						if(this->GridA[up]==market){
							this->Market=1;
							cout<<"You've moved to a Market area"<<endl;
							cout<<"Do you want to trade?"<<endl;
							cin>>option;
						}
						posit=up;
						//cout<<"posit is: "<<posit<<endl;;
						up+=-10;
						//cout<< this->Grid_is_Hero[up]<<" Position"<<endl;
						break;
				}else if(opt==2){
					if((pos%10==0&&left<0)||this->GridA[left]==nonAccessible){//checking if it is out of range
						flag1=false;
						cout<<"You can't move left !!"<<endl;
						break;}
						this->Market=0;
						cout<<"You've moved left !!"<<endl;
						this->set_Hero(posit,0);
						this->set_Hero(left,1);
						this->Grid_is_Hero[left]=1;
						flag1=false;
						if(this->Grid_is_Hero[left]==this->Grid_is_Monster[left]){
							fight_flag=10;
						}
						if(this->GridA[left]==market){
							this->Market=1;
							cout<<"You've moved to a Market area"<<endl;
							cout<<"Do you want to trade?"<<endl;
							cin>>option;
						}
						posit=left;
						left=posit-1;
						break;
				}else if(opt==3){
					if(right%10==0||right>140||this->GridA[right]==nonAccessible){//out of range
						flag1=false;
						cout<<"You can't move right!!"<<endl;
						this->set_Hero(pos,0);
						break;}
						this->Market=0;
						cout<<"You've moved right"<<endl;
						this->set_Hero(right,1);
						this->set_Hero(posit,0);
						flag1=false;
						//this->Grid_is_Hero[right]=1;//the new hero position//we must erase this 
						if(this->Grid_is_Hero[right]==this->Grid_is_Monster[right]){
							fight_flag=10;
						}
						if(this->GridA[right]==market){
							this->Market=1;
							cout<<"You've moved to a Market area"<<endl;
							cout<<"Do you want to trade?"<<endl;
							cin>>option;
						}
					//	cout<<"Right: "<<right<<endl;
						
						right+=1;
						posit=right;
						break;
				}else if(opt==4){
					if(down>140||this->GridA[down]==nonAccessible){
						cout<<"You can't move down !!"<<endl;
						flag1=false;
						break;
					}
					this->Market=0;
					this->set_Hero(down,1);
					this->set_Hero(posit,0);
					cout<<"You've moved down !!"<<endl;
					this->Grid_is_Hero[down]=1;
					flag1=false;
					if(this->Grid_is_Hero[down]==this->Grid_is_Monster[down]){
							fight_flag=10;
						}
					if(this->GridA[down]==market){
						    this->Market=1;
							cout<<"You've moved to a Market area"<<endl;
							cout<<"Do you want to trade?"<<endl;
							cin>>option;
						}
					posit=down;
					down=posit+10;
					break;
					}
					
				}
				if(option=="YES"&&this->Market==1){
					break;
				}
				cout<<"Do you want to move again? Type any number for YES or 0 for NO "<<endl;
				cin>>pl;
				this->Market=0;
				flag=false;
				this->fight=flag;
			
				if(fight_flag==10){
					cout<<"Your team has got involved in a fight !! "<<endl;
					this->fight=10;
					break;
				}
				
			}
			this->position=posit;
			return posit;
	}
int Grid::getMarket_Status(){
		return this->Market;
	}
