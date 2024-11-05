void staircase(int n) {
    for (int i = 1; i <= n; i++) {  // Outer loop for rows
        // Print spaces
        for (int j = n; j >i; j--) {  // Loop for spaces
            printf(" ");
        }
        // Print # symbols
        for (int k = 0; k < i; k++) {  // Loop for hashes
            printf("#");
        }
        // Move to the next line
        printf("\n");
    }
}
 
      

//output
   //  #
   // ##
   //###
  //####
 //#####
//######
