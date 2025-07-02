int numWaterBottles(int nb, int ne) {
    return nb + (nb-1) / (ne-1);
}
/*
int numWaterBottles(int numBottles, int numExchange) {
    int nb = numBottles, ne = numExchange;
    // bc = bottle count
    int bc = 0;
    while(ne <= nb)
    {
        bc = bc + ne;
        nb = nb - ne +1;
    }
    return bc + nb;
}
*/