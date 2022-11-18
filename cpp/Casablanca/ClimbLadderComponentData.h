// Object: ClimbLadderComponentData
// ClassId: 1744
// RuntimeId: 1891
// TypeInfo: 0x0000000144C7E500
#include "../Entity/GameComponentData.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../GameShared/AimingConstraintsData.h"
#include "../CasablancaShared/ClimbLadderBinding.h"

#pragma pack(push, 16)
namespace Casablanca {
    class ClimbLadderComponentData : public Entity::GameComponentData {
        Int32 ClimbPhase; // 0x80
        Int32 ConnectPhase; // 0x84
        Float32 ConnectJointDisplacement; // 0x88
        GameShared::AimingConstraintsData FreeLookAimingConstraints; // 0x8C
        CasablancaShared::ClimbLadderBinding Binding; // 0x9C
        Boolean FreeLook; // 0x100
        char pad_0x101[0xF];
    }; // 0x110
    static_assert(sizeof(ClimbLadderComponentData) == 0x110);
}
#pragma pack(pop)