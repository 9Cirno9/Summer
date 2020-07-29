#include <stdio.h>
void main(){
    int m,n;
    scanf("%d %d",&n,&m);
        int list[n];
        int i;
        for(i=0;i<n;i++){
            scanf("%d",&list[i]);
        }
        if(n<=m){
            for(i=0;i<n;i++){
                printf("%d",list[i]);
                if(i!=n-1){
                    printf(" ");
                }
                
            }
        }else{
            int start =0;
            while(start<=n-1){
                start+=m;
            }
            start-=m;
            while(start>=0){
                int temp = start;
                int count =0;
                while(count<m&&temp<n){
                    printf("%d",list[temp]);
                    count++;
                    temp++;
                    printf(" ");
                }
                start-=m;
            }
        }
        printf("\n");
}
