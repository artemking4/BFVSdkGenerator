// Object: LensFlareComponentData
// ClassId: 1793
// RuntimeId: 11739
// TypeInfo: 0x0000000144E9AB10
#include "../Entity/GameComponentData.h"
#include "../WorldSim/LensFlareEntityData.h"

#pragma pack(push, 16)
namespace GameShared {
    class LensFlareComponentData : public Entity::GameComponentData {
        WorldSim::LensFlareEntityData LensFlare; // 0x80
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(LensFlareComponentData) == 0x90);
}
#pragma pack(pop)