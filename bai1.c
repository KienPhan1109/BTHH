#include <stdio.h>

int main(){
    char n[] = "          ", i[] = "-------------------", a[] = "----------";
    printf("|STT|Ho va ten%4s|%0.3sToan|%0.3sVat Ly|%0.3sHoa|%0.3sSinh|%0.3sVan|%0.3sDiem Tb|\n", n, n, n, n, n, n, n);
    printf("|%0.3s|%16s|%0.7s|%0.9s|%0.6s|%0.7s|%0.6s|%1s|\n", i, i, i, i, i, i, i, a);
    printf("|  1|Nguyen Van A%0.7s|%0.4s7.5|%0.6s7.0|%0.3s5.5|%0.4s8.5|%0.3s7.5|%0.7s7.4|\n", n, n, n, n, n, n, n);
    printf("|%0.3s|%16s|%0.7s|%0.9s|%0.6s|%0.7s|%0.6s|%1s|\n", i, i, i, i, i, i, i, a);
    printf("|  2|Nguyen Van B%0.7s|%0.4s7.0|%0.6s8.5|%0.3s9.0|%0.4s5.0|%0.3s6.5|%0.7s7.7|\n", n, n, n, n, n, n, n);
    printf("|%0.3s|%16s|%0.7s|%0.9s|%0.6s|%0.7s|%0.6s|%1s|\n", i, i, i, i, i, i, i, a);
    printf("|  3|Nguyen Van C%0.7s|%0.4s6.5|%0.6s7.2|%0.3s6.5|%0.3s10.0|%0.3s5.5|%0.7s7.2|", n, n, n, n, n, n, n);
}