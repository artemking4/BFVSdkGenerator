// Object: BFUIGetSoldierEntityData
// ClassId: 2244
// RuntimeId: 32921
// TypeInfo: 0x0000000144D43A50
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetSoldierEntityData : public Entity::EntityData {
        CasablancaShared::BFUIPlayerObject Player; // 0x20
        Boolean UpdateAutomatically; // 0x28
        Boolean OutputLocalSoldier; // 0x29
        Boolean TrackCorpses; // 0x2A
        char pad_0x2B[0x5];
    }; // 0x30
    static_assert(sizeof(BFUIGetSoldierEntityData) == 0x30);
}
#pragma pack(pop)