#include <stdio.h>
#include<windows.h>


int x, p, h, a , b, c, d, e, f, g, h, t , z, y, x, w;
int harga[3] = {349900, 649900, 1749900};
static int cost;
void text(),kode1(), errorHandling(), refresh(), kode2(),kode3(),price1(),price2(),price3();
int Array[6] = {50000,70000,35000,50000,20000,30000};

int main()
{
	system("COLOR F0");
	printf("\n\t_______________________________________________________________________\n");
	printf("\n\t                   <<< WELCOME TO HYPESHOP.COM >>>                     ");
	printf("\n\t_______________________________________________________________________\n");
	
	printf("\n");
	printf("\t[1]. INFORMATION\n");
	printf("\t[2]. SHOP\n");
	printf("\t[3]. HELP\n");
	printf("\t[4]. EXIT\n");
	printf("\n");

	printf("	Choose an option: ");
	scanf("%d", &z);
	if(z==1)
		{
		system("cls");
		info();
	}
				
	if(z==2)
		{
		system("cls");
		shop();
	}
				
	if(z==3)
		{
		system("cls");
		help();
	}
	if(z==4)
		{
		system("cls");
		loading();
		printf("come back later");
		return 0;
	}
	
	
	
}

int info()   
{
	system("COLOR 0F");
	loading();
	printf("\n\t_______________________________________________________________________\n");
	printf("\n\t                              HYPESHOP");
	printf("\n\t                      PROYEK AKHIR KELOMPOK 12");
	printf("\n\t                    PENGANTAR TEKNIK KOMPUTER 2019 ");                  
	printf("\n\t_______________________________________________________________________\n");
	
	printf("\n   BIODATA PEMBUAT PROGRAM");
	printf("\n   -----------------------------");
	printf("\n   Universitas Indonesia");
	printf("\n   Nama       : Afif Abdurrahman");
	printf("\n   NPM        : 1706043071");
	printf("\n   Fakultas   : Teknik");
	printf("\n   Departemen : Teknik Elektro");
	printf("\n   Jurusan    : Teknik Komputer");
	printf("\n   -----------------------------");
	printf("\n   Universitas Indonesia");
	printf("\n   Nama       : Bryan Oliver");
	printf("\n   NPM        : 1806200305");
	printf("\n   Fakultas   : Teknik");
	printf("\n   Departemen : Teknik Elektro");
	printf("\n   Jurusan    : Teknik Komputer");
	printf("\n   -----------------------------");
	printf("\n   Universitas Indonesia");
	printf("\n   Nama       : Diaz Ilyasa Azrurrafi Saiful");
	printf("\n   NPM        : 1806200154");
	printf("\n   Fakultas   : Teknik");
	printf("\n   Departemen : Teknik Elektro");
	printf("\n   Jurusan    : Teknik Komputer");
	printf("\n\n\n");
	printf("Back to the Menu?\n");
	printf("(Y OR N)");
	switch (getch())
	{
		case 'y': 
			system("cls");
			loading();
			main();
			break;
		case 'n':
			system("cls");
			loading;
			printf("Come Back Soon!");
			return 0;
	}
}

int help()    
{
	loading();
	system("COLOR 0F");
	printf("\n 3. HELP\n");
	printf(" This program is designed to simulate an online-shop, with Hypebeast as the main theme. \n");
	printf(" HOW TO USE PROGRAM : \n");
	printf(" 1. Press 1 to enter the 'Information' menu \n");
	printf(" 2. Press 2 to enter the 'Shop' menu \n");
	printf("    - In the shop menu, chose the brand that you want to purchase \n");
    printf("    - Then, Choose the item that you want to purchase \n");
	printf("    - You can choose multiple items and add them to your shoping cart, the final price will be shown \n");
	printf("    - After that, a shipping menu will pop-up \n");
	printf("    - Choose the distance and the duration of the shipping. Prices may vary \n");
	printf("    - Enter your address \n");
	printf("    - The final price will be shown \n");
	printf(" 3. Press 3 to enter the 'Help' menu \n");
	printf(" 4. Press 4 to exit the progarm \n");
	printf(" \n\n");
	printf(" Back to the Menu?\n");
	printf("(Y OR N)");
	switch (getch())
	{
		case 'y': 
			system("cls");
			loading();
			main();
			break;
		case 'n':
			system("cls");
			loading;
			printf("Come Back Soon!");
			return 0;
	}
	
}

