// Object: PartComponentData
// ClassId: 1814
// RuntimeId: 62671
// TypeInfo: 0x0000000144E828C0
#include "../Entity/GameComponentData.h"
#include "../GameShared/HealthStateData.h"
#include "../GameShared/PartLinkData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class PartComponentData : public Entity::GameComponentData {
        Array<GameShared::HealthStateData> HealthStates; // 0x80
        Array<GameShared::PartLinkData> PartLinks; // 0x88
        Boolean IsSupported; // 0x90
        Boolean IsFragile; // 0x91
        Boolean AffectsBoundingBox; // 0x92
        Boolean IsNetworkable; // 0x93
        Boolean IsWindow; // 0x94
        Boolean AnimatePhysics; // 0x95
        char pad_0x96[0xA];
    }; // 0xA0
    static_assert(sizeof(PartComponentData) == 0xA0);
}
#pragma pack(pop)