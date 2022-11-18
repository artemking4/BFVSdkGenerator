// Object: ClothSystemSettings
// ClassId: 1413
// RuntimeId: 32048
// TypeInfo: 0x0000000144E21750
#include "../Core/DataContainer.h"
#include "../Core/QualityLevel.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Cloth {
    class ClothSystemSettings : public Core::DataContainer {
        Core::QualityLevel ClothSystemQualityLevel; // 0x18
        Float32 DefaultActivationRadius; // 0x1C
        Uint32 Lod0BucketSize; // 0x20
        Uint32 Lod1BucketSize; // 0x24
        Uint32 Lod2BucketSize; // 0x28
        Uint32 Lod3BucketSize; // 0x2C
        Uint32 Lod4BucketSize; // 0x30
        Uint32 Lod5BucketSize; // 0x34
        Boolean UseLodBuckets; // 0x38
        Boolean GPUWrappingEnabled; // 0x39
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(ClothSystemSettings) == 0x40);
}
#pragma pack(pop)