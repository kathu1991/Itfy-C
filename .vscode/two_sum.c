 #include<stdio.h>

int findSum(int arr[],int arrSize,int target){
    int strtIdx;
     int endIdx;
for(int i=0;i<arrSize; i++){
int val=arr[i];
for(int k=i+1 ;k<arrSize;k++){
    int innerVal=arr[k];
    int total=val+innerVal;
    if(total==target){
       strtIdx= i;
       endIdx=k;
printf("start index is  %d\n",strtIdx);
printf("end index is  %d\n",endIdx);
break;
    }


}

}

return 0;
}

 int main(){
    //  int arr[]={1,3,1,3};
    // int size=sizeof (arr)/sizeof (arr[0]);
    // int target=6;

    int size;
     int target;
    int arr[10];
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter %d elements in the array : ", size);
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);
int sum=findSum(arr,size,target);
return 0;
 }