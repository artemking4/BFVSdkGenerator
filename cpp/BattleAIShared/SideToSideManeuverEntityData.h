// Object: SideToSideManeuverEntityData
// ClassId: 2659
// RuntimeId: 12571
// TypeInfo: 0x0000000144C18730
#include "../BattleAIShared/DogFightManeuverEntityBaseData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class SideToSideManeuverEntityData : public BattleAIShared::DogFightManeuverEntityBaseData {
        Float32 Duration; // 0x30
        Float32 OscillationFrequency; // 0x34
    }; // 0x38
    static_assert(sizeof(SideToSideManeuverEntityData) == 0x38);
}
#pragma pack(pop)