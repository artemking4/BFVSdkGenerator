// Object: GameAnimationSettings
// ClassId: 4988
// RuntimeId: 49608
// TypeInfo: 0x0000000144E6CF50
#include "../Core/SystemSettings.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class GameAnimationSettings : public Core::SystemSettings {
        Array<CString> AntOnClientOnlyGamemodes; // 0x20
        Float32 TemporalLoddingFirstDeltaTime; // 0x28
        Float32 TemporalLoddingSecondDeltaTime; // 0x2C
        Float32 TemporalLoddingThirdDeltaTime; // 0x30
        Float32 TemporalLoddingFourthDeltaTime; // 0x34
        Float32 TemporalLoddingFifthDeltaTime; // 0x38
        Float32 TemporalLoddingSixthDeltaTime; // 0x3C
        Float32 TemporalLoddingFirstDistance; // 0x40
        Float32 TemporalLoddingSecondDistance; // 0x44
        Float32 TemporalLoddingThirdDistance; // 0x48
        Float32 TemporalLoddingFourthDistance; // 0x4C
        Float32 TemporalLoddingFifthDistance; // 0x50
        Float32 TemporalLoddingSixthDistance; // 0x54
        Float32 TemporalLoddingFarDistance; // 0x58
        Boolean ServerEnable; // 0x5C
        Boolean ClientEnable; // 0x5D
        Boolean UseRawGamepadInput; // 0x5E
        char pad_0x5F[0x1];
    }; // 0x60
    static_assert(sizeof(GameAnimationSettings) == 0x60);
}
#pragma pack(pop)