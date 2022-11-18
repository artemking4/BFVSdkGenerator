// Object: PathfindingSystemEntityData
// ClassId: 2937
// RuntimeId: 6215
// TypeInfo: 0x0000000144EAC300
#include "../Entity/EntityData.h"
#include "../Global/Uint32.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace PathfindingShared {
    class PathfindingSystemEntityData : public Entity::EntityData {
        Array<Uint32> PathfindingTypesOnLevel; // 0x20
        Core::Realm Realm; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(PathfindingSystemEntityData) == 0x30);
}
#pragma pack(pop)