int shop()   
{
	loading();
	system("COLOR F0");
	printf("\n\tHYPEBEAST BRANDS :\n");  
	printf("\t1. BAPE\n");
	printf("\t2. Ripndip\n");
	printf("\t3. Supreme\n");
	printf("\t4. Back\n");
	printf("	Choose an option ");
	scanf("%d", &x);
	if(x==1)
		{
		system("cls");
		bape();
			}
	if(x==2)
		{
		system("cls");
		ripndip();
			}
	if(x==3)
		{
		system("cls");
		supreme();
			}
	if(x==4)
		{
		system("cls");
		loading();
		main();
			}
}

int bape()
{	
	loading();
	system("COLOR 9F");
	printf("\n\tWelcome to BAPE\n\n");
	printf("\t1. Upperwear\n");
	printf("\t2. LowerWear\n");
	printf("\t3. Outerwear\n");
	printf("\t4. Back\n");
	printf("	Choose an option ");
	scanf("%d", &w);
	if(w==1)	
	{
			bape1:
				system("cls");
				loading();
				printf("\t1. BAPE Camo Tee				RP%d\n" , harga[0]);
				printf("\t2. BAPE Tiger tee				RP%d\n" , harga[0]);
				printf("\t3. BAPE x XO Shark te				RP%d\n" , harga[0]);
				printf("\t4. Bape X Stash Tshirt				RP%d\n" , harga[0]);
				printf("\t5. BAPE Shark Tee				RP%d\n" , harga[0]);
				printf("\t6. BAPE x CDG tee				RP%d\n" , harga[0]);
				printf("\t7. Back\n");
				printf("Pick your style: ");
				scanf("%d", &y);		
				buybape1:			
						if(y>0 && y<7)
						{
						system("cls");
						loading();
							printf("Are you sure you want to order:\nBape Upperwear\t\tRp.%d\nY or N", harga[0]);	
							switch (getch()){
						
								case 'y':
									cost+=harga[0];
									pay();
									break;
								case 'n':
									goto bape1;
									break;
								default:
								printf("\n\nwrong input\n");
								system("pause");
								system("cls");
								goto buybape1;
								break;
						}
					}

						if(y==7)
						{
							system("cls");
							bape();
					}
						if(y<1 || y>7){
						printf("\n\nwrong input\n");
						system("pause");
						system("cls");
						goto bape1;
						}
	}
	if(w==2)
	{	
			bape2:
			 	system("cls");
				loading();
				printf("\t1. BAPE NBHD CAMO SHARK SLIM SWEAT PANTS		RP%d\n" , harga[1]);
				printf("\t2. SHARK SLIM SWEAT PANTS 				RP%d\n" , harga[1]);
				printf("\t3. 1ST CAMO 6 POCKET JOGGER PANTS			RP%d\n" , harga[1]);
				printf("\t4. Shark Jaw Shorts Camo 				RP%d\n" , harga[1]);
				printf("\t5. BAPE PATCH TAPERED DENIM PANTS 			RP%d\n" , harga[1]);
				printf("\t6. BAPE x Carhartt pants				RP%d\n" , harga[1]);
				printf("\t7. Back\n");
				printf("Pick your style: ");
				scanf("%d", &y);		
				buybape2:
				
						if(y>0 && y<7){
						system("cls");
						loading();
							printf("Are you sure you want to order:\nBape Lowerwear\t\tRp.%d\nY or N", harga[1]);	
							switch (getch()){
						
								case 'y':
									cost+=harga[1];
									pay();
									break;
								case 'n':
									goto bape2;
									break;
								default:
						printf("\n\nwrong input\n");
						system("pause");
						system("cls");
						goto buybape2;
						break;
						}
					}

						if(y==7)
						{
							system("cls");
							bape();
						}
						if(y<1 || y>7)
						{
						printf("\n\nwrong input\n");
						system("pause");
						system("cls");
						goto bape2;
						
						}
					}
	if(w==3)
	{
			bape3:
				system("cls");
				loading();
				printf("\t1. BAPE x adidas adicolor Track Top Olive Cargo				RP%d\n" , harga[2]);
				printf("\t2. BAPE XXV CITIES CAMO TIGER HOODIE					RP%d\n" , harga[2]);
				printf("\t3. COLOR CAMO SHARK HOODIE						RP%d\n" , harga[2]);
				printf("\t4. BAPE x F1 Jacket							RP%d\n" , harga[2]);
				printf("\t5. BAPE Camo Coach Jacket						RP%d\n" , harga[2]);
				printf("\t6. Gore-Tex 1st Camo Snowboard Jacket					RP%d\n" , harga[2]);
				printf("\t7. Back\n");
				printf("Pick your style: ");	
				scanf("%d", &y);	
				buybape3:
				
				
						if(y>0 && y<7){
						system("cls");
						loading();
							printf("Are you sure you want to order:\nBape Outerwear\t\tRp.%d\nY or N", harga[2]);	
							switch (getch()){
						
								case 'y':
									cost+=harga[2];
									pay();
									break;
								case 'n':
									goto bape3;
									break;
								default:
						printf("\n\nwrong input\n");
						system("pause");
						system("cls");
						goto buybape3;
						break;
						}
					}

						if(y==7)
						{
							system("cls");
							bape();
						}
						if(y<1 || y>7)
						{
						printf("\n\nwrong input\n");
						system("pause");
						system("cls");
						goto bape3;
						}
					}
	if(w==4)
	{
				system("cls");
				loading();
				shop();
			}
	if(w<1 || w>4)
	{
		printf("\n\nwrong input\n");
		system("pause");
		system("cls");
		bape();
	}
}

