#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void main(int argc ,char*argv[]){
if(argv[1]=='\0' || argv[2] != '\0'){
 printf("Error: Wrong number of arguments. One required.\n");
} else if(atoi(argv[1])/2 == atof(argv[1])/2 || atoi(argv[1]) != atof(argv[1]) ){
 printf("Error: Bad argument. Height must be positive odd integer.\n"); 
}else{
 int a = atoi(argv[1])/2 ;
 
 for(int i =0 ; i<a+1 ;i++){
  for(int j=0 ; j<a-i ;j++){
   printf(" ");
  }
 
  for(int k =0 ; k<2*i+1 ;k++){
   printf("*");
  }

  for(int l=0;l<a-i ;l++){
   printf(" ");
  }

 printf("\n");
 }

 for(int i =0 ; i<a ;i++){
  for(int j=0;j<i+1;j++){
   printf(" ");
} 
  for(int k=0;k<atoi(argv[1])-2-2*i ;k++){
  printf("*");
}
  for(int l=0 ; l<i+1;l++){
  printf(" ");

}
  printf("\n");
}
}



}
