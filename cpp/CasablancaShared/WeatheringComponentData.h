// Object: WeatheringComponentData
// ClassId: 1924
// RuntimeId: 36661
// TypeInfo: 0x0000000144CFB5D0
#include "../Entity/GameComponentData.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/WeatheringOverrideEvent.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class WeatheringComponentData : public Entity::GameComponentData {
        Array<Int32> OutputPropertyIds; // 0x80
        Array<Int32> TargetOutputPropertyIds; // 0x88
        Array<CasablancaShared::WeatheringOverrideEvent> OverrideEvents; // 0x90
        Float32 DistanceToTerrainThreshold; // 0x98
        Float32 Velocity; // 0x9C
        Boolean AutoEnable; // 0xA0
        char pad_0xA1[0xF];
    }; // 0xB0
    static_assert(sizeof(WeatheringComponentData) == 0xB0);
}
#pragma pack(pop)