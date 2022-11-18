// Object: RadarSweepComponentData
// ClassId: 1825
// RuntimeId: 6302
// TypeInfo: 0x0000000144C7E580
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Guid.h"

#pragma pack(push, 16)
namespace Casablanca {
    class RadarSweepComponentData : public Entity::GameComponentData {
        Float32 ControllableSweepRadius; // 0x80
        Float32 ControllableSweepInterval; // 0x84
        Float32 ControllableSpeedThreshold; // 0x88
        Float32 MineSweepRadius; // 0x8C
        Float32 MineSweepInterval; // 0x90
        Float32 Duration; // 0x94
        Guid SpottingGadgetUnlockGuid; // 0x98
        Boolean SweepForControllables; // 0xA8
        Boolean ExcludeSoldiers; // 0xA9
        Boolean ExcludeVehicles; // 0xAA
        Boolean ExcludeNonAircraftVehicles; // 0xAB
        Boolean SweepForMines; // 0xAC
        Boolean UseTriggerEvent; // 0xAD
        Boolean UseDynamicRadius; // 0xAE
        char pad_0xAF[0x1];
    }; // 0xB0
    static_assert(sizeof(RadarSweepComponentData) == 0xB0);
}
#pragma pack(pop)