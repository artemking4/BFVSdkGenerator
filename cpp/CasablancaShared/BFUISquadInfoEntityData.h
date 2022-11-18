// Object: BFUISquadInfoEntityData
// ClassId: 2405
// RuntimeId: 49729
// TypeInfo: 0x0000000144D41FD0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUISquadObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISquadInfoEntityData : public Entity::EntityData {
        CasablancaShared::BFUISquadObject Squad; // 0x20
        Boolean UpdateAutomatically; // 0x28
        Boolean CountPlayersInManDown; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(BFUISquadInfoEntityData) == 0x30);
}
#pragma pack(pop)