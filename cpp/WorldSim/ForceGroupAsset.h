// Object: ForceGroupAsset
// ClassId: 505
// RuntimeId: 4585
// TypeInfo: 0x0000000144EC08C0
#include "../Core/Asset.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace WorldSim {
    class ForceGroupAsset : public Core::Asset {
        Boolean MeshScattering; // 0x20
        Boolean Vegetation; // 0x21
        Boolean Effects; // 0x22
        Boolean Cloth; // 0x23
        Boolean Physics; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(ForceGroupAsset) == 0x28);
}
#pragma pack(pop)