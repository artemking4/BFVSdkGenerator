// Object: FlareEntityData
// ClassId: 3323
// RuntimeId: 35501
// TypeInfo: 0x0000000144F435B0
#include "../SoldierShared/GrenadeEntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class FlareEntityData : public SoldierShared::GrenadeEntityData {
        Float32 FlareRange; // 0x1A0
        char pad_0x1A4[0xC];
    }; // 0x1B0
    static_assert(sizeof(FlareEntityData) == 0x1B0);
}
#pragma pack(pop)