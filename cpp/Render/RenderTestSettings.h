// Object: RenderTestSettings
// ClassId: 4566
// RuntimeId: 32852
// TypeInfo: 0x0000000144F20C00
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Render {
    class RenderTestSettings : public Core::DataContainer {
        Uint32 Case; // 0x18
        Uint32 SubCase; // 0x1C
        Int32 Next; // 0x20
        Boolean Enable; // 0x24
        Boolean DrawNumberEnable; // 0x25
        char pad_0x26[0x2];
    }; // 0x28
    static_assert(sizeof(RenderTestSettings) == 0x28);
}
#pragma pack(pop)