int ripndip()
{	
	loading();
	system("COLOR 8F");
	printf("\nWelcome to Ripndip\n\n");
	printf("\t1. Upperwear\n");
	printf("\t2. LowerWear\n");
	printf("\t3. Outerwear\n");
	printf("\t4. Back\n");
	printf("	Choose an option ");
	scanf("%d", &w);
	if(w==1)	
	{
			rip1:
				system("cls");
				loading();
				printf("\t1. Rip N Dip T-Shirts Lord Nerma	RP%d\n" , harga[0]);
				printf("\t2. Rip N Dip Mona Lisa tee		RP%d\n" , harga[0]);
				printf("\t3. Rip N Dip P.R.E.A.M T-Shirt		RP%d\n" , harga[0]);
				printf("\t4. RIP N Dip Herb Eater T-Shir		RP%d\n" , harga[0]);
				printf("\t5. Rip N Dipner maniac pinktee		RP%d\n" , harga[0]);
				printf("\t6. Rip N Dip Falling tee		RP%d\n" , harga[0]);
				printf("\t7. Back\n");
				printf("Pick your style: ");
				scanf("%d", &y);		
				buyrip1:			
						if(y>0 && y<7)
						{
						system("cls");
						loading();
							printf("Are you sure you want to order:\nRipndip Upperwear\t\tRp.%d\nY or N", harga[0]);	
							switch (getch()){
						
								case 'y':
									cost+=harga[0];
									pay();
									break;
								case 'n':
									goto rip1;
									break;
								default:
								printf("\n\nwrong input\n");
								system("pause");
								system("cls");
								goto buyrip1;
								break;
						}
					}

						if(y==7)
						{
							system("cls");
							ripndip();
					}
						if(y<1 || y>7){
						printf("\n\nwrong input\n");
						system("pause");
						system("cls");
						goto rip1;
						}
	}
	if(w==2)
	{	
			rip2:
			 	system("cls");
				loading();
				printf("\t1. Nermal Camo Sweat Pants 	(Purple Camo)			RP%d\n" , harga[1]);
				printf("\t2. Nermal Camo Sweat Pants 	(Green Camo)			RP%d\n" , harga[1]);
				printf("\t3. Nermaissance Swishy Pants					RP%d\n" , harga[1]);
				printf("\t4. Rip N Dip Denim Overall					RP%d\n" , harga[1]);
				printf("\t5. Lord Nermal Pants						RP%d\n" , harga[1]);
				printf("\t6. Warp Pants							RP%d\n" , harga[1]);
				printf("\t7. Back\n");
				printf("Pick your style: ");
				scanf("%d", &y);		
				buyrip2:
						if(y>0 && y<7){
						system("cls");
						loading();
							printf("Are you sure you want to order:\nRipndip Lowerwear\t\tRp.%d\nY or N", harga[1]);	
							switch (getch()){
						
								case 'y':
									cost+=harga[1];
									pay();
									break;
								case 'n':
									goto rip2;
									break;
								default:
						printf("\n\nwrong input\n");
						system("pause");
						system("cls");
						goto buyrip2;
						break;
						}
					}

						if(y==7)
						{
							system("cls");
							ripndip();
						}
						if(y<1 || y>7)
						{
						printf("\n\nwrong input\n");
						system("pause");
						system("cls");
						goto rip2;
						
						}
					}
	if(w==3)
	{
			rip3:
				system("cls");
				loading();
				printf("\t1. Fouquet Madonna Hoodie (Tan)				RP%d\n" , harga[2]);
				printf("\t2. Hugger Denim Jackets (Light Blue)			RP%d\n" , harga[2]);
				printf("\t3. Finish Line Jacket					RP%d\n" , harga[2]);
				printf("\t4. Swamp Hoodie						RP%d\n" , harga[2]);
				printf("\t5. Mother Fish Baby Black Hoodie			RP%d\n" , harga[2]);
				printf("\t6. Catwabunga Coach Jacket				RP%d\n" , harga[2]);
				printf("\t7. Back\n");
				printf("Pick your style: ");
				scanf("%d", &y);		
				buyrip3:
				
						if(y>0 && y<7){
						system("cls");
						loading();
							printf("Are you sure you want to order:\nRipndip Outerwear\t\tRp.%d\nY or N", harga[2]);	
							switch (getch()){
						
								case 'y':
									cost+=harga[2];
									pay();
									break;
								case 'n':
									goto rip3;
									break;
								default:
						printf("\n\nwrong input\n");
						system("pause");
						system("cls");
						goto buyrip3;
						break;
						}
					}

						if(y==7)
						{
							system("cls");
							ripndip();
						}
						if(y<1 || y>7)
						{
						printf("\n\nwrong input\n");
						system("pause");
						system("cls");
						goto rip3;
						}
					}
	if(w==4)
	{
				system("cls");
				loading();
				shop();
			}
	if(w<1 || w>4)
	{
		printf("\n\nwrong input\n");
		system("pause");
		system("cls");
		ripndip();
	}
}

