// Object: RadiosityMaterial
// ClassId: 4554
// RuntimeId: 63096
// TypeInfo: 0x0000000144F1CD80
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../RenderBase/RadiosityBackfaceType.h"

#pragma pack(push, 16)
namespace Render {
    class RadiosityMaterial : public Core::DataContainer {
        CString Name; // 0x18
        Float32 EmissiveIntensity; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Color; // 0x30
        Float32 Opacity; // 0x40
        RenderBase::RadiosityBackfaceType BackfaceType; // 0x44
        char pad_0x48[0x8];
    }; // 0x50
    static_assert(sizeof(RadiosityMaterial) == 0x50);
}
#pragma pack(pop)