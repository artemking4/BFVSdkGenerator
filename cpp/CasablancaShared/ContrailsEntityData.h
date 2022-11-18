// Object: ContrailsEntityData
// ClassId: 2549
// RuntimeId: 30259
// TypeInfo: 0x0000000144D22570
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ContrailsEntityData : public Entity::EntityData {
        Float32 YawThresh; // 0x20
        Float32 YawScale; // 0x24
        Float32 PitchThresh; // 0x28
        Float32 PitchScale; // 0x2C
        Float32 RollThresh; // 0x30
        Float32 RollScale; // 0x34
        Float32 MinEnabledTime; // 0x38
        Float32 Yaw; // 0x3C
        Float32 Pitch; // 0x40
        Float32 Roll; // 0x44
    }; // 0x48
    static_assert(sizeof(ContrailsEntityData) == 0x48);
}
#pragma pack(pop)