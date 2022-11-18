// Object: SyncedFloatEntityData
// ClassId: 3539
// RuntimeId: 34028
// TypeInfo: 0x0000000144EA5310
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../Network/SyncedFloatPrecision.h"

#pragma pack(push, 8)
namespace Network {
    class SyncedFloatEntityData : public Entity::EntityData {
        Float32 Max; // 0x20
        Network::SyncedFloatPrecision Precision; // 0x24
    }; // 0x28
    static_assert(sizeof(SyncedFloatEntityData) == 0x28);
}
#pragma pack(pop)