/* Name: NAKANWAGI MARIAM */
/* 2500801403: 25/U/BIE/01403/PE */

#include <stdio.h>

int main(void)
{
    float distance_travelled;
    float fuel_used;
    float fuel_efficiency;

    printf("Enter distance travelled (in kilometers): ");
    scanf("%f", &distance_travelled);

    printf("Enter fuel used (in litres): ");
    scanf("%f", &fuel_used);  // Fixed: changed % to &

    
    fuel_efficiency = distance_travelled / fuel_used;

    printf("FUEL EFFICIENCY: %.2f km/l", fuel_efficiency);
    
    return 0;
}  // 