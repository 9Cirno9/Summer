 * 
 * @param numbers int整型一维数组 
 * @param numbersLen int numbers数组长度
 * @return int整型
 */
int MoreThanHalfNum_Solution(int* numbers, int numbersLen ) {
    int i,a[100000]={0},k=1;
    for(i=0;i<numbersLen;i++)
    {
        a[numbers[i]]++;
        if(a[numbers[i]]>numbersLen/2)
        {
            k=0;
            return numbers[i];
            break;
        }
    }
    if(k)
            return 0;
    // write code here
}
