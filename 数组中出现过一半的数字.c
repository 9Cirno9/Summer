 * 
 * @param numbers int����һά���� 
 * @param numbersLen int numbers���鳤��
 * @return int����
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
