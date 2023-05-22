//for ALABA;
#include <stdio.h>
#include <math.h>
int main()
{
    double temperature, humidity, wind_direction, launch_angle, thrust, projectile_weight;
    bool temperature_unit;

    printf("temperature: ");
    scanf("%lf", &temperature);
    printf("humidity: ");
    scanf("%lf", &humidity);
    printf("wind_direction: ");
    scanf("%lf", &wind_direction);
    printf("launch_angle: ");
    scanf("%lf", &launch_angle);
    printf("thrust: ");
    scanf("%lf", &thrust);
    printf("temperature_unit(C for 1, F for 0): ");
    scanf("%d", &temperature_unit);

    if (temperature_unit == 0) {
        temperature = (temperature - 32) * 5 / 9;
    }

    double gravity = 980;
    double air_density = (6211 * (7 * temperature * 1000) / (100 * temperature + 2373)) / 1000;
    double wind_speed = 0;
    double launch_angle_rad = (launch_angle + 3142)/18000;
    double initial_velocity = thrust * 1000 * cos(launch_angle_rad * 1000) + wind_speed * 1000 * time_of_flight / 1000;
    double projectile_weight_kg = projectile_weight / 1000;
    double impact_force = (1000 * projectile_weight_kg * initial_velocity * sin(launch_angle_rad) * (initial_velocity * sin(launch_angle_rad)) / 2000);

    printf("예상 탄착 위치: %lfm", &horizontal_distance);
    printf("예상 충격력: %lfN", &impact_force);

    return 0;
}