int supreme()
{	
	loading();
	system("COLOR CF");
	printf("\nWelcome to Supreme\n\n");
	printf("\t1. Upperwear\n");
	printf("\t2. LowerWear\n");
	printf("\t3. Outerwear\n");
	printf("\t4. Back\n");
	printf("	Choose an option ");
	scanf("%d", &w);
	if(w==1)	
	{
			sup1:
				system("cls");
				loading();
				printf("\t1. Supreme Rocks tee					RP%d\n" , harga[0]);
				printf("\t2. Supreme x Bape Tee					RP%d\n" , harga[0]);
				printf("\t3. Supreme  The Killer Tee				RP%d\n" , harga[0]);
				printf("\t4. Supreme Madonna tee					RP%d\n" , harga[0]);
				printf("\t5. Supreme Scarface tee					RP%d\n" , harga[0]);
				printf("\t6. Supreme Crash tee					RP%d\n" , harga[0]);
				printf("\t7. Back\n");
				printf("Pick your style: ");
				scanf("%d", &y);		
				buysup1:			
						if(y>0 && y<7)
						{
						system("cls");
						loading();
							printf("Are you sure you want to order:\nSupreme Upperwear\t\tRp.%d\nY or N", harga[0]);	
							switch (getch()){
						
								case 'y':
									cost+=harga[0];
									pay();
									break;
								case 'n':
									goto sup1;
									break;
								default:
								printf("\n\nwrong input\n");
								system("pause");
								system("cls");
								goto buysup1;
								break;
						}
					}

						if(y==7)
						{
							system("cls");
							supreme();
					}
						if(y<1 || y>7){
						printf("\n\nwrong input\n");
						system("pause");
						system("cls");
						goto sup1;
						}
	}
	if(w==2)
	{	
			sup2:
			 	system("cls");
				loading();
				printf("\t1. Supreme Split Track Pants			RP%d\n" , harga[1]);
				printf("\t2. Supreme x Champion Pants			RP%d\n" , harga[1]);
				printf("\t3. Supreme Warm Up Camo Pants			RP%d\n" , harga[1]);
				printf("\t4. Supreme Trunks				RP%d\n" , harga[1]);
				printf("\t5. Supreme x Gucci Track Pants			RP%d\n" , harga[1]);
				printf("\t6. Supreme Boxer				RP%d\n" , harga[1]);
				printf("\t7. Back\n");
				printf("Pick your style: ");
				scanf("%d", &y);		
				buysup2:
						if(y>0 && y<7){
						system("cls");
						loading();
							printf("Are you sure you want to order:\nSupreme Lowerwear\t\tRp.%d\nY or N", harga[1]);	
							switch (getch()){
						
								case 'y':
									cost+=harga[1];
									pay();
									break;
								case 'n':
									goto sup2;
									break;
								default:
						printf("\n\nwrong input\n");
						system("pause");
						system("cls");
						goto buysup2;
						break;
						}
					}

						if(y==7)
						{
							system("cls");
							supreme();
						}
						if(y<1 || y>7)
						{
						printf("\n\nwrong input\n");
						system("pause");
						system("cls");
						goto sup2;
						
						}
					}
	if(w==3)
	{
			sup3:
				system("cls");
				loading();
				printf("\t1. Supreme Champion Label Hooded Sweatshirt		RP%d\n" , harga[2]);
				printf("\t2. Supreme The North Face Arc Logo Mountain Parka	RP%d\n" , harga[2]);
				printf("\t3. Supreme Motion Logo Varsity Jacket			RP%d\n" , harga[2]);
				printf("\t4. Supreme 2-Tone Hooded Sideline Jacket		RP%d\n" , harga[2]);
				printf("\t5. Supreme Reflective Stitching Windbreaker		RP%d\n" , harga[2]);
				printf("\t6. Louis Vuitton Supreme X Leather Bomber		RP%d\n" , harga[2]);
				printf("\t7. Back\n");
				printf("Pick your style: ");
				scanf("%d", &y);		
				buysup3:
				
						if(y>0 && y<7){
						system("cls");
						loading();
							printf("Are you sure you want to order:\nSupreme Outerwear\t\tRp.%d\nY or N", harga[2]);	
							switch (getch()){
						
								case 'y':
									cost+=harga[2];
									pay();
									break;
								case 'n':
									goto sup3;
									break;
								default:
						printf("\n\nwrong input\n");
						system("pause");
						system("cls");
						goto buysup3;
						break;
						}
					}

						if(y==7)
						{
							system("cls");
							supreme();
						}
						if(y<1 || y>7)
						{
						printf("\n\nwrong input\n");
						system("pause");
						system("cls");
						goto sup3;
						}
					}
	if(w==4)
	{
				system("cls");
				loading();
				shop();
			}
	if(w<1 || w>4)
	{
		printf("\n\nwrong input\n");
		system("pause");
		system("cls");
		bape();
	}
}

