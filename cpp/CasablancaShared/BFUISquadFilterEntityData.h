// Object: BFUISquadFilterEntityData
// ClassId: 2404
// RuntimeId: 5334
// TypeInfo: 0x0000000144D41ED0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUISquadList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISquadFilterEntityData : public Entity::EntityData {
        CasablancaShared::BFUISquadList SquadList; // 0x20
        Boolean ExcludeNoSquad; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(BFUISquadFilterEntityData) == 0x30);
}
#pragma pack(pop)