#include <stdio.h>
#include <stdlib.h>

	
	void saisi(int n,float t[]){
		int i ;
	
		for(i=0;i<n;i++){
		printf("donner le nomber %d :",i+1);
		scanf("%f",&t[i]);
		}
	} 
	
	void chercher(float c,int n,float t[]){
		int i ,co ;
		co=0 ;
		for(i=0;i<n;i++){
			if(c==t[i]){
				co=co+1 ;
				break;
			}}
			if(c>0){
				printf("trouvé");
			}
			else{
				printf("non trouvé");
			}
			
	}
	int main() {
		int n;
		float c ;
			printf("donner la taille de tableaux :");
		scanf("%d",&n);
		float t[n];
		saisi(n,t);
			printf("give me the number that you loocking for :");
		scanf("%f",&c);
	     chercher(c,n,t);
    return 0;
}
