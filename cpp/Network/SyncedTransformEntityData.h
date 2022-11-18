// Object: SyncedTransformEntityData
// ClassId: 3544
// RuntimeId: 65412
// TypeInfo: 0x0000000144EA5190
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Network {
    class SyncedTransformEntityData : public Entity::EntityData {
        Boolean Interpolate; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(SyncedTransformEntityData) == 0x28);
}
#pragma pack(pop)