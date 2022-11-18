// Object: SyncedVec3EntityData
// ClassId: 3545
// RuntimeId: 5683
// TypeInfo: 0x0000000144EA5110
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Network/SyncedFloatPrecision.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Network {
    class SyncedVec3EntityData : public Entity::EntityData {
        Network::SyncedFloatPrecision Precision; // 0x20
        Float32 Scale; // 0x24
        Boolean Interpolate; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(SyncedVec3EntityData) == 0x30);
}
#pragma pack(pop)