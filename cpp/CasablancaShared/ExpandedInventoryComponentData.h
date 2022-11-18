// Object: ExpandedInventoryComponentData
// ClassId: 1777
// RuntimeId: 19346
// TypeInfo: 0x0000000144D01AA0
#include "../Entity/GameComponentData.h"
#include "../CasablancaShared/DakarBackpackDefinition.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class ExpandedInventoryComponentData : public Entity::GameComponentData {
        CasablancaShared::DakarBackpackDefinition BackpackTierDefinition; // 0x80
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(ExpandedInventoryComponentData) == 0x90);
}
#pragma pack(pop)