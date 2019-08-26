 #include<stdio.h>
#include<string.h>
void main()
{
//char a[100][100],c[100][100],d[100][100],e[100][100],f[100][100];
char g[100],t[100];
int c1,d1,a1,b1,e1,f1,i,j=0,k;
char a[100][100]={"Design","Formulate","Build","Invent","Create","Compose","Generate","Derive","Modify","Develop"};
char b[100][100]={"Choose","Support","Relate","Determine","Defend","Judge","Grade","Compare","Contrast","Argue","Justify","Support","Convince","Select","Evaluate"};
char c[100][100]={"Classify","Break down","Categorize","Analyze","Diagram","Illustatre","Criticize","Simplify","Associate"};
char d[100][100]={"Calculate","Predict","Apply","Solve","Use","Demonstrate","Model","Perform","Present"};
char e[100][100]={"Describe","Explain","Paraphrase","Restate","Give","Original","Examples of","Summarize","Contrast","Discuss","Interpret"};
char f[100][100]={"List","Recite","Outline","Define","Name","Match","Quote","Recall","Identify","Label","Recognize"};
scanf("%[^\n]",g);
for(i=0;g[i]!='\0';i++)
{
if(g[i]!=' ')
{
t[j]=g[i];
j++;
}
if(g[i]==' ')
break;
}
for(k=0;k<15;k++)
{
for(i=0;i<10;i++)
{
if(strcmp(t,a[k])==0)
printf("create");
break;
}
}
for(k=0;k<15;k++)
{
for(i=0;i<10;i++)
{
if(strcmp(t,b[k])==0)
printf("Evaluate");
break;
}
}
for(k=0;k<15;k++)
{
for(i=0;i<10;i++)
{
if(strcmp(t,c[k])==0)
printf("Analyse");
break;
}
}
for(k=0;k<15;k++)
{
for(i=0;i<15;i++)
{
if(strcmp(t,d[k])==0)
printf("Apply");
break;
}
}
for(k=0;k<15;k++)
{
for(i=0;i<10;i++)
{
if(strcmp(t,e[k])==0)
printf("Understand");
break;
}
}
for(k=0;k<15;k++)
{
for(i=0;i<10;i++)
{
if(strcmp(t,f[k])==0)
printf("Remember");
break;
}
}
}

