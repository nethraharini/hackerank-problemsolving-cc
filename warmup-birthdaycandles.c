int birthdayCakeCandles(int candles_count, int* candles) {
    int max_height = 0;
    int count = 0;

    // Find the tallest candle height
    for (int i = 0; i < candles_count; i++) {
        if (candles[i] > max_height) {
            max_height = candles[i];
            count = 1;  // Reset count to 1 for the new tallest candle
        } else if (candles[i] == max_height) {
            count++;  // Increment count if this candle matches the tallest height
        }
    }

    return count;  // Return the number of tallest candles
}

// intput
// 4 
  // 3 2 1 2
// output
// 2
