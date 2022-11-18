// Object: VehicleEntryComponentData
// ClassId: 1774
// RuntimeId: 50772
// TypeInfo: 0x0000000144E8DEE0
#include "../GameShared/PlayerEntryComponentData.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../GameShared/VehicleSpecialMovesFeature.h"
#include "../Global/Uint32.h"
#include "../Physics/CharacterPoseType.h"
#include "../GameShared/EntryComponentSoundData.h"

#pragma pack(push, 16)
namespace GameShared {
    class VehicleEntryComponentData : public GameShared::PlayerEntryComponentData {
        Int32 NumberOfStances; // 0x160
        char pad_0x164[0x4];
        GameShared::VehicleSpecialMovesFeature SpecialMovesFeature; // 0x168
        Array<Uint32> EnabledSpecialMoveFeatures; // 0x170
        Physics::CharacterPoseType AnimationDistanceCullingPose; // 0x178
        char pad_0x17C[0x4];
        GameShared::EntryComponentSoundData EntryComponentSound; // 0x180
        Int32 DefaultActiveStanceIndex; // 0x188
        Boolean StancesEnabled; // 0x18C
        Boolean UpdateCharacterInVehicleEntry; // 0x18D
        Boolean IsTakedownAllowed; // 0x18E
        Boolean AllowAnimationDistanceCulling; // 0x18F
    }; // 0x190
    static_assert(sizeof(VehicleEntryComponentData) == 0x190);
}
#pragma pack(pop)