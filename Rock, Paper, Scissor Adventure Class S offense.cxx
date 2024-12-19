#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std; // font 24


class weap{
	
	public:
	
	int wdmg;
	int whp;
	string wattack;
	char wtype;
	int wprice;
	
weap(int w1, int w2,string w3,char w4,int w5){
		
	wdmg =  w1;
	whp = w2;
	wattack = w3;
	wtype = w4;
	wprice = w5;
			
	}

};


class player{
	
	public:
	
	string looks;
	int hp;
	int dmg;
	int lvl;
	char type;
	string attack;
	
                            player
(string look,int h,int d, int l,char t,string atck){
    
    looks = look;
    hp = h;
    dmg = d;
    lvl = l;
    type = t;
    attack = atck;
    }
    


};
weap w1(3,1,"🤜",'m',150);
weap w2(5,1,"🔪",'m',200);
weap w3(12,8,"🥍",'m',500);
weap w4(7,5,"💫",'m',300);
weap w5(7,3,"🪃",'r',200);
weap w6(9,5,"🏹",'r',400);
weap w7(18,5,"🪄",'r',600);
weap w8(15,15,"❄️",'r',750);
weap w9(40,5,"💀",'r',999);

player hero("🧍‍♂️️",65,99,20,'m',"/");

player e1s1("🤺",10,14,1,'m',"<");
player e2s1("🦍",17,17,2,'m',"🪓");
player e3s1("🦖",20,20,3,'m',"␥");
player e4s1("🐳",25,25,4,'r',"🫧");

player e1s2("️🧚‍♀️",35,28,5,'r',"💮");
player e2s2("🧞‍",38,30,6,'r',"🌪️");
player e3s2("🧜",43,33,7,'r',"🌊");

player e1s3("🦹‍♂",65,30,10,'r',"🩸");
player e2s3("🧌",55,20,13,'m',"💥");
player e3s3("🐉",70,25,15,'r',"🐲");

player fboss(hero.looks,hero.hp,hero.dmg,hero.lvl,hero.type,hero.attack);

int mis1 = 0,mis2 = 0,mis3= 0;
int p1 = 0,p2 = 0;
int money = 0;
int hexp= 0;
int h; 
void battle(),level(),batt(),character(),history(),market(),mission();
char x;
float m = 0,w=0;
string win = "WIN";
string lose = "LOSE";
int main()
{
	
cout<<"❅──────────✧❅✦❅✧──────────❅"<<endl;
cout<<"\n⫘⫘[a]⫘⫘⫘[b]⫘⫘⫘[c]⫘⫘⫘⫘⫘⫘"<<endl;
textcolor(4);;

;
textcolor(4);
cout<<"   Battle";
textcolor(7);

textcolor(6);
cout<<"    Market";
textcolor(7);


textcolor(3);
cout<<"   Status"<<endl;
textcolor(7);



cout<<"\n⫘⫘[d]⫘⫘⫘[e]⫘⫘⫘[f]⫘⫘⫘⫘⫘⫘                   "<<endl;
textcolor(1);
cout<<"   History";
textcolor(7);

textcolor(2);
cout<<"   Mission";
textcolor(7);


textcolor(5);
cout<<"    Exit"<<endl;
textcolor(7);
cout<<"\n❅──────────✧❅✦❅✧──────────❅                   \n              m3|v$."<<endl;


cout<<"\n≈≈≈≈≈≈≈≈≈≈≈[enter: ";
cin>>x;
	

switch(x){
	
case 'a':
system("cls");
batt();

break;
			
		
case 'b':
system("cls");
market();

break;				
								
case 'c':
system("cls");
character();

break;					
	
case 'd':
system("cls");
history();

break;		

case 'e':
system("cls");
mission();

break;		
	
default:
system("cls");
main();
break;
}

	


}


