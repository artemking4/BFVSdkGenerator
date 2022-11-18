// Object: WSLevelSetup
// ClassId: 5342
// RuntimeId: 38962
// TypeInfo: 0x0000000144CFAF50
#include "../CasablancaShared/WSNodeBase.h"
#include "../CasablancaShared/WSPackageSet.h"
#include "../CasablancaShared/WeatherState.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WSLevelSetup : public CasablancaShared::WSNodeBase {
        Array<CasablancaShared::WSPackageSet> PackageSets; // 0x28
        Array<CasablancaShared::WeatherState> AvailableWeatherStates; // 0x30
        Float32 FadeTime; // 0x38
        Float32 MaxRandomDelayUntilFadeStarts; // 0x3C
        Float32 MinTimeBetweenWeatherSwitches; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(WSLevelSetup) == 0x48);
}
#pragma pack(pop)