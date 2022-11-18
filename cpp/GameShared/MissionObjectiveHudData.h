// Object: MissionObjectiveHudData
// ClassId: 4300
// RuntimeId: 13007
// TypeInfo: 0x0000000144E774C0
#include "../Core/DataContainer.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Core/Vec2.h"

#pragma pack(push, 16)
namespace GameShared {
    class MissionObjectiveHudData : public Core::DataContainer {
        Float32 CameraRotation; // 0x18
        Float32 CameraFov; // 0x1C
        Core::Vec3 CameraPosition; // 0x20
        Float32 CameraDistance; // 0x30
        Float32 CameraLookDistance; // 0x34
        Core::Vec2 VerticalBoundaries; // 0x38
        Core::Vec2 HorizontalBoundaries; // 0x40
        char pad_0x48[0x8];
    }; // 0x50
    static_assert(sizeof(MissionObjectiveHudData) == 0x50);
}
#pragma pack(pop)