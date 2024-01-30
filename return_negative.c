//26 Januari 2024
//https://www.codewars.com/kata/55685cd7ad70877c23000102

int makeNegative(int num){
    int negative;
    if (num > 0)
    {
        negative = num * -1;
        return negative;
    }else if (num <= 0)
    {
        negative = num;
        return negative;
    }
}
//Bisa juga make -num