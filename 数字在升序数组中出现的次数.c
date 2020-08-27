/**
 * 
 * @param data int����һά���� 
 * @param dataLen int data���鳤��
 * @param k int���� 
 * @return int����
 */
int GetNumberOfK(int* data, int dataLen, int k ) {
   int index=0;
   int start=0;
   int end=dataLen-1;
   int find=0;
   while(start<=end)
   {
      index=(start+end)/2;
      if(data[index]==k)
      {
          find=1;
          break;
      }
      if(data[index]>k)
      {
           end=index-1;
      }
       else
       {
           start=index+1;
       }
   }
   
    if(!find)
    {
        return 0;
    }
     int num=1;
    int ind=index+1;
   
    while(data[index-1]==k)
    {
        
        index--;
        num++;
    }
    while(data[ind]==k)
    {
        ind++;
        num++;
    }
     return num;
}
