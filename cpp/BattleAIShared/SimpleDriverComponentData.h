// Object: SimpleDriverComponentData
// ClassId: 1835
// RuntimeId: 5039
// TypeInfo: 0x0000000144BFEDD0
#include "../Entity/GameComponentData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../BattleAIShared/SimpleDriverBinding.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class SimpleDriverComponentData : public Entity::GameComponentData {
        Core::Vec3 ReferencePoint; // 0x80
        Float32 ReachWaypointRadius; // 0x90
        Float32 SpeedMultiplier; // 0x94
        BattleAIShared::SimpleDriverBinding DriverSignals; // 0x98
        Boolean OnlyCheckRadius; // 0x138
        Boolean UsePlayerInput; // 0x139
        Boolean UseAnimation; // 0x13A
        Boolean OnlyDriveForward; // 0x13B
        char pad_0x13C[0x4];
    }; // 0x140
    static_assert(sizeof(SimpleDriverComponentData) == 0x140);
}
#pragma pack(pop)