// Object: DriverComponentData
// ClassId: 1758
// RuntimeId: 18979
// TypeInfo: 0x0000000144E80F40
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../GameShared/DriverSettings.h"

#pragma pack(push, 16)
namespace GameShared {
    class DriverComponentData : public Entity::GameComponentData {
        Float32 WantedSpeed; // 0x80
        char pad_0x84[0x4];
        GameShared::DriverSettings Settings; // 0x88
        Boolean WantedSpeedTakesPrecedence; // 0x90
        Boolean InvertSteeringOnReverse; // 0x91
        Boolean ControlVehicle; // 0x92
        char pad_0x93[0xD];
    }; // 0xA0
    static_assert(sizeof(DriverComponentData) == 0xA0);
}
#pragma pack(pop)