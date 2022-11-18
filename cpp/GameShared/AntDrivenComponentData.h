// Object: AntDrivenComponentData
// ClassId: 1714
// RuntimeId: 13077
// TypeInfo: 0x0000000144E831C0
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class AntDrivenComponentData : public Entity::GameComponentData {
        Boolean ResetControllerTreeOnTeleport; // 0x80
        Boolean ZeroTrajectoryVelocityOnTeleport; // 0x81
        char pad_0x82[0xE];
    }; // 0x90
    static_assert(sizeof(AntDrivenComponentData) == 0x90);
}
#pragma pack(pop)