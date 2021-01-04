#include <stdio.h>
#define LINE 256
#define WORD 30
int getLine(char s[LINE]){
char ch=' ';
int c=0;
int i;
for(i=0;i<LINE;i++)
s[i]='\n';
while(ch!='\n'){
if(scanf("%c",&ch)==EOF)
return -1;
s[c]=ch;
c++;
}
c--;
return c;
}
int getword(char w[WORD]){
char ch='c';
int c=0;
int i;
for(i=0;i<WORD;i++)
w[i]='\n';
while(1){
if(scanf("%c",&ch)==EOF)
return -1;
if(ch=='\t'||ch==' '||ch=='\n'||ch=='\r'){
break;
}
w[c]=ch;
c++;
}
return 	c;
}

int substring( char * str1, char * str2){
int c=0;
int i=0;
while(1){
if(*(str2+c)=='\t'||*(str2+c)=='\n'||*(str2+c)==' ')
return 1;
if(*(str1+i)=='\t'||*(str1+i)=='\n'||*(str1+i)==' ')
break;
if(*(str1+i)==*(str2+c)){
c++;
i++;
}
else{
c=0;
if(*(str1+i)==*(str2+c)){
c++;
}
i++;
}
}
return 0;
}

int similar (char *s, char *t, int n){
int i,j,c;
i=j=c=0;
while((s[i]!=' ')&&(s[i]!='\n')&&(s[i]!='\t'))
i++;
while((t[j]!=' ')&&(t[j]!='\n')&&(t[j]!='\t'))
j++;
if(j>i)
return 0;
int j2,i2;
i2=j2=0;
while(j2<j){
if(i2==i)
return 0;
if(t[j2]==s[i2]){
j2++;
i2++;
}
else{
i2++;
c++;

}
}

if(c+i-i2<=n)
return 1;
else{
return 0;
}
}
void print_lines(char * str){
char s[LINE];
int c,i,temp;
c=temp=i=0;
while(c!=-1){
c=getLine(s);
temp=i=0;
while(temp!=1&&c!=-1)
{
temp=substring((s+i),str);
i++;
if(s[i]=='\n'||s[i]=='\r')
break;
}
if(temp)
{ 
for(i=0;i<c+1;i++){
if(s[i]!='\n'&&s[i]!='\r')
printf("%c",s[i]);
}
printf("\n");
}

}
}
void print_similar_words(char * str){
char w[WORD];
int c=0;
while(c!=-1)
{
c=getword(w);
if(c!=-1&&similar(w,str,1)==1){
int i;
for(i=0;i<c;i++)
printf("%c",w[i]);
printf("\n");
}

}

}
int main(){
char str[WORD]={'\n'};
char ch='c';
int i=0;
while(ch!=' '&&ch!='\n'&&ch!='\t'){
scanf("%c",&ch);
str[i++]=ch;
}
while((ch!='a')&&(ch!='b')){
scanf("%c",&ch);
}
if(ch=='a'){
print_lines(str);
}
else{
print_similar_words(str);
}
return 0;

}















