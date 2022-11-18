// Object: UILevelTransitionGateEntityData
// ClassId: 3725
// RuntimeId: 33950
// TypeInfo: 0x0000000144D20570
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UILevelTransitionGateEntityData : public Entity::EntityData {
        Boolean AllowTransition; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(UILevelTransitionGateEntityData) == 0x28);
}
#pragma pack(pop)