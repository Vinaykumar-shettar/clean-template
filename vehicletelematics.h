typede enum{
MOTOR_TEMP,
BATTREY_PC,
BATTERY_TEMP
}vehicle_param;

typedef struct{
int vehicle_id;
vehicle_param param_id;
float param_val;
}vehicle_info;

tpedef struct
{
int vehicle_id;
float motor_temp;
float battery_pc;
float battery_temp;
}vehicle_telematics;
