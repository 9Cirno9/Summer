int main(){
    long int a=0,b=0,c=0;
    long int n,i;
    long int d[100000];
    scanf("%ld",&n);
    for(i=0;i<n;i++){
        scanf("%ld",&d[i]);
         
    }
    for(i=1;i<n;i++){
        if(d[i]>d[i-1]){
            a=a+d[i]-d[i-1];
            if(c==0){
                b++;
            }
            c=1;
        }
         
         if(d[i]<d[i-1]){
            b=b+c;
            c=0;
        }
 
    }
    b=b+c;
    printf("%ld %ld",a,b);
    return 0;
    
}
