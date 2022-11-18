// Object: ClothRendererSettings
// ClassId: 1412
// RuntimeId: 31385
// TypeInfo: 0x0000000144E217D0
#include "../Core/DataContainer.h"
#include "../Core/QualityLevel.h"

#pragma pack(push, 8)
namespace Cloth {
    class ClothRendererSettings : public Core::DataContainer {
        Core::QualityLevel ClothRendererQualityLevel; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(ClothRendererSettings) == 0x20);
}
#pragma pack(pop)