void character(){
int wr;
cout<<"================================"<<endl;
cout<<"————————————————————————————————"<<endl;
	cout << " lvl:" << hero.lvl << endl;
	
cout<<" exp:"<<hexp<<"/100  ";
if( hexp <= 80 && hexp > 40){
cout<<"|🟩🟩🟩🟩🟩🟩    |\n";
}else if(hexp<= 40 && hexp > 20){
cout<<"|🟩🟩🟩🟩        |\n";
}else if(hexp <= 20 && hexp > 0){
cout<<"|🟩🟩            |\n";
}else if(hexp == 0){
cout<<"|                |\n";	
}//13
cout<<"————————————————————————————————"<<endl;
	cout << " ❤️:" << hero.hp;
	cout << "    ⚔️:" << hero.dmg << "   🪙:$"<< money<<endl;
cout<<"————————————————————————————————"<<endl;
	cout << " you:" << hero.looks;
	cout << "            weapon:" << hero.attack << endl;
cout<<"————————————————————————————————"<<endl;
	cout << " matches: " << m;
	wr = w / m * 100;
	cout << "        win rate:" << wr <<"%" << endl;
cout<<"————————————————————————————————"<<endl;
cout<<"================================"<<endl;
	system("pause");
	system("cls");
	main();
}


void market(){
cout<<"————————————————————————————————"<<endl;
textcolor(6);
cout<< "    MARKET";
textcolor(7);
cout<<"    ⚔️   ❤️   🪙    T" <<endl;
cout<<"————————————————————————————————"<<endl;
 cout<<"[1] Fist  "<<w1.wattack<< "  +"
 <<w1.wdmg<<"   +"<<w1.whp<<"   $"<<w1.wprice<<"  "<<w1.wtype<<endl;
 
  cout<<"[2] Knife "<<w2.wattack<< "  +"
 <<w2.wdmg<<"   +"<<w2.whp<<"   $"<<w2.wprice<<"  "<<w2.wtype<<endl;
 
  
  cout<<"[3] B-m   "<<w5.wattack<< "  +"
 <<w5.wdmg<<"   +"<<w5.whp<<"   $"<<w5.wprice<<"  "<<w5.wtype<<endl;

 
 cout<<"[4] Star  "<<w4.wattack<< "  +"
 <<w4.wdmg<<"   +"<<w4.whp<<"   $"<<w4.wprice<<"  "<<w4.wtype<<endl;

 
  cout<<"[5] Bow   "<<w6.wattack<< "  +"
 <<w6.wdmg<<"   +"<<w6.whp<<"   $"<<w6.wprice<<"  "<<w6.wtype<<endl;
  
  
 cout<<"[6] Bat   "<<w3.wattack<< "  +"
 <<w3.wdmg<<"  +"<<w3.whp<<"   $"<<w3.wprice<<"  "<<w3.wtype<<endl;
 
 cout<<"[7] Staff "<<w7.wattack<< "  +"
 <<w7.wdmg<<"  +"<<w7.whp<<"   $"<<w7.wprice<<"  "<<w7.wtype<<endl;
 
 cout<<"[8] Frost "<<w8.wattack<< "  +"
 <<w8.wdmg<<"  +"<<w8.whp<<"  $"<<w8.wprice<<"  "<<w8.wtype<<endl;
 
  cout<<"[9] Skull "<<w9.wattack<< "  +"
 <<w9.wdmg<<"  +"<<w9.whp<<"   $"<<w9.wprice<<"  "<<w9.wtype<<endl;

 cout<<"[0] Back"<<endl; cout<<"————————————————————————————————"<<endl;

cout<<"Balance:$"<<money;
	int buy;
	cout<<"\n≈≈≈≈≈≈≈≈≈≈≈[buy: ";
	cin>>buy;
	
	switch(buy){
	
	case 1:
	if(money >= w1.wprice){
	hero.dmg -= p1;
	hero.hp -= p2;
	hero.dmg += w1.wdmg;
	hero.hp += w1.whp;
	p1 = w1.wdmg;
	p2 = w1.whp;
	hero.attack = w1.wattack;
	hero.type = w1.wtype;
	money-=w1.wprice;
	}else{
		cout<<"\n\tnot enough gold\n"<<endl;
	}
	break;
	
	case 2:
	if(money >= w2.wprice){
	hero.dmg -= p1;
	hero.hp -= p2;
	hero.dmg += w2.wdmg;
	hero.hp += w2.whp;
	p1 = w2.wdmg;
	p2 = w2.whp;
	money-=w2.wprice;
	hero.attack = w2.wattack;
		hero.type = w2.wtype;
	
	}else{
		cout<<"\n\tnot enough gold\n"<<endl;
	}
	break;

	case 3:
		if(money >= w5.wprice){
	hero.dmg -= p1;
	hero.hp -= p2;
	hero.dmg += w5.wdmg;
	hero.hp += w5.whp;
	p1 = w5.wdmg;
	p2 = w5.whp;
	money-=w5.wprice;
	hero.attack = w5.wattack;
	hero.type = w5.wtype;
	}else{
		cout<<"\n\tnot enough gold\n"<<endl;
	}
	break;	
	
	case 4:
	if(money >= w4.wprice){
	hero.dmg -= p1;
	hero.hp -= p2;
	hero.dmg += w4.wdmg;
	hero.hp += w4.whp;
	p1 = w4.wdmg;
	p2 = w4.whp;
	money-=w4.wprice;
	hero.attack = w4.wattack;
		hero.type = w4.wtype;
	}else{
		cout<<"\n\tnot enough gold\n"<<endl;
	}
	break;
	
	case 5:
	if(money >= w6.wprice){
	hero.dmg -= p1;
	hero.hp -= p2;
	hero.dmg += w6.wdmg;
	hero.hp += w6.whp;
	p1 = w6.wdmg;
	p2 = w6.whp;
	money-=w6.wprice;
	hero.attack = w6.wattack;
		hero.type = w6.wtype;
	}else{
		cout<<"\n\tnot enough gold\n"<<endl;
	}
	break;
	
	case 6:
		if(money >= w3.wprice){
	hero.dmg -= p1;
	hero.hp -= p2;
	hero.dmg += w3.wdmg;
	hero.hp += w3.whp;
	p1 = w3.wdmg;
	p2 = w3.whp;
	money-=w3.wprice;
	hero.attack = w3.wattack;
		hero.type = w3.wtype;
	}else{
		cout<<"\n\tnot enough gold\n"<<endl;
	}
	break;
	
	case 7:
	if(money >= w7.wprice){
	hero.dmg -= p1;
	hero.hp -= p2;
	hero.dmg += w7.wdmg;
	hero.hp += w7.whp;
	p1 = w7.wdmg;
	p2 = w7.whp;
	money-=w7.wprice;
	hero.attack = w7.wattack;
		hero.type = w7.wtype;
	}else{
		cout<<"\n\tnot enough gold\n"<<endl;
	}
	break;

	case 8:
		if(money >= w8.wprice){
	hero.dmg -= p1;
	hero.hp -= p2;
	hero.dmg += w8.wdmg;
	hero.hp += w8.whp;
	p1 = w8.wdmg;
	p2 = w8.whp;
	money-=w8.wprice;
	hero.attack = w8.wattack;
		hero.type = w8.wtype;
	}else{
		cout<<"\n\tnot enough gold\n"<<endl;
	}
	break;	
	
	case 9:
		if(money >= w9.wprice){
	hero.dmg -= p1;
	hero.hp -= p2;
	hero.dmg += w9.wdmg;
	hero.hp += w9.whp;
	p1 = w9.wdmg;
	p2 = w9.whp;
	money-=w9.wprice;
	hero.attack = w9.wattack;
		hero.type = w9.wtype;
	}else{
		cout<<"\n\tnot enough gold\n"<<endl;
	}
	break;

    
    default:
    system("cls");
    main ();
    break;


	}	
    system("pause");
	system("cls");
	main();
}

