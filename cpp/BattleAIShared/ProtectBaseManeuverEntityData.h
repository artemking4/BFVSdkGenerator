// Object: ProtectBaseManeuverEntityData
// ClassId: 2658
// RuntimeId: 63061
// TypeInfo: 0x0000000144C18FB0
#include "../BattleAIShared/DogFightManeuverEntityBaseData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class ProtectBaseManeuverEntityData : public BattleAIShared::DogFightManeuverEntityBaseData {
        Float32 Radius; // 0x30
        char pad_0x34[0xC];
        Core::Vec3 BasePosition; // 0x40
    }; // 0x50
    static_assert(sizeof(ProtectBaseManeuverEntityData) == 0x50);
}
#pragma pack(pop)