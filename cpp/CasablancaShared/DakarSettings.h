// Object: DakarSettings
// ClassId: 4974
// RuntimeId: 43853
// TypeInfo: 0x0000000144D4FE50
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DakarSettings : public Core::SystemSettings {
        Int32 RoundStartCountdownOverride; // 0x20
        Int32 JoiningDisabledTime; // 0x24
        Int32 SkipTimerCountdown; // 0x28
        Boolean ServerAllowLateJoins; // 0x2C
        Boolean ServerCloseAtPlane; // 0x2D
        Boolean ServerDisableReadyFlag; // 0x2E
        Boolean FastDeploy; // 0x2F
        Boolean SkipPreRound; // 0x30
        Boolean AssertOnMultipleSquadsInTeam; // 0x31
        Boolean DisablePartyMerging; // 0x32
        Boolean UseFirstPlaneOnly; // 0x33
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(DakarSettings) == 0x38);
}
#pragma pack(pop)