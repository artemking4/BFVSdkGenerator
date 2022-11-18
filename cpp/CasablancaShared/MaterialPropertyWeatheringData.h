// Object: MaterialPropertyWeatheringData
// ClassId: 4260
// RuntimeId: 32098
// TypeInfo: 0x0000000144CFB2D0
#include "../Entity/PhysicsMaterialRelationPropertyData.h"
#include "../CasablancaShared/WeatheringParam.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class MaterialPropertyWeatheringData : public Entity::PhysicsMaterialRelationPropertyData {
        Array<CasablancaShared::WeatheringParam> Parameters; // 0x20
    }; // 0x28
    static_assert(sizeof(MaterialPropertyWeatheringData) == 0x28);
}
#pragma pack(pop)