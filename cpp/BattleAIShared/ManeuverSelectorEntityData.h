// Object: ManeuverSelectorEntityData
// ClassId: 2656
// RuntimeId: 30147
// TypeInfo: 0x0000000144C181B0
#include "../BattleAIShared/DogFightManeuverEntityBaseData.h"
#include "../BattleAIShared/SelectorType.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class ManeuverSelectorEntityData : public BattleAIShared::DogFightManeuverEntityBaseData {
        BattleAIShared::SelectorType SelectorType; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(ManeuverSelectorEntityData) == 0x38);
}
#pragma pack(pop)