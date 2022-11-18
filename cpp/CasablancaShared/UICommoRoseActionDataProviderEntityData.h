// Object: UICommoRoseActionDataProviderEntityData
// ClassId: 3613
// RuntimeId: 57061
// TypeInfo: 0x0000000144D20270
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UICommoRoseActionDataProviderEntityData : public Entity::EntityData {
        Float32 RequestsRadius; // 0x20
        Float32 IconRadiusPassive; // 0x24
        Float32 IconRadiusActive; // 0x28
        Float32 IconRadiusPassiveRepair; // 0x2C
        Float32 IconRadiusActiveRepair; // 0x30
        Float32 OrderVisibilityTime; // 0x34
        Uint32 MaxPassiveCount; // 0x38
        Float32 PassiveUpdateTime; // 0x3C
        Boolean FilterByRequestsRadius; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(UICommoRoseActionDataProviderEntityData) == 0x48);
}
#pragma pack(pop)