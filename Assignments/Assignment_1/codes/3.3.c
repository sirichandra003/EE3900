#include <stdio.h>
int main(){

float x[6]={1.0,2.0,3.0,4.0,2.0,1.0};
int k=20;
float y[20];
for(int i=0;i<20;i++)
{
    y[i]=0;
}
y[0]=x[0];
y[1]= -0.5*y[0]+x[1];
for(int n=2;n<k;n++){
    if(n<6)
    y[n] = -0.5*y[n-1]+x[n]+x[n-2];
    else if(n>5 && n<8)
    y[n] = -0.5*y[n-1]+x[n-2];
    else
    y[n] = -0.5*y[n-1];
}
    FILE *x_val;
    FILE *y_val;
    x_val = fopen("3.3x.txt","w");
    y_val = fopen("3.3y.txt","w");
    for(int i=0; i<6; i++)
    {
        fprintf(x_val,"%f ", x[i]);
    }
    for(int i=0; i<20; i++)
    {
        fprintf(y_val,"%f ", y[i]);
    }
    fclose(x_val);
    fclose(y_val);
return 0;
}
