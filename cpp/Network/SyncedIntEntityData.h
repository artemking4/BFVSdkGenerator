// Object: SyncedIntEntityData
// ClassId: 3540
// RuntimeId: 8337
// TypeInfo: 0x0000000144EA5210
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Network {
    class SyncedIntEntityData : public Entity::EntityData {
        Int32 Min; // 0x20
        Int32 Max; // 0x24
    }; // 0x28
    static_assert(sizeof(SyncedIntEntityData) == 0x28);
}
#pragma pack(pop)