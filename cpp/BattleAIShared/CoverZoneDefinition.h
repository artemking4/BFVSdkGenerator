// Object: CoverZoneDefinition
// ClassId: 233
// RuntimeId: 18268
// TypeInfo: 0x0000000144C073E0
#include "../Core/Asset.h"
#include "../BattleAIShared/CoverZone.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class CoverZoneDefinition : public Core::Asset {
        Array<BattleAIShared::CoverZone> Zones; // 0x20
    }; // 0x28
    static_assert(sizeof(CoverZoneDefinition) == 0x28);
}
#pragma pack(pop)