#include <stdio.h>

int main() {
    int hourly_wage = 1000;
    int hours_per_day = 8;
    int working_days = 20;
    int daily_transport = 600;
    double tax_rate = 0.10;

    int salary = hourly_wage * hours_per_day * working_days;

    int transport_cost = daily_transport * working_days;

    double tax = salary * tax_rate;

    double net_income = salary - tax - transport_cost;

    printf("手取り収入は: %.0f 円です\n", net_income);

    return 0;
}
