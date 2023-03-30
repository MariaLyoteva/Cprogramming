int berechneQuersumme(int zahl) {
    int quersumme = 0;
    while (zahl != 0) {
        quersumme += zahl % 10;
        zahl /= 10;
    }
    return quersumme;
}
