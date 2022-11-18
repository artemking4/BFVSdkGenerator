// Object: WaterEffectSetup
// ClassId: 912
// RuntimeId: 40543
// TypeInfo: 0x0000000144F72C40
#include "../Core/Asset.h"
#include "../WaterInteractSim/WaterAmbientFoamEffectSpawner.h"

#pragma pack(push, 8)
namespace WaterInteractSim {
    class WaterEffectSetup : public Core::Asset {
        Array<WaterInteractSim::WaterAmbientFoamEffectSpawner> AmbientEffects; // 0x20
    }; // 0x28
    static_assert(sizeof(WaterEffectSetup) == 0x28);
}
#pragma pack(pop)