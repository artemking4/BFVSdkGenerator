// Object: InvestigateSettingsOverrideData
// ClassId: 2814
// RuntimeId: 10537
// TypeInfo: 0x0000000144C18DB0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/InvestigateOverrideType.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class InvestigateSettingsOverrideData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        BattleAIShared::InvestigateOverrideType InvestigateType; // 0x24
        Float32 MinDistFromInvestigatePos; // 0x28
        Float32 MaxDistFromInvestigatePos; // 0x2C
        Float32 SecondaryInspectMinDist; // 0x30
        Float32 SecondaryInspectMaxDist; // 0x34
        Boolean ApplyFromStart; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(InvestigateSettingsOverrideData) == 0x40);
}
#pragma pack(pop)