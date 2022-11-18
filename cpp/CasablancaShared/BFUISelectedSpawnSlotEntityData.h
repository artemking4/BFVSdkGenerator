// Object: BFUISelectedSpawnSlotEntityData
// ClassId: 2378
// RuntimeId: 29125
// TypeInfo: 0x0000000144D1E9F0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/SelectionMappingSpawnType.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISelectedSpawnSlotEntityData : public Entity::EntityData {
        CasablancaShared::SelectionMappingSpawnType SpawnType; // 0x20
        Int32 Selection; // 0x24
    }; // 0x28
    static_assert(sizeof(BFUISelectedSpawnSlotEntityData) == 0x28);
}
#pragma pack(pop)