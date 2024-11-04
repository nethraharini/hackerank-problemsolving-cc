void plusMinus(int arr_count, int* arr) {
     int positive_count =0;
     int negative_count =0;
     int zero_count =0;
     for(int i=0;i<arr_count;i++){
         if(arr[i]>0){
             positive_count++;
         }
         else if(arr[i]<0){
             negative_count++;
         } 
         else{
             zero_count++;
         }
         
     }

 double positive_ratio = (double)positive_count/arr_count;
 double negative_ratio = (double)negative_count/arr_count;
 double zero_ratio = (double)zero_count/arr_count;

 printf("%.6f\n%.6f\n%.6f\n",positive_ratio,negative_ratio,zero_ratio);
}

//input
//6
//-4 3 -9 0 4 1
//Output (stdout)
//0.500000
//0.333333
//0.166667