int pay()
{	
	system("COLOR F0");
	system("cls");
	loading();
	printf("\n\n\n\n\n\t\t\t\t\tOrder another item?\n");
	printf("\t\t\t\t\t   Y OR N\n");	
	
		switch (getch())
		{
		case 'y': 
			shop();
			break;
			
		case 'n':
			system ("cls");
			loading();
			transfer();
			
	
		
		}
	}

int loading()  
{
	printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t   Loading\n");
	printf("\t\t\t\t\t\t\t");
	for(x=1;x<=11;x++)
	{
		printf("_");
		Sleep(150);
	}
	system("cls");
}

int transfer(){

  int input;
  system("COLOR F0");
  text();
  printf("input: ");
  scanf(" %d", &input);
  switch(input){
    case 1: {
    	system("cls");
      loading();
     kode1();
      break;
    
    }
    case 2: {
    	system("cls");
      loading();
     	kode2();
    	
      break;
    }
    case 3: {
    	system ("cls");
    	loading();
      kode3();
      break;
    }
    case 4: {
    	system("cls");
    	loading();
    	pay();
		break;
	}
    default: {
      errorHandling();
      
    }
  }
  return 0;
}
void text(){

   printf("\t\tSelect shipping method");
	printf("\n\t\tBase on shipping time");
  printf("\n[1] Same day\n[2] 3-4 Days\n[3] 1 Week\n[4] Back\n");
  printf("---------------------------\n");
}


