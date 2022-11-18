// Object: ControllableEntityData
// ClassId: 3299
// RuntimeId: 20446
// TypeInfo: 0x0000000144E6D5D0
#include "../Physics/GamePhysicsEntityData.h"
#include "../Global/Boolean.h"
#include "../GameShared/TeamId.h"
#include "../Global/Float32.h"
#include "../Entity/MaterialDecl.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace GameShared {
    class ControllableEntityData : public Physics::GamePhysicsEntityData {
        GameShared::TeamId DefaultTeam; // 0xA0
        Float32 LowHealthThreshold; // 0xA4
        Entity::MaterialDecl MaterialPair; // 0xA8
        char pad_0xAC[0x4];
        Array<Int32> SuppressedInputs; // 0xB0
        Boolean UsePrediction; // 0xB8
        Boolean ShouldChangeTeamWhenPlayerEnters; // 0xB9
        Boolean ResetTeamOnLastPlayerExits; // 0xBA
        Boolean Immortal; // 0xBB
        Boolean FakeImmortal; // 0xBC
        Boolean ForceForegroundRendering; // 0xBD
        Boolean IsNotSuspendable; // 0xBE
        char pad_0xBF[0x1];
    }; // 0xC0
    static_assert(sizeof(ControllableEntityData) == 0xC0);
}
#pragma pack(pop)