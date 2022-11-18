// Object: CreateDistanceManeuverEntityData
// ClassId: 2651
// RuntimeId: 53344
// TypeInfo: 0x0000000144C190B0
#include "../BattleAIShared/DogFightManeuverEntityBaseData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class CreateDistanceManeuverEntityData : public BattleAIShared::DogFightManeuverEntityBaseData {
        Float32 Distance; // 0x30
        Float32 MinDistanceToBreakOut; // 0x34
        Float32 MinAltitude; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(CreateDistanceManeuverEntityData) == 0x40);
}
#pragma pack(pop)