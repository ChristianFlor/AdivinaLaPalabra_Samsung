#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[]){
	
	char repetir='S';
	
	while (repetir=='S' or repetir=='s'){
		
	char cadena[255],let[255],fin='N';
	char v[254],a[254];
	int k,ganar=5,error=0,b=0;
	
	printf( "Digite la palabra que quiere adivinar \n" );
	scanf("%s", cadena);
	
	char *p;
	int caracteres = 0;
	p = cadena;
	
	
	while ( *p != '\0' ){
		
		
		*p = tolower(*p);
		v[caracteres] = *p;
		a[caracteres] = '_';
		caracteres++;
		p++;
		
	}
	
	system ("pause");
	system ("cls");
	
	p = cadena;
	
	
	while (fin!='S'){
	
	printf( "\n");
	printf ( "La palabra tiene %i letras. \n", caracteres );
	printf( "\n");
		
	for(int k=0;k<caracteres;++k) { 
	
		cout<<a[k]<<" ";
		
	}
	
	printf( "\n");
	printf( "\n");
	printf( "\n");
	cout<<"Fallos restantes \n"<<ganar<<endl;
	printf( "\n");
	printf( "\n");
	
	printf ( "Digite una letra \n" );
	scanf("%s", let);
	
	system("cls");
	
	error = 0;
	
	for(int k=0;k<caracteres;++k) { 
	
    	if (v[k] == *let){
    		
    		a[k] = v[k];
    		
    		error = error+1;
    		
		} 
		
	}
	
	if (error == 0){
		
		    	ganar = ganar-1;
		
	}
	
	b=0;
	
	for(int k=0;k<caracteres;++k) { 
		
		if (a[k] != '_'){
			
			b = b+1;
			
		} 
		
	}
	
	if (b == caracteres){
		
		fin = 'S';
		
		system("Color 02");
		
		printf( "\n");
		printf( "\n");
		printf ( "Adivinaste la palabra\n" );
		printf( "\n");
		printf( "\n");
		
	} else if (ganar == 0){
		
		fin = 'S';
		
		system("Color 04");
		
		printf( "\n");
		printf ( "La palabra que tenias que adivinar era: " );
		
		for(int k=0;k<caracteres;++k) { 
	
    	cout<<v[k]<<" "; 
		
		}
	
		printf( "\n");
		printf( "\n");
		printf ( "Buen intento sigue intentando \n" );
		printf( "\n");
		printf( "\n");
		
	}
	
			
	}
		
		system ("pause");
		system ("cls");
		system("Color 07");
		
		printf ( "Deseas repetir el juego? responde S o N\n" );
     	scanf("%c", &repetir);
        system ("cls");
     	    
     	while (repetir!='S' and repetir!='s' and repetir!='N' and repetir!='n'){
     	 	
     	 	system("Color 04");
     	 	printf ( "Verifique que responde S o N\n" );
     	 	system ("pause");
		    system ("cls");
		    system("Color 07");
		    
     	 	printf ( "Deseas jugar de nuevo?  responde S o N\n" );
     		scanf("%c", &repetir);
     	 	system ("cls");
     	 	  
	    }
		
	}
	
	
	system("pause");
	system("cls");
	
	system("Color 06");

	return 0;
	
}
