/**
 * 
 * @param index int整型 
 * @return int整型
 */
int GetUglyNumber_Solution(int index ) {
    // write code here
    int array[index];
    int i, i2 = 1, i3 = 1, i5 = 1;
    array[0] = 0;
    array[1] = 1;
    int temp2, temp3, temp5;
    int temp;
    for(i = 1; i < index; i++)
    {
        temp2 = 2 * array[i2];
        temp3 = 3 * array[i3];
        temp5 = 5 * array[i5];
        temp = (temp2 < temp3) ? temp2 : temp3;
        temp = (temp < temp5) ? temp : temp5;
        array[i+1] = temp;
        if(temp == temp2) i2++;
        if(temp == temp3) i3++;
        if(temp == temp5) i5++;
    }
    return array[index];
}
