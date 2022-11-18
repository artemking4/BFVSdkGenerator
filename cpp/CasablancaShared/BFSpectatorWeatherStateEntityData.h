// Object: BFSpectatorWeatherStateEntityData
// ClassId: 2145
// RuntimeId: 1455
// TypeInfo: 0x0000000144D422D0
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFSpectatorWeatherStateEntityData : public Entity::EntityData {
        Int32 WeatherStateIndex; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BFSpectatorWeatherStateEntityData) == 0x28);
}
#pragma pack(pop)