// Object: SpecialBehavior
// ClassId: 4895
// RuntimeId: 63914
// TypeInfo: 0x0000000144C057E0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class SpecialBehavior : public Core::DataContainer {
        Boolean AllowFireWhileTargetIsHidden; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(SpecialBehavior) == 0x20);
}
#pragma pack(pop)