// Object: MeshLodGroup
// ClassId: 567
// RuntimeId: 50404
// TypeInfo: 0x0000000144F1D400
#include "../Core/Asset.h"
#include "../Global/Float32.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Render {
    class MeshLodGroup : public Core::Asset {
        Float32 Lod1Distance; // 0x20
        Float32 Lod2Distance; // 0x24
        Float32 Lod3Distance; // 0x28
        Float32 Lod4Distance; // 0x2C
        Float32 Lod5Distance; // 0x30
        Float32 Lod6Distance; // 0x34
        Float32 ShadowDistance; // 0x38
        Float32 CullScreenArea; // 0x3C
        CString RuntimeShortName; // 0x40
        Int32 ShaderQualitySwitch; // 0x48
        Int32 ShaderQualitySwitchGen4a; // 0x4C
        Int32 ShaderQualitySwitchGen4b; // 0x50
        char pad_0x54[0x4];
    }; // 0x58
    static_assert(sizeof(MeshLodGroup) == 0x58);
}
#pragma pack(pop)