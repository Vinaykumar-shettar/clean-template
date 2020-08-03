#include "vehicletelematics.h"
#include <gtest/gtest.h>

TEST(vehicle_testtelematics, motor_temp) {
struct telemetics  vehicle_telematics= { 231, motor_temp, 30}
ASSERT_EQ(true ,updateVehicleInfo(vehicle_telematics)); 

structure inventory vehicleinfo = getVehicleInfo(vehicle_telematics.vehicle_id));
     ASSERT_EQ(vehicleinfo.vehicle_id, telematics.vehicle_id);
     ASSERT_NEAR(30, telematics.motor_temp,0.001);  
}

 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
