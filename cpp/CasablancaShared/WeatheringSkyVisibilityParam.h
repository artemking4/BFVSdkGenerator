// Object: WeatheringSkyVisibilityParam
// ClassId: 5713
// RuntimeId: 20884
// TypeInfo: 0x0000000144CFB250
#include "../Core/DataContainer.h"
#include "../Core/Vec2.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WeatheringSkyVisibilityParam : public Core::DataContainer {
        Core::Vec2 SkyVisibilityRange; // 0x18
        Float32 SkyVisibilityExponent; // 0x20
        Float32 IndoorThreshold; // 0x24
        Boolean DisableGlobalWeatheringIndoor; // 0x28
        Boolean DisableMaterialWeatheringIndoor; // 0x29
        Boolean UseDefaultMaterialOpIndoor; // 0x2A
        char pad_0x2B[0x5];
    }; // 0x30
    static_assert(sizeof(WeatheringSkyVisibilityParam) == 0x30);
}
#pragma pack(pop)