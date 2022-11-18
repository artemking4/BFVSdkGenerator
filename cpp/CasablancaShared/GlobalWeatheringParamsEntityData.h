// Object: GlobalWeatheringParamsEntityData
// ClassId: 2788
// RuntimeId: 62306
// TypeInfo: 0x0000000144CFB1D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/WeatheringOverrideEvent.h"
#include "../CasablancaShared/WeatheringSkyVisibilityParam.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GlobalWeatheringParamsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<CasablancaShared::WeatheringOverrideEvent> OverrideEvents; // 0x28
        CasablancaShared::WeatheringSkyVisibilityParam SkyVisibilityParam; // 0x30
    }; // 0x38
    static_assert(sizeof(GlobalWeatheringParamsEntityData) == 0x38);
}
#pragma pack(pop)