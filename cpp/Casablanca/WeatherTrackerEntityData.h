// Object: WeatherTrackerEntityData
// ClassId: 3923
// RuntimeId: 6922
// TypeInfo: 0x0000000144C33A70
#include "../Entity/EntityData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class WeatherTrackerEntityData : public Entity::EntityData {
        CString WeatherType; // 0x20
    }; // 0x28
    static_assert(sizeof(WeatherTrackerEntityData) == 0x28);
}
#pragma pack(pop)