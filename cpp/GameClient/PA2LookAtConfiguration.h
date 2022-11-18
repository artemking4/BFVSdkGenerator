// Object: PA2LookAtConfiguration
// ClassId: 5005
// RuntimeId: 63521
// TypeInfo: 0x0000000144E44EC0
#include "../Core/SystemSettings.h"
#include "../GameClient/PA2LookAtGameStateSetting.h"
#include "../Ant/AntRef.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameClient {
    class PA2LookAtConfiguration : public Core::SystemSettings {
        Array<GameClient::PA2LookAtGameStateSetting> OnGameStates; // 0x20
        Array<GameClient::PA2LookAtGameStateSetting> OffGameStates; // 0x28
        Ant::AntRef ControllerGameState; // 0x30
        Int32 DefaultOnController; // 0x44
        Int32 OffController; // 0x48
        Ant::AntRef TargetGameState; // 0x4C
        Ant::AntRef SnapToTargetGameState; // 0x60
        char pad_0x74[0x4];
    }; // 0x78
    static_assert(sizeof(PA2LookAtConfiguration) == 0x78);
}
#pragma pack(pop)