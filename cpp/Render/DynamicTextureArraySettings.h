// Object: DynamicTextureArraySettings
// ClassId: 1528
// RuntimeId: 54574
// TypeInfo: 0x0000000144F17250
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Render {
    class DynamicTextureArraySettings : public Core::DataContainer {
        Uint32 IesTextureSize; // 0x18
        Uint32 IesTextureArraySize; // 0x1C
    }; // 0x20
    static_assert(sizeof(DynamicTextureArraySettings) == 0x20);
}
#pragma pack(pop)