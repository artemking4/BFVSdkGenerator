// Object: LightComponentData
// ClassId: 1794
// RuntimeId: 43221
// TypeInfo: 0x0000000144E9AD10
#include "../Entity/GameComponentData.h"
#include "../WorldSim/LocalLightEntityData.h"

#pragma pack(push, 16)
namespace GameShared {
    class LightComponentData : public Entity::GameComponentData {
        WorldSim::LocalLightEntityData Light; // 0x80
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(LightComponentData) == 0x90);
}
#pragma pack(pop)