void kode1(){
	int alamat;
printf("\t\tSame day shipping");
printf("\n\t\tPlease enter your location");
printf("\n[1] Jawa\n[2] Others\n");
price1();
}
void price1(){
int x;

  printf("Reply	: ");
  scanf(" %d", &x);
  switch(x){
  	 case 1: {   
	   int alamat; 
	   
printf("You have chosen Jawa\n");
printf("Shipping cost :Rp");
printf("%d\n",Array[0]);
printf("Please write your address:\t");
scanf("%d",alamat);
pass();
bla0();
break;


}
	case 2:{
		int alamat;
printf("You have chosen Others\n");
printf("Shipping cost :Rp");
printf("%d\n",Array[1]);
printf("Please write your address:\t");
scanf("%d",alamat);
pass();
bla1();
		break;
	}
}
}

void kode2(){
printf("\t\t3 days shipping");
printf("\n\t\tPlease enter your location");
printf("\n[1] Jawa\n[2] Others\n");
price2();
}
void price2(){


void price2();
int y;
  printf("Reply	: ");
  scanf(" %d", &y);
  switch(y){
  	 case 1: {    
  	 int alamat;
printf("You have chosen Jawa\n");
printf("Shipping cost :Rp");
printf("%d\n",Array[2]);
printf("Please write your address:\t");
scanf("%d",alamat);
pass();
bla2();
break;
}
	case 2:{
		int alamat;
printf("You have chosen Others\n");
printf("Shipping cost :Rp");
printf("%d\n",Array[3]);
printf("Please write your address:\t");
scanf("%d",alamat);
pass();
bla3();
		break;
	}
}
}

void kode3(){
printf("\t\t1 week shipping");
printf("\n\t\tPlease enter your location");
printf("\n[1] Jawa\n[2] Others\n");
price3();
}
void price3(){


void price3();
int z;
  printf("Reply	: ");
  scanf(" %d", &z);
  switch(z){
  	 case 1: {    
  	 int alamat;
printf("You have chosen Jawa\n");
printf("Shipping cost :Rp ");
printf("%d\n",Array[4]);
printf("\tPlease write your address:\t");
scanf("%d",alamat);
pass();
bla4();
break;
}
	case 2:{
		int alamat;
printf("You have chosen Others\n");
printf("Shipping cost :Rp");
printf("%d\n",Array[5]);
printf("\tPlease write your address:\t");
scanf("%d",alamat);
pass();
bla5();
break;
	}
}
}

void errorHandling(){
  printf("\nWrong input");
  Sleep(1000);
  loading();
  text();
}

int bla0(){

system("cls");
loading();
printf("Item cost    	: %d\n", cost);
printf("Shipping cost	: %d\n", Array[0]);
t=cost+Array[0];
printf("Total cost 	    : %d", t);
printf("\n\nYour order is being process");
 Sleep(1000);
return 0;
}

int bla1(){

system("cls");
loading();
printf("Item cost    	: %d\n", cost);
printf("Shipping cost	: %d\n", Array[1]);
t=cost+Array[0];
printf("Total cost 	    : %d", t);
printf("\n\nYour order is being process");
 Sleep(1000);
return 0;
}

int bla2(){

system("cls");
loading();
printf("Item cost    	: %d\n", cost);
printf("Shipping cost	: %d\n", Array[2]);
t=cost+Array[0];
printf("Total cost 	    : %d", t);
printf("\n\nYour order is being process");
 Sleep(1000);
return 0;
}

int bla3(){

system("cls");
loading();
printf("Item cost    	: %d\n", cost);
printf("Shipping cost	: %d\n", Array[3]);
t=cost+Array[0];
printf("Total cost 	    : %d", t);
printf("\n\nYour order is being process");
 Sleep(1000);
return 0;
}

int bla4(){

system("cls");
loading();
printf("Item cost    	: %d\n", cost);
printf("Shipping cost	: %d\n", Array[4]);
t=cost+Array[0];
printf("Total cost 	    : %d", t);
printf("\n\nYour order is being process");
 Sleep(1000);
return 0;
}

int bla5(){

system("cls");
loading();
printf("Item cost    	: %d\n", cost);
printf("Shipping cost	: %d\n", Array[5]);
t=cost+Array[0];
printf("Total cost 		: %d", t);
printf("\n\nYour order is being process");
 Sleep(1000);

return 0;
}

int pass(){
char str[20],c=' ';
int i=0;

system("cls");
loading();
printf("\n Enter the password [max length 10] : ");
while (i<=9){
    str[i]=getch();
    c=str[i];
    printf("*");
    i++;
}
str[i]='\0';
i=0;
}

