#include <stdio.h>
void PrintArray(int array[], int size)
{
  for(int index = 0; index < size; index++)
  {
    printf("%d \t",array[index]);
  }
}
int IsPresent(int array[], int OriginalSize, int UGV)
{
  PrintArray(array,OriginalSize);
  printf(" \n ");
  int NewSize = 0;
  int tempSize = 0;
  if(OriginalSize % 2 == 0)
  {
    NewSize = OriginalSize / 2 ;
    tempSize = NewSize;
  }
  else
  {
    NewSize = (OriginalSize + 1) / 2;
    tempSize = NewSize - 1;
  }
  printf("Original Size : %d new size %d mid value %d\n",OriginalSize, NewSize,array[NewSize - 1] );
  // Divider
  int NewArray[tempSize];
  int NewArraySize;
  int NewIndex = 0 ;
  if(NewSize == 1 && array[NewSize - 1] != UGV)
  {
    return 0;
  }
  if(array[NewSize - 1] == UGV)
  {
    printf("match found. size = %d \n",NewSize);
    return 1;
  }
  else if(array[NewSize - 1] < UGV)
  {
    printf("value on the right. size = %d \n",NewSize);
    for(int changer = NewSize; changer <= OriginalSize - 1; changer++)
    {
      NewArray[NewIndex] = array[changer];
      printf("%d %d %d %d \n", NewSize, changer, array[changer], OriginalSize - 1);
      NewIndex++;
    }
    NewArraySize = sizeof(NewArray) / sizeof(NewArray[0]);
    printf("New Array : ");
    PrintArray(NewArray,NewArraySize);
    printf("\n");
    return IsPresent(NewArray, NewArraySize, UGV);
  }
  else if(array[NewSize - 1] > UGV)
  {
    printf("value on the left. size = %d \n",NewSize);
    for(int changer = 0; changer < NewSize - 1; changer++)
    {
      NewArray[NewIndex] = array[changer];
      NewIndex++;
    }
    NewArraySize = sizeof(NewArray) / sizeof(NewArray[0]);
    return IsPresent(NewArray, NewArraySize, UGV);
  }
  else
  {
    printf("reached an e \n");
    return 0;
  }
}
int main()
{
  int Array[] = {1,3,5,6,9,10};
  int size = sizeof(Array) / sizeof(Array [0]);
  int UGV = 10; // UGV --> User Given Value
  printf(" %d \n",IsPresent(Array, size, UGV));
}
