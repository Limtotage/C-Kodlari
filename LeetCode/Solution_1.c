char* mergeAlternately(char* word1, char* word2) {
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int maxLen = len1 + len2;
    char* output = (char*)malloc((maxLen + 1) * sizeof(char)); // Çıktı için yeterli bellek ayır

    int j = 0, k = 0, i = 0;

    for (i = 0; i < maxLen; i++) {
        if (i % 2 == 0) {
            if (j < len1) {
                output[i] = word1[j];
                j++;
            } else {
                output[i] = word2[k];
                k++;
            }
        } else {
            if (k < len2) {
                output[i] = word2[k];
                k++;
            } else {
                output[i] = word1[j];
                j++;
            }
        }
    }
    output[maxLen] = '\0'; // Sonlandırıcı karakter ekle
    return output; // Dinamik bellekle oluşturulan çıktı döndür
}