string hist[99];
string res[99];
int o = 1;

void history(){
	cout<<"═══════════⊹⊱≼≽⊰⊹════════════"<<endl;
	cout<<"\t[ MATCH HISTORY ]"<<endl;
cout<<"================================"<<endl;
	for(int i = 1; i <= m;i++){
cout<<"————————————————————————————————"<<endl;
		cout<<"       ["<<hero.looks<<"] vs ["<<
		hist[i]<<"]"<<" =  ";
		
		if(res[i] == win ){
			textcolor(2);
			cout<<res[i]<<endl;
			textcolor(7);
		}else{
			textcolor(4);
			cout<<res[i]<<endl;
			textcolor(7);
		}
		cout<<"————————————————————————————————"<<endl;
		
	}
cout<<"================================"<<endl;	cout<<"═══════════⊹⊱≼≽⊰⊹════════════"<<endl;
	
	
	
	system("pause");
	system("cls");
	main();
}



void batt(){
j:
cout<<"⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘"<<endl;
cout<<"————————————————————————————————"<<endl;


cout<<"\n [a] ";
textcolor(2);
cout<<"STAGE 1        ";
textcolor(7);

textcolor(4);
cout<<"STAGE 3";
textcolor(7);
cout<<" [c]  "<<endl;





cout<<" [b] ";
textcolor(6);
cout<<"STAGE 2       ";
textcolor(7);



textcolor(3);
cout<<"    EXIT";;
textcolor(7);
cout<<" [d] \n"<<endl;


cout<<"————————————————————————————————"<<endl;
cout<<"⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘"<<endl;


cout<<"\n≈≈≈≈≈≈≈≈≈≈≈[enter: ";
cin>>x;

switch(x){
	
	case 'a':
system("cls");	cout<<"⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘"<<endl;
cout<<"————————————————————————————————"<<endl;
textcolor(2);
cout<<"    Stage 1          looks"<<endl;
textcolor(7);
cout<<"[1] swords man\t     [🤺]\n";
 cout<<"[2] Gorilla\t     [🦍]\n";
cout<<"[3] T-Rex\t     [🦖]\n";
 cout<<"[4] Whale\t     [🐳]\n";
cout<<"[0] back\n";

cout<<"————————————————————————————————"<<endl;
cout<<"⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘"<<endl;
cout<<"\n≈≈≈≈≈≈≈≈≈≈≈[enter: ";
cin>>h;

switch(h){
	
case 1:system("cls");battle();break;
	
case 2:system("cls");battle();break;
	
case 3:system("cls");battle();break;
	
case 4:system("cls");battle();break;		
	
case 0:system("cls");goto j;break;
}
	
	break;
	
case 'b':
system("cls");	cout<<"⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘"<<endl;
cout<<"————————————————————————————————"<<endl;
textcolor(6);
cout<<"    Stage 2          looks"<<endl;
textcolor(7);
cout<<"[5] fairy\t     [️🧚‍♀️]\n";
 cout<<"[6] element\t     [🧞‍]\n";
cout<<"[7] mermaid\t     [🧜]\n";
cout<<"[0] back\n";

cout<<"————————————————————————————————"<<endl;
cout<<"⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘"<<endl;
cout<<"\n≈≈≈≈≈≈≈≈≈≈≈[enter: ";
cin>>h;

switch(h){
	
case 5:system("cls");battle();break;
	
case 6:system("cls");battle();break;
	
case 7:system("cls");battle();break;		
	
case 0:system("cls");goto j;break;

}
break;
	
case 'c':

system("cls");	cout<<"⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘"<<endl;
cout<<"————————————————————————————————"<<endl;
textcolor(4);
cout<<"     Stage 3         looks"<<endl;
textcolor(7);

cout<<"[8]  vampire\t     [🦹‍♂]\n";

 cout<<"[9]  Orc\t     [🧌]\n";
 
cout<<"[10] dragon\t     [🐉]\n";

cout<<"[11] mimic\t     [❓]\n";

cout<<"[0]  back\n";

cout<<"————————————————————————————————"<<endl;
cout<<"⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘⫘"<<endl;
cout<<"\n≈≈≈≈≈≈≈≈≈≈≈[enter: ";
cin>>h;

switch(h){
	
case 8:
system("cls");
cout<<"================================"<<endl;
cout<<"————————————————————————————————"<<endl;
textcolor(4);
cout<<" BOSS: ";
textcolor(7);
cout<<"Vampire  "<<endl;
cout<<"————————————————————————————————"<<endl;
cout<<" damage:30   hp️:65   [🦹‍♂] "<<endl;
cout<<"————————————————————————————————"<<endl;
textcolor(5);
cout<<" passive skill: "<<endl;
textcolor(7);
 cout<<" -life steal."<<endl;
cout<<"————————————————————————————————"<<endl;
cout<<"================================"<<endl;
system("pause");
system("cls");
battle();
break;
	
case 9:
system("cls");
cout<<"================================"<<endl;
cout<<"————————————————————————————————"<<endl;
textcolor(4);
cout<<" BOSS: ";
textcolor(7);
cout<<"Orc  "<<endl;
cout<<"————————————————————————————————"<<endl;
cout<<" damage:20   hp️:55   [🧌] "<<endl;
cout<<"————————————————————————————————"<<endl;
textcolor(5);
cout<<" passive skill: "<<endl;
textcolor(7);
 cout<<" -reduce enemy damage by 10."<<endl;
cout<<"————————————————————————————————"<<endl;
cout<<"================================"<<endl;
system("pause");
system("cls");
battle();

break;
	
case 10:
system("cls");
cout<<"================================"<<endl;
cout<<"————————————————————————————————"<<endl;
textcolor(4);
cout<<" BOSS: ";
textcolor(7);
cout<<"Dragon  "<<endl;
cout<<"————————————————————————————————"<<endl;
cout<<" damage:25   hp️:70   [🐉] "<<endl;
cout<<"————————————————————————————————"<<endl;
textcolor(5);
cout<<" passive skill: "<<endl;
textcolor(7);
 cout<<" -30% chance to use fire breath   dealing 99 damage."<<endl;
cout<<"————————————————————————————————"<<endl;
cout<<"================================"<<endl;
system("pause");
system("cls");
battle();
break;	

case 11:system("cls");battle();break;		
	
case 0:system("cls");goto j;break;
}
break;
	
default:
system("cls");
main();
break;	
	
}


	
}


