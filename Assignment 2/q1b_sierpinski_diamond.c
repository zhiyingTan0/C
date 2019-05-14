#include <stdio.h>
#include<stdlib.h>
#include<math.h>

//checking the input level
//and do the pow stuff
int check(int level){
int a = 1 ;
for(int i=0;i<level-1 ;i++){
 a=2*a;
}
return a;
}
//building the diamond
//where b is the height of small triangle
void build(int H ,int b, int level,char diamond[H][H]){
int newh=H/2 ;
for(int i=0 ;i<b ;i++){
  for(int j=0 ;j<H ;j++){
   if(j<newh-i ||j>newh+i){
   diamond[i][j]=' ';
}else{
 diamond[i][j]='*';
}
}
}
//the height of each level =b*2^(n-1)
for(int l=1 ;l<level ;l++){
//here s  tell ue the height of all the previous level
int s =check(l); 
for(int i=s*b ; i<2*s*b; i++){
  for(int j=0 ;j<newh;j++){
  diamond[i][j] = diamond[i-s*b][j+s*b];
 }
  for(int j= newh; j<H;j++){
 diamond[i][j] = diamond[i-s*b][j-s*b];

}
}
}
}

void secondhalf(int H ,char diamond[H][H]){
 int h = H/2; 
for(int i = 1 ;i < h+1 ;i++){
 for(int j=0 ; j<H ;j++){
  diamond[h+i][j] = diamond[h-i][j];
}
}
}



int main(int argc ,char*argv[]){
if(argv[1]=='\0' ||argv[2] =='\0' || argv[3] !='\0'){
printf("Error: Wrong number of arguments. Two required.\n");
}else if(atoi(argv[1])/2 == atof(argv[1])/2 || atoi(argv[1]) !=atof(argv[1])){
printf("Error: Bad argument. Height must be positive odd integer.\n");
}else{
int H = atoi(argv[1]);
int l =atoi(argv[2]);
//the height of upper triangle
int h =(H+1)/2 ;
int c =check(l);
if(h<c){
printf("Error: height does not allow evenly dividing requested number of levels.\n");
}else{
//create the  integer b to represent the height of small triangle
int b =1;
for(int i =0 ; i<h ;i++){
 if(b * c <h){
  b= b+1;
}else{
break;}

}

//initialize the diamond with' '
char diamond[H][H] ;
for (int i =0 ; i<H ;i++){
 for(int j =0; j<H ;j++){
  diamond[i][j]=' ';
}
}
//building the upper triangle od the diamond
build(H,b,l,diamond);
//building the second half of the triangle
secondhalf(H , diamond);
for(int i=0; i<H; i++){
 for(int j=0 ; j<H;j++){
  printf("%c", diamond[i][j]);
 }
printf("\n");
}
}

}	

}

