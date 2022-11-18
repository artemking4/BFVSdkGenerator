// Object: WaterDepthComponentData
// ClassId: 1919
// RuntimeId: 3496
// TypeInfo: 0x0000000144E81E40
#include "../Entity/GameComponentData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace GameShared {
    class WaterDepthComponentData : public Entity::GameComponentData {
        Core::Realm Realm; // 0x80
        Float32 CapWaterDepthAt; // 0x84
        Uint32 UpdateRate; // 0x88
        Float32 CullingDistance; // 0x8C
        Boolean AutoStart; // 0x90
        Boolean ResetOnStop; // 0x91
        Boolean Enabled; // 0x92
        char pad_0x93[0xD];
    }; // 0xA0
    static_assert(sizeof(WaterDepthComponentData) == 0xA0);
}
#pragma pack(pop)