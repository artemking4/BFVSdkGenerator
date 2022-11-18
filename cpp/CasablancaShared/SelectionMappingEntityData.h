// Object: SelectionMappingEntityData
// ClassId: 3153
// RuntimeId: 29140
// TypeInfo: 0x0000000144D11C80
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/SelectionMappingSpawnType.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/SelectionItemGroup.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SelectionMappingEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        CasablancaShared::SelectionMappingSpawnType SpawnType; // 0x24
        Int32 TotalCountSimultaneouslyOfSpawnType; // 0x28
        Int32 TotalCountSimultaneouslyOfSpawnTypeTeam1; // 0x2C
        Int32 TotalCountSimultaneouslyOfSpawnTypeTeam2; // 0x30
        char pad_0x34[0x4];
        Array<CasablancaShared::SelectionItemGroup> SelectionItemGroups; // 0x38
        Int32 Variation; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(SelectionMappingEntityData) == 0x48);
}
#pragma pack(pop)