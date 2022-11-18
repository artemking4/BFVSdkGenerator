// Object: SoldierWeatheringEntityData
// ClassId: 3225
// RuntimeId: 52322
// TypeInfo: 0x0000000144CFB150
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SoldierWeatheringEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 MudPerMeter; // 0x24
        Float32 MudWaterFadeOutTime; // 0x28
        Float32 MudRainFadeOutTime; // 0x2C
        Float32 WetnessSwimmingFadeInTime; // 0x30
        Float32 WetnessRainFadeInTime; // 0x34
        Float32 WetnessPerMeter; // 0x38
        Float32 WetnessFadeOutTime; // 0x3C
        Float32 SnowPerMeter; // 0x40
        Float32 SnowWaterFadeOutTime; // 0x44
        Float32 SnowRainFadeOutTime; // 0x48
        Float32 DustPerMeter; // 0x4C
        Float32 DustWaterFadeOutTime; // 0x50
        Float32 DustRainFadeOutTime; // 0x54
        Float32 RecentlyProneOnBackFadeOutTime; // 0x58
        Float32 RecentlyProneOnFrontFadeOutTime; // 0x5C
        Float32 HighWaterMarkFadeOutTime; // 0x60
        Float32 Rain; // 0x64
        Boolean WeatheringEventsEnabled; // 0x68
        Boolean Soldier_ProneOnBack; // 0x69
        char pad_0x6A[0x6];
    }; // 0x70
    static_assert(sizeof(SoldierWeatheringEntityData) == 0x70);
}
#pragma pack(pop)