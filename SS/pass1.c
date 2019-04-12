#include<stdio.h>
#include<string.h>
void main()
{
FILE *file1,*file2,*file3,*file4;
int lc,sa,l,op1,o,len;
char m1[20],la[20],op[20],otp[20];
//clrscr();
file1=fopen("input.txt","r");
file3=fopen("symtab.txt","w");
fscanf(file1,"%s %s %d",la,m1,&op1);
if(strcmp(m1,"START")==0)
{
 sa=op1;
 lc=sa;
 printf("\t%s\t%s\t%d\n",la,m1,op1);
 }
 else
 lc=0;
fscanf(file1,"%s %s",la,m1);
while(!feof(file1))
{
 fscanf(file1,"%s",op);
 printf("\n%d\t%s\t%s\t%s\n",lc,la,m1,op);
 if(strcmp(la,"-")!=0)
 {
 fprintf(file3,"\n%d\t%s\n",lc,la);
 }
 file2=fopen("optab.txt","r");
 fscanf(file2,"%s %d",otp,&o);
 while(!feof(file2))
 {
  if(strcmp(m1,otp)==0)
  {
    lc=lc+3;
    break;
  }
  fscanf(file2,"%s %d",otp,&o);
  }
  fclose(file2);
  if(strcmp(m1,"WORD")==0)
 
    {
   lc=lc+3;
   }
   else if(strcmp(m1,"RESW")==0)
   {
    op1=atoi(op);
    lc=lc+(3*op1);
    }
    else if(strcmp(m1,"BYTE")==0)
    {
    if(op[0]=='X')
      lc=lc+1;
      else
      {
      len=strlen(op)-2;
      lc=lc+len;}
    }
    else if(strcmp(m1,"RESB")==0)
    {
     op1=atoi(op);
     lc=lc+op1;
     }
    fscanf(file1,"%s%s",la,m1);
    }
    if(strcmp(m1,"END")==0)
    {
    printf("Program length =\n%d",lc-sa);
    }
    fclose(file1);
    fclose(file3);
    }