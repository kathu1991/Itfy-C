//Take input of age of 3 people by user and determine oldest and youngest among them


    #include<stdio.h>  
      
    int main()  
    {  
        int ram, shyam, ajay;  
      
        printf("Enter the age of Ram, Shyam and Ajay\n");  
        scanf("%d %d %d", &ram,&shyam,&ajay);  
      //check youngest
        if(ram <= shyam && ram <= ajay)  
        {  
            printf("Ram is the youngest and his age is %d\n",ram);  
        }  
      
        if(shyam <= ram && shyam <= ajay)  
        {  
            printf("Shyam is the youngest and his age is %d \n",shyam);  
        }  
      
        if(ajay <= ram && ajay <= shyam)  
        {  
            printf("Ajay is the youngest and his age is %d \n",ajay);  
        }  
      
         //check oldest
        if(ram >= shyam && ram >= ajay)  
        {  
            printf("Ram is the oldest and his age is %d \n",ram);  
        }  
      
        if(shyam >= ram && shyam >= ajay)  
        {  
            printf("Shyam is the oldest and his age is %d\n",shyam);  
        }  
      
        if(ajay >= ram && ajay >= shyam)  
        {  
            printf("Ajay is the oldest and his age is %d\n",ajay);  
        } 
        return 0;  
    }  