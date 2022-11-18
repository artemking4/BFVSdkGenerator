// Object: ChildComponentData
// ClassId: 1727
// RuntimeId: 34627
// TypeInfo: 0x0000000144E8DE60
#include "../Entity/BoneComponentData.h"
#include "../Audio/SoundAsset.h"
#include "../Physics/MovingBodyData.h"
#include "../GameShared/VehicleHealthZoneData.h"
#include "../Global/Float32.h"
#include "../GameShared/AlignmentData.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace GameShared {
    class ChildComponentData : public Entity::BoneComponentData {
        Core::LinearTransform AlignTransform; // 0x80
        Audio::SoundAsset SoundEffect; // 0xC0
        Physics::MovingBodyData MovingBody; // 0xC8
        GameShared::VehicleHealthZoneData HealthZone; // 0xD0
        Float32 SoundEffectStartRpm; // 0xF0
        Float32 SoundEffectStopRpm; // 0xF4
        GameShared::AlignmentData AlignmentSettings; // 0xF8
        Boolean WorldSpacePositionLock; // 0x100
        Boolean EnableAlignToCamera; // 0x101
        char pad_0x102[0xE];
    }; // 0x110
    static_assert(sizeof(ChildComponentData) == 0x110);
}
#pragma pack(pop)