void mission(){
cout<<"============";
      textcolor(2);
      cout<<"MISSION";
      textcolor(7);
      cout<<"============="<<endl;
cout<<"————————————————————————————————"<<endl;
cout<<" kill 3 Gorilla\t\t   "<< mis1<<"/3"<<endl;
	cout<<"————————————————————————————————"<<endl;
	cout<<" rewards:\n +40exp\n +$200\n +5❤️\n +5⚔️"<<endl;	cout<<"————————————————————————————————"<<endl;
	

	
cout<<"————————————————————————————————"<<endl;
cout<<" kill 5 mermaid\t\t   "<< mis2<<"/5"<<endl;
	cout<<"————————————————————————————————"<<endl;
	cout<<" rewards:\n +80exp\n +$400\n +10❤️\n +10⚔️"<<endl;	cout<<"————————————————————————————————"<<endl;






system("pause");
system("cls");
main();
	
	
	
}




void battle(){	
string g[10] = {" "," "," "," "," "," "," "," "," "," "};
int a;
int you;
int enemy;
int ehp,edmg,elvl,hhp;
char etype;
string elooks,eattack,hattack;
int s; 

if(hero.attack == w6.wattack){
	
	hero.attack = "➳";

}else if(hero.attack == w7.wattack){
	hero.attack = "✨";	
}

switch(h){

case 1:
ehp = e1s1.hp; edmg = e1s1.dmg;
etype = e1s1.type; elooks = e1s1.looks;
elvl = e1s1.lvl; hhp = hero.hp;
hattack = hero.attack; eattack = e1s1.attack;
s = 1;
break;

case 2:
ehp = e2s1.hp; edmg = e2s1.dmg;
etype = e2s1.type; elooks = e2s1.looks;
elvl = e2s1.lvl; hhp = hero.hp;
hattack = hero.attack; eattack = e2s1.attack;
s = 1;
break;

case 3:
ehp = e3s1.hp; edmg = e3s1.dmg;
etype = e3s1.type; elooks = e3s1.looks;
elvl = e3s1.lvl; hhp = hero.hp;
hattack = hero.attack; eattack = e3s1.attack;
s = 1;
break;

case 4:
ehp = e4s1.hp; edmg = e4s1.dmg;
etype = e4s1.type; elooks = e4s1.looks;
elvl = e4s1.lvl; hhp = hero.hp;
hattack = hero.attack; eattack = e4s1.attack;
s = 1;
break;

case 5:
ehp = e1s2.hp; edmg = e1s2.dmg;
etype = e1s2.type; elooks = e1s2.looks;
elvl = e1s2.lvl; hhp = hero.hp;
hattack = hero.attack; eattack = e1s2.attack;
s = 2;
break;

case 6:
ehp = e2s2.hp; edmg = e2s2.dmg;
etype = e2s2.type; elooks = e2s2.looks;
elvl = e2s2.lvl; hhp = hero.hp;
hattack = hero.attack; eattack = e2s2.attack;
s = 2;
break;

case 7:
ehp = e3s2.hp; edmg = e3s2.dmg;
etype = e3s2.type; elooks = e3s2.looks;
elvl = e3s2.lvl; hhp = hero.hp;
hattack = hero.attack; eattack = e3s2.attack;
s = 2;
break;

case 8:
ehp = e1s3.hp; edmg = e1s3.dmg;
etype = e1s3.type; elooks = e1s3.looks;
elvl = e1s3.lvl; hhp = hero.hp;
hattack = hero.attack; eattack = e1s3.attack;
s = 3;
break;

case 9:
ehp = e2s3.hp; edmg = e2s3.dmg;
etype = e2s3.type; elooks = e2s3.looks;
elvl = e2s3.lvl; hhp = hero.hp;
hattack = hero.attack; eattack = e2s3.attack;
s = 3;
break;

case 10:
ehp = e3s3.hp; edmg = e3s3.dmg;
etype = e3s3.type; elooks = e3s3.looks;
elvl = e3s3.lvl; hhp = hero.hp;
hattack = hero.attack; eattack = e3s3.attack;
s = 3;
break;

case 11:
ehp = fboss.hp; edmg = fboss.dmg;
etype = fboss.type; elooks = fboss.looks;
elvl = fboss.lvl; hhp = hero.hp;
hattack = hero.attack; eattack = fboss.attack;
s = 3;
break;
}

do{
bat:
here:
g[0] = hero.looks;  g[9] = elooks;
cout<<"————————————————————————————————"<<endl;
cout<<" ❤️: "<<hero.hp<<"\t    STAGE "<<s<<   "     "<<ehp<<" :❤️"<<endl;
cout<<"————————————————————————————————"<<endl;
cout<<"========={"<<
g[0]<<g[1]<<g[2]<<g[3]<<g[4]<<
g[5]<<g[6]<<g[7]<<g[8]<<g[9]<<
"}========="<<
endl;			
cout<<"————————————————————————————————"<<endl;
cout<<" ⚔️: "<<hero.dmg<<"   [1] [2] [3]️    "<<edmg<<" :⚔️"<<endl;
cout<<"————————————————————————————————"<<endl;
  

cout<<"\n≈≈≈≈≈≈≈≈≈≈[ enter: ";
cin>>you;

switch(you){   	
   	case 1:cout<<"\n≈≈≈≈≈≈≈≈≈≈[ you: ✊"<<endl;break;   	
   	case 2:cout<<"\n≈≈≈≈≈≈≈≈≈≈[ you: 🖐️"<<endl;break;   	
   	case 3:cout<<"\n≈≈≈≈≈≈≈≈≈≈[ you: ✌️"<<endl;break;   
   	
       default:
       system("cls");
       goto bat;
   	break;
  	
}
			
				
	srand(time(0));
	enemy = 1+rand()%3;
	//enemy = 1;
	switch(enemy){
		
		case 1:
		Sleep(1000);
		cout<<"\n≈≈≈≈≈≈≈≈≈≈[ enemy: ✊"<<endl;
	    if(you == 3){
         a = 0;
     	sleep(1);
	    	cout<<"\n≈≈≈≈≈≈≈≈≈≈[ ";
	    	textcolor(4);
	    	cout<<"you lose"<<endl;
	    	textcolor(7);
	       Sleep(1500);
	    }else if(you == 2){
         a = 1;
         	sleep(1);
	    	cout<<"\n≈≈≈≈≈≈≈≈≈≈[ ";
	    	textcolor(2);
	    	cout<<"you win"<<endl;
	    	textcolor(7);
	       Sleep(1500);
	    }else if(you == 1){
	    	sleep(1);
	    	cout<<"\n≈≈≈≈≈≈≈≈≈≈[ ";
	    	textcolor(3);
	    	cout<<"DRAW"<<endl;
	    	textcolor(7);
	       Sleep(1500);
	       system("cls");
	    	goto here;
	    }
	    
	    
		break;
		
		case 2:
		Sleep(1000);
		cout<<"\n≈≈≈≈≈≈≈≈≈≈[ enemy: 🖐️\n"<<endl;
	 	 if(you == 1){
	 	  a = 0;
     	sleep(1);
	    	cout<<"\n≈≈≈≈≈≈≈≈≈≈[ ";
	    	textcolor(4);
	    	cout<<"you lose"<<endl;
	    	textcolor(7);
	       Sleep(1500);	 	  
	    }else if(you == 3){
	       a = 1;
     	sleep(1);
	    	cout<<"\n≈≈≈≈≈≈≈≈≈≈[ ";
	    	textcolor(2);
	    	cout<<"you win"<<endl;
	    	textcolor(7);
	       Sleep(1500);	       
	    }else if(you == 2){
	    	sleep(1);
	    	cout<<"\n≈≈≈≈≈≈≈≈≈≈[ ";
	    	textcolor(3);
	    	cout<<"DRAW"<<endl;
	    	textcolor(7);
	       Sleep(1500);
	       system("cls");
	    	goto here;
	    }
		break;
		
		case 3:
		Sleep(1000);
		cout<<"\n≈≈≈≈≈≈≈≈≈≈[ enemy: ✌️\n"<<endl;
			 if(you == 2 ){
		     a = 0;
     	sleep(1);
	    	cout<<"\n≈≈≈≈≈≈≈≈≈≈[ ";
	    	textcolor(4);
	    	cout<<"you lose"<<endl;
	    	textcolor(7);
	       Sleep(1500);		     
	    }else if(you == 1){
             a = 1;
      	sleep(1);
	    	cout<<"\n≈≈≈≈≈≈≈≈≈≈[ ";
	    	textcolor(2);
	    	cout<<"you win"<<endl;
	    	textcolor(7);
	       Sleep(1500);            
	    }else if(you == 3 ){
	    	sleep(1);
	    	cout<<"\n≈≈≈≈≈≈≈≈≈≈[ ";
	    	textcolor(3);
	    	cout<<"DRAW"<<endl;
	    	textcolor(7);
	       Sleep(1500);
	       system("cls");
	    	goto here;
	    	}
		break;
	}					

		
				
								
														
system("cls");	
switch(a){
	
	case 1:
	for(int i = 0; i < 8; i++){
if(hero.type == 'm'){
  	g[i] = hero.looks;  g[9] = elooks;
if(g[7] == hero.looks){ g[8] = hero.attack;   }

}else{
		g[0] = hero.looks;  g[9] = elooks;
		g[i+1] = hero.attack;
}



if(g[7] == hero.looks){ g[8] = hattack;           }
cout<<"————————————————————————————————"<<endl;
cout<<" ❤️: "<<hero.hp<<"\t    STAGE "<<s<<   "     "<<ehp<<" :❤️"<<endl;
cout<<"————————————————————————————————"<<endl;
cout<<"========={"<<
g[0]<<g[1]<<g[2]<<g[3]<<g[4]<<
g[5]<<g[6]<<g[7]<<g[8]<<g[9]<<
"}========="<<
endl;			
cout<<"————————————————————————————————"<<endl;
cout<<" ⚔️: "<<hero.dmg<<"   [1] [2] [3]️    "<<edmg<<" :⚔️"<<endl;
cout<<"————————————————————————————————"<<endl;

if(hero.type == 'm'){
if(g[7] == hero.looks){ g[8] = " ";           }
g[i] = " ";
}else{
g[i+1] = " ";
}
Sleep(280);
system("cls");
	}
	if(elooks == e2s3.looks){hero.dmg -= 10; }
	ehp -= hero.dmg;
	if(elooks == e2s3.looks){hero.dmg += 10; }
	//orc
    break;
    
    
    case 0:
	for(int j = 9; j > 1; j--){
if(etype == 'm'){
  	g[0] = hero.looks;  g[j] = elooks;
      if(g[2] == elooks){ g[1] = eattack;           }

}else{
		g[0] = hero.looks;  g[9] = elooks;
		g[j-1] = eattack;
}

 //dragon
if(elooks == e3s3.looks){
int chance;
srand(time(0));
chance =1+ rand()%3;

switch(chance){
   case 1:
	eattack = "🔥";
	edmg = 99;
    }

}


cout<<"————————————————————————————————"<<endl;
cout<<" ❤️: "<<hero.hp<<"\t    STAGE "<<s<<   "     "<<ehp<<" :❤️"<<endl;
cout<<"————————————————————————————————"<<endl;
cout<<"========={"<<
g[0]<<g[1]<<g[2]<<g[3]<<g[4]<<
g[5]<<g[6]<<g[7]<<g[8]<<g[9]<<
"}========="<<
endl;			
cout<<"————————————————————————————————"<<endl;
cout<<" ⚔️: "<<hero.dmg<<"   [1] [2] [3]️    "<<edmg<<" :⚔️"<<endl;
cout<<"————————————————————————————————"<<endl;

if(etype == 'm'){
if(g[2] == elooks){ g[1] = " ";           }
g[j] = " ";
}else{
g[j-1] = " ";
}

Sleep(280);
system("cls");

	}
	
if(elooks == e1s3.looks){ehp+= 10;}//vampire

hero.hp -= edmg;
break;	
	
}

if(hero.hp <= 0 || ehp <= 0){  break; }


}while(true);


if(hero.hp <= 0){
g[9] = elooks;  g[0] = "☠️";
hero.hp = 0;		
}else{
g[0] = hero.looks;  g[9] = "☠️";
ehp = 0;		
}

cout<<"————————————————————————————————"<<endl;
cout<<" ❤️: "<<hero.hp<<"\t    STAGE "<<1<<   "     "<<ehp<<" :❤️"<<endl;
cout<<"————————————————————————————————"<<endl;
cout<<"========={"<<
g[0]<<g[1]<<g[2]<<g[3]<<g[4]<<
g[5]<<g[6]<<g[7]<<g[8]<<g[9]<<
"}========="<<
endl;			
cout<<"————————————————————————————————"<<endl;
cout<<" ⚔️: "<<hero.dmg<<"   [1] [2] [3]️    "<<edmg<<" :⚔️"<<endl;
cout<<"————————————————————————————————"<<endl;




if(ehp <= 0){
	if(elooks == e2s1.looks){
		
		if(mis1<4){
		mis1++;	
		}
	}else if(elooks == e3s2.looks){
				if(mis2<4){
		mis2++;	
		}
		
	}else if(elooks == e2s3.looks){
				if(mis3<4){
		mis3++;	
		}
		
	}
	
	
switch(s){	
case 1: hexp += 40; res[o] = win;
cout<<"\n\t     +$75\n";
cout<<"\n\t     +40 exp\n\n"; w++;
money += 75;
break; 

case 2: hexp += 80; res[o] = win;
cout<<"\n\t     +$125\n";
cout<<"\n\t     +80 exp\n\n";  w++;
money += 125;
break; 
case 3: hexp += 120; res[o] = win;
cout<<"\n\t     +$200\n";
cout<<"\n\t     +120 exp\n\n"; w++;
money += 200;
break; 		



}

}else{
	res[o] = lose;
}

hist[o] = elooks;
 

m++;
o++;
hero.hp -= hero.hp;
hero.hp += hhp;

if(hero.attack == "➳"){
	
	hero.attack = "🏹";

}else if(hero.attack == "✨"){
	hero.attack = "🪄";	
}
level();


}



void level(){
int e;

if(mis1 == 3){
	hexp += 40;
	money+=200;
	hero.hp+=5;
	 hero.dmg += 5;
	textcolor(2);
	cout<<"  \t mission complete \n"<<endl;
	textcolor(7);
	mis1++;
}else if( mis2 == 5){
	hexp += 80;
	money+=400;
	hero.hp+=10;
	 hero.dmg += 10;
	textcolor(2);
	cout<<"  \t mission complete \n"<<endl;
	textcolor(7);
	mis2++;
	
	
}


if(hexp >= 100){
e = hexp - 100;
hero.hp += 5; 
hero.dmg += 3;
hero.lvl++; 
hexp = 0 + e;
textcolor(2);
cout<<"\t you level upp!!!"<<endl;
textcolor(7);
cout<<"\n\t     + 3 damage"<<endl;
cout<<"\n\t     + 5 hp"<<endl;
cout<<"\n\tyou are now level "<<hero.lvl<<endl;
}


system("pause");
system("cls");
main();	
	
}
