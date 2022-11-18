// Object: CoverZones
// ClassId: 234
// RuntimeId: 19006
// TypeInfo: 0x0000000144C061E0
#include "../Core/Asset.h"
#include "../BattleAIShared/CoverZoneDefinition.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class CoverZones : public Core::Asset {
        BattleAIShared::CoverZoneDefinition CoverZonesOverAndOut; // 0x20
        BattleAIShared::CoverZoneDefinition CoverZonesOver; // 0x28
        BattleAIShared::CoverZoneDefinition CoverZonesOut; // 0x30
        BattleAIShared::CoverZoneDefinition CoverZonesOpen; // 0x38
        BattleAIShared::CoverZoneDefinition CoverZonesOpenDirectional; // 0x40
    }; // 0x48
    static_assert(sizeof(CoverZones) == 0x48);
}
#pragma pack(pop)