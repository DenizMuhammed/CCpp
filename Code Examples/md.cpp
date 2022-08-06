
void printfBinChar(char x)
{
 int maske[8]={128,64,34,16,8,4,2,1};
for(int i=0;i<8;i++)
 {
  printf("%d",1&&(x&maske[i]));
 }	
}


