// Object: ImaginaryAudioMaterial
// ClassId: 535
// RuntimeId: 53146
// TypeInfo: 0x0000000144F1D200
#include "../Core/Asset.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Render {
    class ImaginaryAudioMaterial : public Core::Asset {
        Int32 MaterialType; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ImaginaryAudioMaterial) == 0x28);
}
#pragma pack(pop)