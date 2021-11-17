#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 int t[20];
      int n ;
      void romplissage (){
      	int i ;
      	for(i=0;i<n;i++){
      	printf("donner le nombre numéro %d",i+1);
      	scanf("%d",&t[i]);
		 }
	  }
	   int tri(){
	   	int i , fn ,ex;
	   	do{
	   		 romplissage ( n);
	  	     ex=0 ;
	  		for(i=0;i<n-1;i++){
	  			if(t[i]>t[i+1]){
	  				//PERMUTATION
	  				fn=t[i] ;
	  		    	t[i]=t[i+1];
	  				t[i+1]= fn ;
	  				ex++ ;
	  			}
			 }
	  	   }while(ex>0); 
	  	   return ex ;
	  }
	  int main(int argc, char *argv[]) {
	  
	  	void romplissage ();
	  		printf("donner la taille de tableaux");
	  	scanf("%d",&n);
      printf ("le tri de table et");
      int tri();
   }
  
