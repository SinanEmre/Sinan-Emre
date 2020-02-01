#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <windows.h>
#include<stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <windows.h>
#include<conio.h>

int main(){
	int a,b,i,j,f,g,T;
	char h;
	// h getch de kullanýlacak a b i j f g T çeþitli yerlerde kullanýlacak int ler 
	//P p+
	//p p-
	//k karadelik
	//e e-
	//E e+
	//G giriþ , C çýkýs, x bulunulan konum
	//77 sað 75 sol 72 yukarý 80 aþaðý 
	int w,Q,y,z,r;
	w=0, Q=0,y=0,z=0,r=0,T=0;
	//  w p+ sayýsý ,Q p- sayýsý, y e+ sayýsý ,z e- sayýsý, T karþýt hidrojen için total miktar
    int N=8, M=8;
    // matrisin boyutlarý 
	 char labmat[8][8]={
{'1','1','K','0','0','p','0','0'},
{'0','0','e','0','0','0','0','0'},
{'0','G','1','1','1','0','0','1'},
{'p','0','0','0','1','0','1','1'},
{'0','1','P','0','E','0','E','1'},
{'E','1','0','0','1','0','C','1'},
{'0','1','0','0','0','0','0','0'},
{'0','0','p','p','E','1','1','0'}
};

	for(i=0;i<N;i++){
	
	    for(j=0;j<M;j++)
	    
	    printf("%c\t", labmat[i][j] );
	    printf("\n");}


i=2,j=1;
//x in giriþ  konumu 
while(r==0) {

//kontrol mekanizmasý

	h=getch();
      h=getch();
         if(h==77)
           {
           
           	 
           	   if((j<M-1)&&labmat[i][j+1]!='1')
           	      {
           	      	j++;
           	      	 if (labmat[i][j]=='K' || labmat[i][j]=='C')
           	      	   break ;
           	      	   else
           	      	    {
           	      	    	if(labmat[i][j]=='P')
           	      	    		w++;
           	      	    	else if(labmat[i][j]=='p')
           	      	    		Q++;
           	      	    	else if(labmat[i][j]=='E')
           	      	    		y++;
           	      	    	else if(labmat[i][j]=='e')
           	      	    	   	z++;
							labmat[i][j-1]='0';
							labmat[i][j]='x';
							 }
							 
					 }
					   }
	    else
	 
	 	 if(h==75)
           {
           
           	
           	   if(j-1>=0 &&labmat[i][j-1]!='1')
           	      {
           	      	j=j-1;
           	      	 if (labmat[i][j]=='K' || labmat[i][j]=='C')
           	      	   break ;
           	      	   else
           	      	    {
           	      	    	if(labmat[i][j]=='P')
           	      	    		w++;
           	      	    	else if(labmat[i][j]=='p')
           	      	    		Q++;
           	      	    	else if(labmat[i][j]=='E')
           	      	    		y++;
           	      	    	else if(labmat[i][j]=='e')
           	      	    	   	z++;
							labmat[i][j+1]='0';
							labmat[i][j]='x';
							
							 }
							 
					 }
		}
			  
			  
		   
		   	 if(h==72)
           {
           
           	 
           	   if(i-1>=0&&labmat[i-1][j]!='1')
           	      {
           	      	i=i-1;
           	      	 if (labmat[i][j]=='K' || labmat[i][j]=='C')
           	      	   break ;
           	      	   else
           	      	    {
           	      	    	if(labmat[i][j]=='P')
           	      	    		w++;
           	      	    	else if(labmat[i][j]=='p')
           	      	    		Q++;
           	      	    	else if(labmat[i][j]=='E')
           	      	    		y++;
           	      	    	else if(labmat[i][j]=='e')
           	      	    	   	z++;
							labmat[i+1][j]='0';
							labmat[i][j]='x';
							
							 }
							 
					 }
		}
		

		   
		   if(h==80)
		   {
		   
           
           	 
           	   if((i<N-1)&&labmat[i+1][j]!='1')
           	      {
           	      	
           	      	i++;
           	      	 if (labmat[i][j]=='K' || labmat[i][j]=='C')
           	      	   break ;
           	      	   
						else
           	      	    {
           	      	    	if(labmat[i][j]=='P')
           	      	    		w++;
           	      	    	else if(labmat[i][j]=='p')
           	      	    		Q++;
           	      	    	else if(labmat[i][j]=='E')
           	      	    		y++;
           	      	    	else if(labmat[i][j]=='e')
           	      	    	   	z++;
							labmat[i-1][j]='0';
							labmat[i][j]='x';
							 }
							 
					 }
				}
			  if(h==27)
			  break;
			  
		   
		
	
system("cls");

	
		for(f=0;f<N;f++){
	
	    for(g=0;g<M;g++)
	    
	    printf("%c\t", labmat[f][g] );
	    printf("\n");}
	    
	    printf ("\n");
	    // toplnan parçacýklarýn bilgisini tutar
	    printf("TOPLANAN PARCACIKLAR\n");
	    printf("p+");
	    printf("%d\n",w );
	    printf("p- ");
	    printf("%d\n", Q);
	    printf("e+ ");
	    printf("%d\n", y);
	    printf("e-");
	    printf("%d\n",z);
	    
	}
system("cls");
	//döngüden çýkýþ sebebimizi bilmek için kontrol ederiz
if((labmat[i][j]=='C') || (h==27) )
    {
    	Q=Q-w;
    	y=y-z;
    	if ((Q!=0) && (y!=0))
		{
			if (Q>y)
			T=y;
			else 
			T=Q;
    		
    	}
    	
    	printf("%d", T);
    	printf(" Tane karsit hidrojen urettiniz");
    }
  if (labmat[i][j]=='K')
 {
  printf("KAYBETTINIZ !!! ");
  sleep(20);
  }
}
	 

