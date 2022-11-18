// Object: BFSpectatorSelectedPlayerNotifierEntityData
// ClassId: 2142
// RuntimeId: 21597
// TypeInfo: 0x0000000144D43150
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFSpectatorSelectedPlayerNotifierEntityData : public Entity::EntityData {
        CasablancaShared::BFUIPlayerObject SelectedPlayer; // 0x20
    }; // 0x28
    static_assert(sizeof(BFSpectatorSelectedPlayerNotifierEntityData) == 0x28);
}
#pragma pack(pop)