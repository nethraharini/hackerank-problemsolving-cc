int* result = malloc(2 * sizeof(int));
    if (result == NULL) {
        *result_count = 0; // Handle allocation failure
        return NULL;
    }

    result[0] = 0; // Points for Alice
    result[1] = 0; // Points for Bob

    // Compare scores
    for (int i = 0; i < a_count; i++) {
        if (a[i] > b[i]) {
            result[0]++; // Alice gets a point
        } else if (a[i] < b[i]) {
            result[1]++; // Bob gets a point
        }
        // If equal, do nothing
    }

    *result_count = 2; // We have two scores to return
    return result; // Return the result array
}

//input
//5 6 7
//3 6 10
//Output (stdout)
//1 1
