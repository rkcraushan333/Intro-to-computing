#include <stdio.h>

int main()
{

    double km, m, cm, inch;

    printf("Entert the value of distanace in kilometer:\n");
    scanf("%lf",&km);
    
    m = km *1000;
    cm = m *100;
    inch = cm * 0.39; 
    printf("Meter = %.2lf\n Centimeter = %.2lf\n inches = %.2lf", m, cm , inch);
    

    return 0;
}