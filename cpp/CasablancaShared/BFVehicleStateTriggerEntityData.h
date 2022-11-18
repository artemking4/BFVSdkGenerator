// Object: BFVehicleStateTriggerEntityData
// ClassId: 3473
// RuntimeId: 19564
// TypeInfo: 0x0000000144D5B3E0
#include "../GameShared/VehicleStateTriggerEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFVehicleStateTriggerEntityData : public GameShared::VehicleStateTriggerEntityData {
        Float32 DamageToGive; // 0xA0
        Boolean ShouldUnspawnExplosionPacks; // 0xA4
        char pad_0xA5[0xB];
    }; // 0xB0
    static_assert(sizeof(BFVehicleStateTriggerEntityData) == 0xB0);
}
#pragma pack(pop)