// Object: BFUISquadSpawnEntityData
// ClassId: 2407
// RuntimeId: 61161
// TypeInfo: 0x0000000144D41AD0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISquadSpawnEntityData : public Entity::EntityData {
        CasablancaShared::BFUIPlayerObject PlayerToSpawnOn; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUISquadSpawnEntityData) == 0x28);
}
#pragma pack(pop)