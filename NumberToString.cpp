//Convert 0-9 int number to Char
char nustringA(int number){
int *ip;
char word,*cp;
cp=&word;
if(number>-1&&number<10){
number+=48;
ip=(int*)cp;
*ip=number;
return word;
}
}
//Convert any unsigned int to a string
void nustringB(int number,char* char_array){
if(number){
int amount,level=log10(number);
double new_number,old_number;
amount=level+1;
old_number=(double)number/pow(10,level);
for(int i=0;i<amount;++i){
new_number=trunc(old_number);
char_array[i]=nustringA((int)new_number);
old_number-=new_number;
old_number*=10;
}
}else{
*char_array='0';
}
}
